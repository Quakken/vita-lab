include("${VITASDK}/share/vita.cmake" REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(hello_world
	main.cpp
)

target_link_libraries(hello_world
	debug_screen
)

vita_create_self(hello_world.self hello_world)
vita_create_vpk(hello_world.vpk "VITALAB01" hello_world.self
	VERSION "01.00"
	NAME "Hello world demo"
)
