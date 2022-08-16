// Сдать до 2022_02_25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



//Задание 1. написать функцию, которая принимает два параметра: основание степени и
//показатель степени, и вычисляет степень числа на основе полученных данных.
void takesTwoParameters(int base, int degree);
//Задание 2. Написать функцию которая получает в качестве параметров 2 целых числа 
//и возвращает сумму сумму чисел из диапазона между ниим.
int returnsSumma(int a, int b);
//Задание 3. Число называется совершенным б если сумма всех его делителей равна ему самому.
//Напишите функцию, поиска таких чисел во введенном интервале.
void perfectNumber(int a);
//Задание 4. Напишите функцию, которая определяет, является ли "счастливым" шестизначное число.
void happy_number(int a);


void takesTwoParameters(int base, int degree)
{      
    
    int base_number = base;
    if (degree == 0) base = 1;
    for (int i = 1; i < degree; i++)
    {            
        base *= base_number;
    }
    cout << " Produkt of number: " << base;
}

float returnsSumma(float a, float b)
{ 
    if (a > b)swap(a, b);
    float summ = 0;
    for (float i = a; i <= b; i++)
    {       
        summ += i;          
    }
    cout << " Summa; " << summ;
    return summ;
}

void perfectNumber(int d, int f)
{
    if (d > f)swap(d, f);    
    
    for (int i = d; i < f; i++)
    {       
        int summa = 0;
        for (int j = 1; j < i; j++)
        if (i % j == 0 && i !=j)
        {
            summa +=j;
        }
            if (summa == i) cout <<" " << i << " ";
    }
    
}

void happyNumber(int c)
{
    int next_number = 0;
    int end_number = 0;   
    
    
    while (c < 100000 || c > 999999)
    {
        cout << " Error" << endl;
        cout << " Enter six-digit number: ";
        cin >> c;
    }
    for (int i = 0; i < 3; i++)
    {        
        next_number += c % 10;
        c /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        end_number += c % 10;
        c /= 10;
    }
    if (next_number == end_number) cout << " Heppy ticket";
    else cout << " Not a happy ticket";    
}
    




  int main()
  {       
    int base, degree;
    cout << " Input number: ";
    cin >> base;
    cout << " Input degree: ";
    cin >> degree;
    takesTwoParameters(base, degree);
    cout << endl << endl;
    
    float a, b;
    cout << " Input number one: ";
    cin >> a;
    cout << " Input number two: ";
    cin >> b;
    returnsSumma(a, b);
    cout << endl << endl;

    int d, f;
    cout << " Input number one: ";
    cin >> d;
    cout << " Input number two: ";
    cin >> f;
    perfectNumber(d, f);
    cout << endl << endl;

    int c;
    cout << " Input number: ";
    cin >> c;
    happyNumber(c);
    cout << endl << endl;

        
}

