include(FetchContent)
FetchContent_Declare(gtest
  QUIET
  URL https://github.com/google/googletest/archive/release-1.11.0.tar.gz
)
# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

add_executable(
    unit_tests
    example_add.cpp
    example_subtract.cpp
    )

target_link_libraries(unit_tests
  PRIVATE
    example
    gtest_main
  )

add_executable(
    sample1_unittest
    sample1_unittest.cc
    sample1.cc
    )

target_link_libraries(sample1_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample2_unittest
    sample2_unittest.cc
    sample2.cc
    )

target_link_libraries(sample2_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample3_unittest
    sample3_unittest.cc
    )

target_link_libraries(sample3_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample4_unittest
    sample4_unittest.cc
    sample4.cc
    )

target_link_libraries(sample4_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample5_unittest
    sample5_unittest.cc
    sample1.cc
    )

target_link_libraries(sample5_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample6_unittest
    sample6_unittest.cc
    )

target_link_libraries(sample6_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample7_unittest
    sample7_unittest.cc
    )

target_link_libraries(sample7_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample8_unittest
    sample8_unittest.cc
    )

target_link_libraries(sample8_unittest
  PRIVATE
    gtest_main
)

add_executable(
    sample9_unittest
    sample9_unittest.cc
    )

target_link_libraries(sample9_unittest
    PRIVATE
      gtest
  )

add_executable(
    sample10_unittest
    sample10_unittest.cc
    )

target_link_libraries(sample10_unittest
    PRIVATE
      gtest
  )

add_executable(
    sample11_unittest
    sample11_unittest.cc
    )

target_link_libraries(sample11_unittest
    PRIVATE
      gtest_main
  )

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests(unit_tests
  PROPERTIES
    LABELS "unit"
  DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )
