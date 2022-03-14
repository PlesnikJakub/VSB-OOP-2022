#include "Product.h"

Product::Product(string name, double price)
{
	this->name = name;
	this->price = price;
}

string Product::GetName()
{
	return this->name;
}

double Product::GetPrice()
{
	return this->price;
}
