add_library (flatbuf holojam_generated.h)

# Make sure the compiler can find include files for our library
# when other libraries or executables link to flatbuf
target_include_directories (flatbuf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${GOOGLE_FLATBUF_LIB})
