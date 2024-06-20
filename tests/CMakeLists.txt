add_executable(test_add test_add.cpp)
target_link_libraries(test_add MyProject)
add_test(NAME AddTest COMMAND test_add)

add_executable(test_sub test_sub.cpp)
target_link_libraries(test_sub MyProject)
add_test(NAME SubTest COMMAND test_sub)

add_executable(test_mul test_mul.cpp)
target_link_libraries(test_mul MyProject)
add_test(NAME MulTest COMMAND test_mul)

add_executable(test_div test_div.cpp)
target_link_libraries(test_div MyProject)
add_test(NAME DivTest COMMAND test_div)
