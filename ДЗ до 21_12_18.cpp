// ДЗ до 21_12_18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{

    // ************************* Задание 1 +++++++++++++++++++++++++++


    int pizza, drink;
    float k, k1;
    float pizza1 = 20.74;
    float pizza2 = 30.50;
    float pizza3 = 12.80;
    float pizza4 = 17.40;
    float drink1 = 1.70;
    float drink2 = 2.10;
    float drink3 = 1.95;
    cout << "\t\MEMU" << endl;
    cout << "\n";
    cout << "\t\Pizza" << endl;
    cout << "\n";
    cout << " Code 121. Pizza1. Price 20.74 $" << endl;
    cout << " Code 122. Pizza2. Price 30.50 $" << endl;
    cout << " Code 123. Pizza3. Price 12.80 $" << endl;
    cout << " Code 124. Pizza4. Price 17.40 $" << endl;
    cout << "Enter product code : ";
    cin >> pizza;
    cout << "How many :";
    cin >> k;
    cout << "\n";
    cout << "\t\Drink" << endl;
    cout << "\n";
    cout << " Code 115. Drink1. Price 1.70 $" << endl;
    cout << " Code 116. Drink2. Price 2.10 $" << endl;
    cout << " Code 117. Drink3. Price 1.95 $" << endl;
    cout << "\n";
    cout << "Enter product code : ";
    cin >> drink;
    cout << "How many :";
    cin >> k1;
    cout << "\n";
    float summa1 = 0;
    float summa2 = 0;      
    
    switch (pizza)

    {
    case 121:
        cout << "Pizza1 :" << pizza1 << endl;
        summa1 = pizza1 * k;        
        break;
    case 122:
        cout << "Pizza2 :" << pizza2 << endl;
        summa1 = pizza2 * k;        
        break;
    case 123:
        cout << "Pizza3 :" << pizza3 << endl;
        summa1 = pizza3 * k;        
        break;
    case 124:
        cout << "Pizza4 :" << pizza4 << endl;
        summa1 = pizza4 * k;        
        break;
    default:
        cout << "No price" << endl;
    }

    switch (drink)

    {
    case 115:
        cout << "Drink1 :" << drink1 << endl;
        summa2 = drink1 * k1;       
        break;
    case 116:
        cout << "Drink2 :" << drink2 << endl;
        summa2 = drink2 * k1;
        break;
    case 117:
        cout << "Drink3 :" << drink3 << endl;
        summa2 = drink3 * k1;
        break;
    default:
        cout << "No price" << endl;
    }
    float summa = 0;
    float sale = 0.2;    
    if (summa < 50)
    {
        summa = summa1 + summa2;
        cout << "Summa :" << summa << endl;
    }
    if (summa >= 50)
    {
        summa = summa - ((summa1 + summa2) * sale);
        cout << "Discounted amount 20 % :" << summa << endl;
    }      
    cout << "\n";
            
        
    // ++++++++++++++++++++++++++++++++ Задание 2 ************************************
    

    float m1, m2, m3;
    float salary = 200;
    cout << "Sales manager 1 :";
    cin >> m1;
    cout << "Sales manager 2 :";
    cin >> m2;
    cout << "Sales manager 3 :";
    cin >> m3;
    float sales = 0.03;
    float sales1 = 0.05;
    float sales2 = 0.08;
    float priz = 200;
    
    if (m1 < 500)
    {
        m1 = salary + m1 * sales;
        cout << "Salary manager 1 :" << m1 << endl;
    }
    if (m1 > 500 && m1 < 1000)
    {
        m1 = salary + m1 * sales1;
        cout << "Salary manager 1 :" << m1 << endl;
    }
    if (m1 > 1000)
    {
        m1 = salary + m1 * sales2;
        cout << "Salary manager 1 :" << m1 << endl;
    }
    if (m2 < 500)
    {
        m2 = salary + m2 * sales;
        cout << "Salary manager 2 :" << m2 << endl;
    }
    if (m2 > 500 && m2 < 1000)
    {
        m2 = salary + m2 * sales1;
        cout << "Salary manager 2 :" << m2 << endl;
    }
    if (m2 > 1000)
    {
        m2 = salary + m2 * sales2;
        cout << "Salary manager 3 :" << m2 << endl;
    }
    if (m3 < 500)
    {
        m3 = salary + m3 * sales;
        cout << "Salary manager 1 :" << m3 << endl;
    }
    if (m3 > 500 && m3 < 1000)
    {
        m3 = salary + m3 * sales1;
        cout << "Salary manager 2 :" << m3 << endl;
    }
    if (m3 > 1000)
    {
        m3 = salary + m3 * sales2;
        cout << "Salary manager 3 :" << m3 << endl;
    }
    if (m1 >= m2)
    {
        if (m1 >= m3) cout << "Best manager 1 + priz 200 $ :" << m1 + priz;
        else cout << "Best manager 3 + priz 200 $ :" << m3 + priz;
    }
    else
    {
        if (m2 >= m3) cout << "Best manager 2 + priz 200 $ : " << m2 + priz;
        else cout << "Best manager 3 + priz 200 $ :" << m3 + priz;
    }

}


