cmake_minimum_required (VERSION 2.6)

project (direntcpp)


option(DIRENTCPP_WITH_TESTS "Build tests" OFF)




if(DIRENTCPP_WITH_TESTS)
        ENABLE_TESTING()
        include(CTest)
        add_subdirectory(tests)
endif(DIRENTCPP_WITH_TESTS)

