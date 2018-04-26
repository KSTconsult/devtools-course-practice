// Copyright 2017 Tarakanov Kirill

#include <gtest/gtest.h>
#include "include/Steck.h"

TEST(Tarakanov_Kirill_SteckTest, Can_Create_Node_withINT) {
    // Arrange

    // Act

    // Assert
    ASSERT_NO_THROW(Node<int>());
}

TEST(Tarakanov_Kirill_SteckTest, Can_Create_Node_withFLOAT) {
    // Arrange

    // Act

    // Assert
    ASSERT_NO_THROW(Node<float>());
}

TEST(Tarakanov_Kirill_SteckTest, Can_Create_Node_withParametrs) {
    // Arrange
    int val = 10;
    Node<int> _node(val, 0);

    // Act

    // Assert
    ASSERT_NO_THROW(Node<int>(6, &_node));
}

TEST(Tarakanov_Kirill_SteckTest, Can_Create_Steck) {
    // Arrange

    // Act

    // Assert
    ASSERT_NO_THROW(Steck<int>());
}

TEST(Tarakanov_Kirill_SteckTest, Steck_Can_Push_Val) {
    // Arrange
    Steck<int> *steck = new Steck<int>();

    // Act

    // Assert
    ASSERT_NO_THROW(steck->Push(10));
}

TEST(Tarakanov_Kirill_SteckTest, Steck_Is_Empty) {
    // Arrange
    Steck<int> *steck = new Steck<int>();

    // Act
    steck->Push(10);
    bool empty = steck->IsEmpty();

    // Assert
    EXPECT_EQ(empty, 0);
}

TEST(Tarakanov_Kirill_SteckTest, Steck_Can_LookTop) {
    // Arrange
    Steck<int> *steck = new Steck<int>();

    // Act
    steck->Push(10);
    steck->Push(20);
    int onTop = steck->LookTop();

    // Assert
    EXPECT_EQ(onTop, 20);
}

TEST(Tarakanov_Kirill_SteckTest, Steck_Can_Pop) {
    // Arrange
    Steck<int> *steck = new Steck<int>();

    // Act
    steck->Push(10);
    steck->Push(-5);
    steck->Pop();
    int onTop = steck->LookTop();

    // Assert
    EXPECT_EQ(onTop, 10);
}

TEST(Tarakanov_Kirill_SteckTest, Steck_Can_KnewSize) {
    // Arrange
    Steck<int> *steck = new Steck<int>();

    // Act
    steck->Push(10);
    steck->Push(-5);
    steck->Push(4);
    steck->Push(0);
    steck->Push(3);

    // Assert
    EXPECT_EQ(steck->Size(), 5);
}
