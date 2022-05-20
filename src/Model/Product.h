#pragma once

#include <string>
#include <fstream>
#include <iostream>

class Product
{
public:
	Product(const std::string& fullpathProduct)
	{
		std::ifstream file(fullpathProduct);
        if (file.is_open())
        {
			while (getline(file, m_buff))
			{			
				totalString += m_buff;
			}
        }
		m_buff.clear();
		file.close();

		m_Shops = Collect(totalString, "/");
		for (auto positions : m_Shops)
		{
			m_Positions.push_back(Collect(positions, "."));
		}
	};
	~Product();

	std::vector<std::string> Collect(std::string string,
	 std::string delimiter)
	{
		std::vector<std::string> result;
		int pos = 0;
		while ((pos = string.find(delimiter)) != std::string::npos) {
			result.push_back(string.substr(0, pos));
			string.erase(0, pos + delimiter.length());
		}
		return result;
	}

// std::string s = "scott>=tiger>=mushroom";
// std::string delimiter = ">=";

// size_t pos = 0;
// std::string token;
// while ((pos = s.find(delimiter)) != std::string::npos) {
//     token = s.substr(0, pos);
//     std::cout << token << std::endl;
//     s.erase(0, pos + delimiter.length());
// }

	std::string token;


	std::vector<std::vector<std::vector<std::string>>> m_Products;
	std::vector<std::vector<std::string>> m_Positions;
	std::vector<std::string> m_Shops;


	std::string totalString;
	std::string m_buff;
};