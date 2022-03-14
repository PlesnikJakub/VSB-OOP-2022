#pragma once
#include "Customer.h"
#include "Product.h"
class Invoice
{
private:
	Customer* customer;
	Product** products;
	int itemsMaxCount;
	int itemsCount;

public:
	Invoice(Customer* c, int itemsMaxCount);
	~Invoice();
	void AddProduct(string name, double price);
	double GetTotalPrice();
};

