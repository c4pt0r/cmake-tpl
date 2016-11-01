macro(add_project_test _TEST_NAME)
    add_executable(${_TEST_NAME}_tests
        ${_TEST_NAME}_tests.cc)
    target_link_libraries(${_TEST_NAME}_tests 
		${PROJECT_LIBRARIES}
		${GTEST_LIBRARIES})
    add_test(NAME project_${_TEST_NAME}_tests COMMAND ${_TEST_NAME}_tests)
    set_property(TARGET ${_TEST_NAME}_tests PROPERTY FOLDER "tests")
endmacro()


include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${PROJECT_INCLUDE_DIRS}
    ${GTEST_INCLUDE_DIRS})

add_project_test(foo)
