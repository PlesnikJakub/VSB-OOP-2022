#pragma once
#include <string>

using namespace std;

class Customer
{
private: 
	string name;
	string address;

public:
	Customer(string name, string address);
	string GetName();
	string GetAddress();
};

