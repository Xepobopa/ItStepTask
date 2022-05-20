#include "Application.h"
#include "../Model/Shop.h"
#include "../Model/Product.h"
#include <iostream>

Application::Application()
{
    Product* shop = new Product("/Users/pasword1234/Desktop/ItStepTask/assets/Products.txt");
    for (auto a : shop->m_Positions)
    {
        for (auto b : a)
        {
            std::cout << b << std::endl;
        }
    }
    
}

Application::~Application()
{

}

void Application::Run()
{

}
