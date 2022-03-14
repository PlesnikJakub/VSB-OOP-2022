#include "Invoice.h"

Invoice::Invoice(Customer* c, int itemsMaxCount)
{
	this->customer = c;
	this->products = new Product * [itemsMaxCount];
	this->itemsMaxCount = itemsMaxCount;
	this->itemsCount = 0;
}

Invoice::~Invoice()
{
	for (int i = 0; i < this->itemsCount; i++)
	{
		delete this->products[i];
	}

	delete[] this->products;
}

void Invoice::AddProduct(string name, double price)
{
	if (this->itemsCount >= this->itemsMaxCount)
	{
		return;
	}

	this->products[this->itemsCount] = new Product(name, price);
	this->itemsCount+=1;

	return;
}

double Invoice::GetTotalPrice()
{
	double sum = 0;

	for (int i = 0; i < this->itemsCount; i++)
	{
		sum += this->products[i]->GetPrice();
	}

	return sum;
}
