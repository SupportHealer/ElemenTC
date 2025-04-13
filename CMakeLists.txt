cmake_minimum_required(VERSION 3.22)  
project(ElemenTC LANGUAGES CXX)  

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  

include(FetchContent)  
FetchContent_Declare(SFML  
   GIT_REPOSITORY https://github.com/SFML/SFML.git  
   GIT_TAG 3.0.0  
   GIT_SHALLOW ON)  
FetchContent_MakeAvailable(SFML)  

add_executable(main "Source_Files/Source.cpp"
"Source_Files/Card/Card.cpp"
"Source_Files/Card/Assets.cpp"

"Source_Files/Card/Card_Types/1_Star/Air.cpp" 
"Source_Files/Card/Card_Types/1_Star/Earth.cpp"
"Source_Files/Card/Card_Types/1_Star/Fire.cpp"
"Source_Files/Card/Card_Types/1_Star/Water.cpp"

"Source_Files/Card/Card_Types/2_Star/Ice.cpp"  
"Source_Files/Card/Card_Types/2_Star/Magma.cpp"
"Source_Files/Card/Card_Types/2_Star/Mud.cpp"
"Source_Files/Card/Card_Types/2_Star/Sand.cpp"
"Source_Files/Card/Card_Types/2_Star/Smoke.cpp"
"Source_Files/Card/Card_Types/2_Star/Steam.cpp"

"Source_Files/Player/Player.cpp" )

target_compile_features(main PRIVATE cxx_std_17)  
target_link_libraries(main PRIVATE SFML::Graphics SFML::System SFML::Window)

target_include_directories(main PRIVATE "Header_Files"
"Header_Files/Card"
"Header_Files/Card/Card_Types"

"Header_Files/Card/Card_Types/1_Star"
"Header_Files/Card/Card_Types/2_Star"

"Header_Files/Player" )
