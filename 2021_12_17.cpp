// 2021_12_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    // ***************************** task 1 ******************************

    int a;
    cout << "namber : ";
    cin >> a;
    if (a / 100000 < 1)
    {
        cout << "error";
    }
    else if (a / 100000 > 9)
    {
        cout << "error";
    }
    else
    {
        int a1 = a % 10;
        int a2 = (a % 100) / 10;
        int a3 = (a % 1000) / 100;
        int a4 = (a % 10000) / 1000;
        int a5 = (a % 100000) / 10000;
        int a6 = a / 100000;
        int summ = a1 + a2 + a3;
        int summ1 = a4 + a5 + a6;
        if (summ == summ1)
        {
            cout << "happy ticket";
        }
        else if (summ<summ1 || summ>summ1)
        {
            cout << "no";
        }
    }
    cout << "\n\n";

    // ***************************** task 2 ******************************

    int k;
    cout << "namber : ";
    cin >> k;
    if ( k / 1000 < 1 )
    {
        cout << "error";
    }
    else if (k / 1000 > 9)
    {
        cout << "error";
    }
    else
    {
        int k4 = k % 10;
        int k3 = (k % 100) / 10;
        int k2 = (k % 1000) / 100;
        int k1 = k / 1000;
        cout << k1 << k2 << k3 << k4;
        int result = (k2 * 1000) + (k1 * 100) + (k4 * 10) + k3;
        cout << "result : ";
        cout << result;

    }
    cout << "\n\n";



    // ***************************** task 3 ******************************

    int t, u, v, w, x, y, z;
    cout << "namber 1 :";
    cin >> t;
    cout << "namber 2 :";
    cin >> u;
    cout << "namber 3 :";
    cin >> v;
    cout << "namber 4 :";
    cin >> w;
    cout << "namber 5 :";
    cin >> x;
    cout << "namber 6 :";
    cin >> y;
    cout << "namber 7 :";
    cin >> z;
    cout << "max :";
    if (t > u && t > v && t > w && t > x && t > y && t > z) cout << t;
    if (u > t && u > v && u > w && u > x && u > y && u > z) cout << u;
    if (v > t && v > u && v > w && v > x && v > y && v > z) cout << v;
    if (w > t && w > u && w > v && w > x && w > y && w > z) cout << w;
    if (x > t && x > u && x > v && x > w && x > y && x > z) cout << x;
    if (y > t && y > u && y > v && y > w && y > x && y > z) cout << y;
    if (z > t && z > u && z > v && z > w && z > x && z > y) cout << z;
    cout << "\n\n";

    // ***************************** task 4 ******************************

    float ab, bc, cargo;
    cout << "path AB km : ";
    cin >> ab;
    cout << "path BC km : ";
    cin >> bc;
    cout << "cargo kg : ";
    cin >> cargo;
    const int bak = 300;

    if (ab > bak)
    {
        cout << "error";
    }
    else if (bc > bak)
    {
        cout << "error";
    }
    else if (cargo < 500)
    {
        float ac = (bak - ab * 1) - (bak - bc * 1)*(-1);        //Дозоправка в пункте b груз 500 кг исправление
        cout << "dozapravka v punkte b :" << ac << " l ";        
    }
    else if (ab > bak * 4)
    {
        cout << "error";
    }
    else if (bc > bak * 4)
    {
        cout << "error";
    }
    else if (cargo < 1000)
    {
        float ac = (bak - ab * 4) - (bak - bc * 4) * (-1);                            //Дозоправка в пункте b груз 1000 кг
        cout << "dozapravka v punkte b :" << ac << " l ";
    }
    else if (ab > bak * 7)
    {
        cout << "error";
    }
    else if (bc > bak * 7)
    {
        cout << "error";
    }
    else if (cargo < 1500)
    {
        float ac = (bak - ab * 7) - (bak - bc * 7) * (-1);                             //Дозоправка в пункте b груз 1500 кг
        cout << "dozapravka v punkte b :" << ac << " l ";
    }
    else if (ab > bak * 9)
    {
        cout << "error";
    }
    else if (bc > bak * 9)
    {
        cout << "error";
    }
    else if (cargo < 2000)
    {
        float ac = (bak - ab * 9) - (bak - bc * 9) * (-1);                       //Дозоправка в пункте b груз 2000 кг
        cout << "dozapravka v punkte b :" << ac << " l ";
    }
    else if (cargo > 2000)
    {
        cout << "error";
    }

}
    
    
    


