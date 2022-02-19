// ClassExampels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "Email.h"

int main()
{
    std::cout << "Hello World!\n";

    // create new instance
    Email* email1 = new Email("from@test.cz", "to@test.cz", "First mail", "Some content");

    // set value
    email1->SetFrom("test@test.cz");

    // get value
    std::cout << email1->GetFrom();
    printf("%s \n", "\nA string");

    delete email1;
}