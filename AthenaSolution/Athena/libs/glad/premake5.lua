project "glad"
    kind "StaticLib"
    language "C"
    systemversion "latest"
    staticruntime "on"

    files {
        "src/**.c",
        "include/**.h"
    }

    includedirs {
        "include"
    }


    filter "configurations:Debug"
        runtime "Debug"
        symbols "on"

        defines{
            "GLAD_DEBUG"
        }

    filter "configurations:Release"
        runtime "Release"
        optimize "on"
