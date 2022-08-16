// Сдать до 30.01.2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n;
    cout << "Выберите фигуру 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 " << " ";
    cin >> n;
            
    switch (n)
    {
    case 1:
        int a;                                 //Фигура "а"
        cout << "Введите цифру :";
        cin >> a;
        for (int i = 0; i < a; i++)
        {            
            for (int j = 0; j < i; j++)
            {
                cout << "  "; 
            }                      
            for (int j = i; j < a; j++)
            {
                cout << " *";
            }
            cout << endl;            
        }
        break;
    case 2:                                    //Фигура "б"
        int b;
        cout << "Введите цтфру :";
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "* ";                   
            }            
            cout << endl;
        }
        break;
    case 3:                                  //Фигура "в"
        int v;        
        cout << "Введите цифру :";
        cin >> v;
        for (int i = 0; i <= v; i++)            
        {
            for (int j = 0; j <= v; j++)
            {
                if (i < j && i + j > v - 1) cout << "* ";
                else cout << "  ";
            }
            
            cout << endl;
        }       
        break;
    case 4:                                   //Фигура "г" 
        int g;
        cout << "Введите цифру :";
        cin >> g;
     for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (i + j >= g - 1 && i >= j) cout << " *";
            else cout << "  ";
        }
        cout << endl;
    }    
        break;
    case 5:                                   //Фигура "д"
        int d;
        cout << "Введите цифру :";
        cin >> d;
        for (int i = 0; i < d; i++)
        {           
           for (int j = 0; j < d; j++)               
               {
               if (i + j <= d - 1 && i <= j || i + j >= d - 1 && i >= j)
               {
                   cout << "* ";
               }
               else cout << "  ";
               }
           cout << endl;
        }
        break;
    case 6:                                   //Фигура "е"
        int e;
        cout << "Введите цифру :";
        cin >> e;
        for (int i = 0; i <= e; i++)
        {
            for (int j = 0; j <= e; j++)
            {
                if (i >= j && i + j < n - 1 || i + j >= n - 1 && i < j) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
        break;
    case 7:                                   //Фигура "ж"
        int o;
        cout << "Введите цифру :";
        cin >> o;
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < o; j++)
            {
                if (i >= j && i + j <= o - 1) cout << " *";
                else cout << "  ";
            }
            cout << endl;
        }
        break;
    case 8:                                   //Фигура "з"
        int z;
        cout << "Введите цифру :";
        cin >> z;
        for (int i = 0; i < z; i++)
        {
            for (int j = 0; j < z; j++)
            {
                if (i + j >= z - 1 && i <= j) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
        break;
    case 9:                                   //Фигура "и" 
        int u;
        cout << "Введите цифру :";    
        cin >> u;
        for (int i = 0; i < u; i++)
        {
            for (int j = u - i; j > 0; j--)
            {
                cout << "* ";                
            }            
            cout << endl;    
        }
        break;
    case 10:                                  //Фигура "к"
        int k;
        cout << "Введите цифру :";
        cin >> k;
        for (int i=0; i < k; i++)
        {
            for (int j = 0; j < k - i; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";              
            }            
            cout << endl;
        }
        break;
    default:
        cout << "Error";
    }  
    
    
}



