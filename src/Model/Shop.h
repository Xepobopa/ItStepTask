#pragma once

#include <string>

class Shop
{
public:
	Shop();
	~Shop();

private:
	std::string m_Name;
	std::string m_Address;
	std::string m_PhoneNumber;
	std::string m_Type;
};
