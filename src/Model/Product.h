#pragma once

#include <string>

class Product
{
public:
	Product();
	~Product();

	std::string GetName() const { return m_Name; };
	std::string GetCategory()const { return m_Category; };
	float GetPrice()const { return m_price; };

private:
	std::string m_Name;
	std::string m_Category;
	float m_price;

};