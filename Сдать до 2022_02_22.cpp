// Сдать до 2022_02_22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));


    int const size1 = 5;
    int const size2 = 25;
    int array1[size1][size1];
    int array2[size1][size1];
    int array3[size2] ={};

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            array1[i][j] = 10 + rand() % 90;
            array2[i][j] = 10 + rand() % 90;
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int size3 = 0;
    bool flag, flag2;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            flag = false;
            for (int i2 = 0; i2 < size1; i2++)
            {
                for (int j2 = 0; j2 < size1; j2++)
                {
                    if (array1[i][j] == array2[i2][j2])
                    {
                        flag2 = false;
                        for (int s = 0; s < size3; s++)
                        {
                            if (array1[i][j] == array3[s])
                            {
                                flag2 = true;
                                break;
                            }
                        }
                        if (flag == false)
                        {
                            array3[size3++] = array1[i][j];
                        }
                        flag = true;
                        break;
                    }
                }
                if (flag == true) break;
            }
        }
    }
    cout << endl;
    for(int i = 0; i < size3; i++)
    {
        cout << array3[i] << "\t";
    }
}
    

