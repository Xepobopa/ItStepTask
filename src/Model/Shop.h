#pragma once

#include <fstream>
#include <string>
#include <vector>

class Shop
{
public:
	Shop(const std::string& fullpathShop)
	{
		std::ifstream file(fullpathShop);
        if (file.is_open())
        {
			while (!file.eof())
			{			
				getline(file, m_buff);
				m_Address.push_back(m_buff);
				m_buff.clear();
				getline(file, m_buff);
				m_PhoneNumber.push_back(m_buff);
				m_buff.clear();
				getline(file, m_buff);
				m_Type.push_back(m_buff);
				m_buff.clear();
			}
        }
		file.close();
	};
	~Shop();

	std::string m_buff;
	std::vector<std::string> m_Address;
	std::vector<std::string> m_PhoneNumber;
	std::vector<std::string> m_Type;
};
