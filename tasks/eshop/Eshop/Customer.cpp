#include "Customer.h"

Customer::Customer(string name, string address)
{
	this->name = name;
	this->address = address;
}

string Customer::GetName()
{
	return this->name;
}

string Customer::GetAddress()
{
	return this->address;
}
