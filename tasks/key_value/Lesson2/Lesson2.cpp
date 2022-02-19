// Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"

int main()
{
    std::cout << "Hello World!\n";

    KeyValue* firstKV = new KeyValue(0, 1.5);
    KeyValue* last = firstKV;
    for (int i = 1; i < 1000; i++)
    {
        last = last->CreateNext(i, 2.5);
    }

    KeyValue* current = firstKV;
    for (int i = 1; i < 1000; i++)
    {
        std::cout << current->GetKey() << std::endl;
        current = current->GetNext();
    }

    delete firstKV;
}
