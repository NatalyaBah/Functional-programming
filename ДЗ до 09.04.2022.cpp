// ДЗ до 09.04.2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>

using namespace std;


struct Fractions
{
    int num;
    int ben;
    int whole;
};
Fractions division(Fractions d1, Fractions d2)
{
    Fractions d3;
    d3.num = d1.num * d2.ben;
    d3.ben = d1.ben * d2.num;     
    if (d3.num / d3.ben >= 1)
    {
        d3.whole = (d3.num / d3.ben);
        d3.num = d3.num - d3.whole * d3.ben;  
    }
    else
    {
        d3.whole = 0;
    }
    for (int i = 2; i <= d3.ben; i++)
    {
        if (d3.num % i == 0 && d3.ben % i == 0)
        {
            d3.num /= i;
            d3.ben /= i;
        }
    }
    if (d3.num == 0) d3.ben = d3.num;
    return d3;
    
}
Fractions mult(Fractions d1, Fractions d2)
{
    Fractions d4;
    d4.num = d1.num * d2.num;
    d4.ben = d1.ben * d2.ben;  
    if (d4.num / d4.ben >= 1)
    {
        d4.whole = (d4.num / d4.ben);
        d4.num = d4.num - d4.whole * d4.ben;
    }
    else
    {
        d4.whole = 0;
    }
    for (int i = 2; i <= d4.ben; i++)
    {
        if (d4.num % i == 0 && d4.ben % i == 0)
        {
            d4.num /= i;
            d4.ben /= i;
        }        
    }    
    if (d4.num == 0) d4.ben = d4.num;
    return d4;
}
Fractions pluse(Fractions d1, Fractions d2)
{
    Fractions d5;
    d5.num = (d1.num * d2.ben) + (d2.num * d1.ben);
    d5.ben = d1.ben * d2.ben;    
    if (d5.num / d5.ben >= 1)
    {
        d5.whole = d5.num / d5.ben;
        d5.num = d5.num - d5.whole * d5.ben;   
    }   
    else
    {
        d5.whole = 0;
    }
    if (d5.num == 0) d5.ben = d5.num;
    for (int i = 2; i <= d5.ben; i++)
    {
        if (d5.num % i == 0 && d5.ben % i == 0)
        {
            d5.num /= i;
            d5.ben /= i;
        }
    }
    if (d5.num == 0) d5.ben = d5.num;
    return d5;

}
Fractions minuse(Fractions d1, Fractions d2)
{
    Fractions d6;
    d6.num = (d1.num * d2.ben) - (d2.num * d1.ben);
    d6.ben = d1.ben * d2.ben;    
    if(d6.num / d6.ben >= 1)
    {
        d6.whole = d6.num / d6.ben;
        d6.num = d6.num - d6.whole * d6.ben;    
    }     
    else
    {
        d6.whole = 0;
    }
    for (int i = 2; i <= d6.ben; i++)
    {
        if (d6.num % i == 0 && d6.ben % i == 0)
        {
            d6.num /= i;
            d6.ben /= i;
        }        
    }
    if (d6.num == 0) d6.ben = d6.num;
    return d6;
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Fractions d1{ 5, 2 };
    Fractions d2{ 5, 2 };
    Fractions d3 = division(d1, d2);
    cout << "Результат деления\t дробей:\t" << d3.whole << " " << d3.num << "/" << d3.ben << endl;
    Fractions d4 = mult(d1, d2);
    cout << "Результат умножения\t дробей:\t" << d4.whole << " " << d4.num << "/" << d4.ben << endl;
    Fractions d5 = pluse(d1, d2);
    cout << "Результат сложения\t дробей:\t" << d5.whole << " " << d5.num << "/" << d5.ben << endl;
    Fractions d6 = minuse(d1, d2);
    cout << "Результат вычитания\t дробей:\t" << d6.whole << " " << d6.num << "/" << d6.ben << endl;
    
}

