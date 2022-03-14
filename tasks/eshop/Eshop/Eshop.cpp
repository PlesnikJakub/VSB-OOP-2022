// Eshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Customer.h"
#include "Invoice.h"
#include "Product.h"
#include "Eshop.h"

int main()
{
    std::cout << "Eshop!\n";

    Customer* me = new Customer("Jakub","IWonTell");

    Invoice* invoice = new Invoice(me, 2);
    invoice->AddProduct("Tesla", 80.0);
    invoice->AddProduct("ABC", 40.0);

    double totalPrice = invoice->GetTotalPrice();
    std::cout << "total price: " << totalPrice << std::endl;

    delete me;
    delete invoice;  
}
