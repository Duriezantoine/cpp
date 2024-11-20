
#include "Contact.hpp"

std::string Contact::getFirstName(void) const
{
	return (this->_firstname);
}

void Contact::setFirstName(std::string str)
{
	this->_firstname = str;
}

std::string Contact::getSurname(void) const
{
	return (this->_surname);
}

void Contact::setSurname(std::string str)
{
	this->_surname = str;
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

void Contact::setNickname(std::string str)
{
	this->_nickname = str;
}

std::string Contact::getPhone(void) const
{
	return (this->_phone);
}

void Contact::setPhone(std::string str)
{
	this->_phone = str;
}

std::string Contact::getSecret(void) const
{
	return (this->_secret);
}

void Contact::setSecret(std::string str)
{
	this->_secret = str;
}