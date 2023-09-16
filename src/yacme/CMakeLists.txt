project (yacme LANGUAGES C)

add_executable(yacme
	"Editor.c"
	"invertmat.c"
)

target_include_directories(yacme SYSTEM PRIVATE
	${LIB_DIR}/freeglut/include
)

target_link_libraries(yacme PUBLIC 
	freeglut_static
)