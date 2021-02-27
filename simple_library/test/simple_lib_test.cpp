#include <lib.h>
#include <catch2/catch_all.hpp>

TEST_CASE("first test"){
    CHECK(simple::simpleInt() == 42);
}