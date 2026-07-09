# Debug screen taken from the PS Vita SDK samples
# https://github.com/vitasdk/samples/tree/master

add_library(debug_screen
	debugScreen.c
)

target_include_directories(debug_screen
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(debug_screen PUBLIC
	SceDisplay_stub
)
