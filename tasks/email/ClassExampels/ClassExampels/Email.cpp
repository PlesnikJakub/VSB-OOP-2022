#include "Email.h"

Email::Email(string from, string to, string subject, string body)
{
	this->from = from;
	this->to = to;
	this->subject = subject;
	this->body = body;
}

void Email::SetFrom(string f)
{
	this->from = f;
}

string Email::GetFrom()
{
	return this->from;
}

void Email::SetTo(string to)
{
	this->to = to;
}

string Email::GetTo()
{
	return this->to;
}
