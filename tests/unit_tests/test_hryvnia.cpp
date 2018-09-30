#include <iostream>

#include "gtest/gtest.h"
#include "hryvnia.h"
#include <string>

using namespace hryvnia_project;

TEST(TestHryvnia, HryvniaString) {
    EXPECT_EQ (getHryvniaString(0), "0 гривен");
    EXPECT_EQ (getHryvniaString(1), "1 гривна");
    EXPECT_EQ (getHryvniaString(2), "2 гривны");
    EXPECT_EQ (getHryvniaString(4), "4 гривны");
    EXPECT_EQ (getHryvniaString(5), "5 гривен");
    EXPECT_EQ (getHryvniaString(9), "9 гривен");
    EXPECT_EQ (getHryvniaString(10), "10 гривен");
    EXPECT_EQ (getHryvniaString(17), "17 гривен");
    EXPECT_EQ (getHryvniaString(100), "100 гривен");
    EXPECT_EQ (getHryvniaString(101), "101 гривна");
    EXPECT_EQ (getHryvniaString(114), "114 гривен");
    EXPECT_EQ (getHryvniaString(311), "311 гривен");
}

TEST(TestHryvnia, PennyString) {
    EXPECT_EQ (getPennyString(0), "0 копеек");
    EXPECT_EQ (getPennyString(1), "1 копейка");
    EXPECT_EQ (getPennyString(2), "2 копейки");
    EXPECT_EQ (getPennyString(4), "4 копейки");
    EXPECT_EQ (getPennyString(5), "5 копеек");
    EXPECT_EQ (getPennyString(9), "9 копеек");
    EXPECT_EQ (getPennyString(10), "10 копеек");
    EXPECT_EQ (getPennyString(17), "17 копеек");
    EXPECT_EQ (getPennyString(100), "100 копеек");
    EXPECT_EQ (getPennyString(101), "101 копейка");
    EXPECT_EQ (getPennyString(114), "114 копеек");
    EXPECT_EQ (getPennyString(311), "311 копеек");
}

TEST(TestHryvnia, HryvniaPennyString) {
    EXPECT_EQ (getHryvniaPennyString(0), "0 гривен 0 копеек");
    EXPECT_EQ (getHryvniaPennyString(1), "0 гривен 1 копейка");
    EXPECT_EQ (getHryvniaPennyString(2), "0 гривен 2 копейки");
    EXPECT_EQ (getHryvniaPennyString(10), "0 гривен 10 копеек");
    EXPECT_EQ (getHryvniaPennyString(38), "0 гривен 38 копеек");
    EXPECT_EQ (getHryvniaPennyString(100), "1 гривна 0 копеек");
    EXPECT_EQ (getHryvniaPennyString(101), "1 гривна 1 копейка");
    EXPECT_EQ (getHryvniaPennyString(311), "3 гривны 11 копеек");
    EXPECT_EQ (getHryvniaPennyString(1114), "11 гривен 14 копеек");
}