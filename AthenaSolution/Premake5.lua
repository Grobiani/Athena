workspace "Athena"
configurations { "Debug", "Release" }
language "C++"
cppdialect "C++20"
architecture "x64"
startproject "Sandbox"

group "Libs"

group ""

lib_includes = ""

project "Athena"
    kind "StaticLib"
    location "Athena"
    staticruntime "on"

    files {"%{prj.name}/src/**.h", "%{prj.name}/src/**.c" }

    bindirs ""

    includedirs {

        "%{prj.name}/src"

    }

    filter "configurations:Debug"
        defines { "AT_DEBUG" }
        symbols "On"
        targetdir "Build/Debug"

    filter "configurations:Release"
        defines { "AT_RELEASE" }
        optimize "On"
        targetdir "Build/Release"

    filter "system:windows" 
        defines {
            "AT_WINDOWS"
        }

project "Sandbox" 
    kind "ConsoleApp"
    staticruntime "on"
    location "Sandbox"

    files {"%{prj.name}/src/**.h", "%{prj.name}/src/**.c" }

    includedirs {

        "%{prj.name}/src",
        "Athena/src"

    }

    links {

        "Athena"

    }

    filter "configurations:Debug"
        symbols "On"
        runtime "Debug"
        targetdir "Build/Debug"

    filter "configurations:Release"
        optimize "On"
        runtime "Release"
        targetdir "Build/Release"