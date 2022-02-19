#pragma once
#include <string>

using namespace std;

class Email
{
private:
	string from;
	string to;
	string subject;
	string body;

public:
	Email(string from, string to, string subject, string body);
	void SetFrom(string from);
	string GetFrom();
	void SetTo(string to);
	string GetTo();
};

