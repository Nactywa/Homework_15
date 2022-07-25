// Homework_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void OddOrNot(int N, bool x)
{
    for (int i = x ? 0:1; i <= N; i += 2)
    {
        
        std::cout << " i =" << i << '\n';
        
    }
}

int main()
{
    

    OddOrNot(20, true);
}