
#include <iostream>
#include <Windows.h>

using namespace std;
#define random(min, max) min+rand()%(max-min+1)
#define t3


#ifdef t1

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 5;    
    int array[SIZE] = { 1,2,3,4,5 };
    int* array2 = array;
    cout << "Элементы первого массива " << endl;
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(array + i) << " ";
    }    
    cout << endl;
    cout << "Скопированный массив" << endl;
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(array2 + i) << " ";
    }
}
#endif // t1

#ifdef t2
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 5;
    int array[SIZE] = { 1, 2, 3, 4, 5 };
    cout << "Элементы массива" << endl;
    for (int i = 0; i < SIZE; i++)
    {        
        cout << *(array + i) << " ";
    }
    cout << endl << endl;
    cout << "Элементы массива в обратном порядке" << endl;
    for (int j = SIZE; j > 0; j--)
    {        
        cout << *(array + (j - 1)) << " ";
    }
    cout << endl;
}
#endif // t2

#ifdef t3
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   
    const int SIZE = 5;
    int array[SIZE] = { 1,2,3,4,5 };
    int* array2 = array;
    cout << "Элементы первого массива " << endl;
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
    cout << "Скопированный массив, элементы выведины в обратном порядке" << endl;
    cout << endl;
    for (int i = SIZE; i > 0; i--)
    {
        cout << *(array2 + (i - 1)) << " ";
    }
}
#endif // t3




