if(EXISTS "/home/hymcpp/modern-cpp-unit-1/build/c2/SoundexTest[1]_tests.cmake")
  include("/home/hymcpp/modern-cpp-unit-1/build/c2/SoundexTest[1]_tests.cmake")
else()
  add_test(SoundexTest_NOT_BUILT SoundexTest_NOT_BUILT)
endif()