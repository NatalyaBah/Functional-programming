// Сдать до 21.12.21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    //************************** task 1 ***************************
    int a;
    cout << "input a : ";
    cin >> a;
    int summ = 0;
    if (a > 500) cout << "error" << endl;
        
    while (a <= 500)

    {
       summ += a;
       a += 1;
    }

    cout << summ << endl;
    cout << "\n";

 //************************** task 2 ***************************

    int x;
    cout << "input x : ";
    cin >> x;
    int y;
    cout << "input y : ";
    cin >> y;
    int r = 1;

    while (y>0)

    {
        r *= x;
        y--;
    }
    
    cout << r << "";
    cout << "\n\n";
    

    //************************** task 3 ***************************

    int n = 1;
    int m = 1000;
    float summa = 0;

    while (n <= m)
    {
        summa += n;
        n += 1;        
    }
    summa /= 1000;
    cout << summa << endl;
    cout << "\n";

    //************************** task 4 ***************************

    int a1;
    cout << "input a1 : ";
    cin >> a1;
    int r1 = 1;
    if (a1 > 20) cout << "error";
    
    while (a1 <= 20)

    {
        r1 *= a1;
        a1 += 1;
    }
    cout << r1 << "" << endl;
    cout << "\n";

    //************************** task 5 ***************************

    int k;
    cout << "input namber :";
    cin >> k;
    cout << "\n";
    

    switch (k)
    {
    case 1:
        cout << " 1*1=1" << endl;
        cout << " 1*2=2" << endl;
        cout << " 1*3=3" << endl;
        cout << " 1*4=4" << endl;
        cout << " 1*5=5" << endl;
        cout << " 1*6=6" << endl;
        cout << " 1*7=7" << endl;
        cout << " 1*8=8" << endl;
        cout << " 1*9=9" << endl;
        cout << " 1*10=10" << endl;
        break;
    case 2:
        cout << " 2*1=2" << endl;
        cout << " 2*2=4" << endl;
        cout << " 2*3=6" << endl;
        cout << " 2*4=8" << endl;
        cout << " 2*5=10" << endl;
        cout << " 2*6=12" << endl;
        cout << " 2*7=14" << endl;
        cout << " 2*8=16" << endl;
        cout << " 2*9=18" << endl;
        cout << " 2*10=20" << endl;
        break;
    case 3:
        cout << " 3*1=3" << endl;
        cout << " 3*2=6" << endl;
        cout << " 3*3=9" << endl;
        cout << " 3*4=12" << endl;
        cout << " 3*5=15" << endl;
        cout << " 3*6=18" << endl;
        cout << " 3*7=21" << endl;
        cout << " 3*8=24" << endl;
        cout << " 3*9=27" << endl;
        cout << " 3*1=30" << endl;
        break;
    case 4:
        cout << " 4*1=4" << endl;
        cout << " 4*2=8" << endl;
        cout << " 4*3=12" << endl;
        cout << " 4*4=16" << endl;
        cout << " 4*5=20" << endl;
        cout << " 4*6=24" << endl;
        cout << " 4*7=28" << endl;
        cout << " 4*8=32" << endl;
        cout << " 4*9=36" << endl;
        cout << " 4*10=40" << endl;
        break;
    case 5:
        cout << " 5*1=5" << endl;
        cout << " 5*2=10" << endl;
        cout << " 5*3=15" << endl;
        cout << " 5*4=20" << endl;
        cout << " 5*5=25" << endl;
        cout << " 5*6=30" << endl;
        cout << " 5*7=35" << endl;
        cout << " 5*8=40" << endl;
        cout << " 5*9=45" << endl;
        cout << " 5*10=50" << endl;
        break;
    case 6:
        cout << " 6*1=6" << endl;
        cout << " 6*2=12" << endl;
        cout << " 6*3=18" << endl;
        cout << " 6*4=24" << endl;
        cout << " 6*5=30" << endl;
        cout << " 6*6=36" << endl;
        cout << " 6*7=42" << endl;
        cout << " 6*8=48" << endl;
        cout << " 6*9=54" << endl;
        cout << " 6*10=60" << endl;
        break;
     case 7:
         cout << " 7*1=7" << endl;
         cout << " 7*2=14" << endl;
         cout << " 7*3=21" << endl;
         cout << " 7*4=28" << endl;
         cout << " 7*5=35" << endl;
         cout << " 7*6=42" << endl;
         cout << " 7*7=49" << endl;
         cout << " 7*8=56" << endl;
         cout << " 7*9=63" << endl;
         cout << " 7*10=70" << endl;
         break;
     case 8:
         cout << " 8*1=8" << endl;
         cout << " 8*2=16" << endl;
         cout << " 8*3=24" << endl;
         cout << " 8*4=32" << endl;
         cout << " 8*5=40" << endl;
         cout << " 8*6=48" << endl;
         cout << " 8*7=56" << endl;
         cout << " 8*8=64" << endl;
         cout << " 8*9=72" << endl;
         cout << " 8*10=80" << endl;
         break;
     case 9:
         cout << " 9*1=9" << endl;
         cout << " 9*2=18" << endl;
         cout << " 9*3=27" << endl;
         cout << " 9*4=36" << endl;
         cout << " 9*5=45" << endl;
         cout << " 9*6=54" << endl;
         cout << " 9*7=63" << endl;
         cout << " 9*8=72" << endl;
         cout << " 9*9=81" << endl;
         cout << " 9*10=90" << endl;
         break;
     case 10:
         cout << " 10*1=10" << endl;
         cout << " 10*2=20" << endl;
         cout << " 10*3=30" << endl;
         cout << " 10*4=40" << endl;
         cout << " 10*5=50" << endl;
         cout << " 10*6=60" << endl;
         cout << " 10*7=70" << endl;
         cout << " 10*8=80" << endl;
         cout << " 10*9=90" << endl;
         cout << " 10*10=100" << endl;
         break;
    }
    cout << "\n";
    
}

