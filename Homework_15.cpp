// Homework_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    
    for ( int h = 0; h < 10; ++h)
    {
        std::cout << h << '\n';
        if (h < 5)
        {
            continue;
        }
        std::cout << h+2 << '\n';
    }
    
}
