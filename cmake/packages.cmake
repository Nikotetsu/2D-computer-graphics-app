include(FetchContent)

FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG	   ${SFML_VERSION}
)
FetchContent_MakeAvailable(SFML)