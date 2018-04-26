// Copyright 2017 Tarakanov Kirill

#include <gtest/gtest.h>
#include "include/Modify_Steck.h"

TEST(Tarakanov_Kirill_ModifySteckTest, Can_Create_ModifySteck) {
    // Arrange

    // Act

    // Assert
    ASSERT_NO_THROW(ModifySteck<int>());
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Can_Push_Val) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act

    // Assert
    ASSERT_NO_THROW(steck->Push(10));
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Is_Empty) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act
    steck->Push(10);
    bool empty = steck->IsEmpty();

    // Assert
    EXPECT_EQ(empty, 0);
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Can_LookTop) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act
    steck->Push(10);
    steck->Push(20);
    int onTop = steck->LookTop();

    // Assert
    EXPECT_EQ(onTop, 20);
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Can_Pop) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act
    steck->Push(10);
    steck->Push(-5);
    steck->Pop();
    int onTop = steck->LookTop();

    // Assert
    EXPECT_EQ(onTop, 10);
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Can_KnewSize) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act
    steck->Push(10);
    steck->Push(-5);
    steck->Push(4);
    steck->Push(0);
    steck->Push(3);

    // Assert
    EXPECT_EQ(steck->Size(), 5);
}

TEST(Tarakanov_Kirill_ModifySteckTest, ModifySteck_Can_FindMin) {
    // Arrange
    ModifySteck<int> *steck = new ModifySteck<int>();

    // Act
    steck->Push(10);
    steck->Push(20);
    int onTop = steck->FindMin();

    // Assert
    EXPECT_EQ(onTop, 10);
}
