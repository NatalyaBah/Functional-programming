// Сдать до 2022_01_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    // 1. Вывести четные числа от aдо b


    int a, b;
    cout << "input a,b"<<endl;
    cin >> a >> b;
    if (a > b) swap(a, b);
    if (a % 2) a++;
    for (int i = a; i <= b; i += 2)
    {
        cout << i << "";
        cout << "\n";
    }


    // 2. Вывести числа кратные 4 и принадлежащие промежутку от a до b в порядке убывания

    int a1, b1;
    cout << "input a,b" << endl;
    cin >> a1 >> b1;
    if (a1 > b1) swap(a1, b1);
    for (;b1 % 4;) b1--;

    for (int i1=b1; i1>=a1; i1-=4) 
    {
        cout << i1 << "";
        cout << "\n";
    }


    // 3. Вывести слово привет n раз


    int n;
    cout << "input nunber";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "hello";
        cout << "\n";
    }


    // 4. Посчитать сумму всех целых чисел от a до b


    int a3, b3;
    cout << "Input a,b" << endl;
    cin >> a3 >> b3;
    if (a3 > b3) swap(a3, b3);
    int summa = 0;
    for (int i3 = a3; i3 <= b3; i3++)
    {
        summa +=i3;
    }
    cout << summa << endl;
    cout << "\n";


    // 5. Пользователь вводит числа 5 раз. Посчитать сумму этих чисел.


    float w;
    cout << "input w :" << endl;
    float summ = 0;
    for (int i4 = 0; i4 < 5; i4++)
    {
        cin >> w;
        summ += w;
    }
    cout << summ;
    cout << "\n";


    // 6. Пользователь вводит пять чисел. Вывести наименьшее число.


    int d;
    cout << "input" << endl;
    cin >> d;
    int max = d;
    for (int i5 = 0; i5 < 4; i5++)
    {
        cin >> d;
        if (max < d) max = d;
    }
    cout << max;
    cout << "\n";


    // 7. Пользователь вводит n чисел. Вывести наименьшее число.


    int n1;
    cout << "input :";
    cin >> n1;
    int p;
    cout << "input :";
    cin >> p;
    int min = p;
    for (int i6 = 0; i6 < n1-1; i6++)
    {
        cout << "input";
        cin >> p;
        if (min > p) min = p;
    }
    cout << min;
    cout << "\n";


    // 8. Пользователь вводит 5 значтое число. Вывести цифры этого числа поразрядно.


    int m;
    cout << "input m:";
    cin >> m;
    int m1 = m % 10;
    int m2 = (m % 100);
    int m3 = (m % 1000);
    int m4 = (m % 10000);
    int m5 = (m % 100000);
    cout << m1 << "" << endl;
    cout << m2 << "" << endl;
    cout << m3 << "" << endl;
    cout << m4 << "" << endl;
    cout << m5 << "" << endl;
    cout << "\n";

    

    // 9. Пользователь вводит n чисел. Опредилить вводит ли он число 3.

 
    int n3;
    cin >> n3;
    bool flag = false;
    for (int i9 = 0, y; i9 < n3; i9++)
    {
        cin >> y;
        if (y == 3)flag = true;
    }
    if (flag)cout << "yes";
    else cout << "no";
    cout << "\n";


    // 10. Вывести все числа принадлежащие промежуткам от a до b и от c до d.


    int a10, b10, c10, d10;
    cout << "input a,b:" << endl;    
    cin >> a10 >> b10;
    cout << "input c,d:" << endl;
    cin >> c10 >> d10;
    if (a10 > b10) swap(a10, b10);
    if (c10 > d10) swap(c10, d10);
    for (int i10 = a10; i10 <= b10; i10++)
    {
        cout << i10 << "";
    }
    for (int i11 = c10; i11 <= d10; i11++)
    {
        cout << i11 << "";     
    }


}

