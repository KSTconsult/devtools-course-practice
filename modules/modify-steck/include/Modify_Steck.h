// Copyright 2018 Tarakanov Kirill

#ifndef MODULES_MODIFY_STECK_INCLUDE_MODIFY_STECK_H_
#define MODULES_MODIFY_STECK_INCLUDE_MODIFY_STECK_H_

#pragma once
#include "Steck.h"
#include <math.h>

template <typename T>
class ModifySteck {
 private:
    Steck<T>* steck1;
    Steck<T>* steck2;
 public:
    ModifySteck();

    bool IsEmpty();
    int Size();
    void Push(T val);
    void Pop();
    T LookTop();
    T FindMin();
};

template <typename T>
ModifySteck<T>::ModifySteck() {
    steck1 = new Steck<T>();
    steck2 = new Steck<T>();
}

template <typename T>
bool ModifySteck<T>::IsEmpty() {
    if (steck1->IsEmpty())
        return 1;
    else
        return 0;
}

template <typename T>
int ModifySteck<T>::Size() {
    return steck1->Size();
}

template <typename T>
void ModifySteck<T>::Push(T val) {
    if (steck1->IsEmpty()) {
        steck1->Push(val);
        steck2->Push(val);
    } else {
        steck1->Push(val);
        T curVal = steck2->LookTop();
        if (val < curVal)
            curVal = val;
        steck2->Push(curVal);
    }
}

template <typename T>
void ModifySteck<T>::Pop() {
    steck1->Pop();
    steck2->Pop();
}

template <typename T>
T ModifySteck<T>::LookTop() {
    return steck1->LookTop();
}

template <typename T>
T ModifySteck<T>::FindMin() {
    return steck2->LookTop();
}

#endif  // MODULES_MODIFY_STECK_INCLUDE_MODIFY_STECK_H_
