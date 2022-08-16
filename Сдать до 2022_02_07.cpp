// Сдать до 2022_02_07.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

//Написать перегруженные функции (int, double, char) для выполнения 
//следующих задач:

//Инициализация квадратной матрицы типа int
void initArray(int array[5][5], int a, int b);
//Вывод матрицы на экран типа int
void showArray(int array[5][5], int a, int b);
//Определение максимального элемента на главной диагонали
// матрицы типа int
int maxElement(int array[5][5], int a, int b);
//Определение минимального элемента на главной диагонали
// матрицы типа int
int minElement(int array[5][5], int a, int b);
//Cортировка элементов по возрастанию отдельно для 
// каждой строки матрицы типа int
void sortArray(int array[5][5], int a, int b);
//Инициализация квадратной матрицы типа double
void initArray(double array[5][5], double a, double b);
//Вывод матрицы на экран типа double
void showArray(double array[5][5], double a, double b);
//Определение максимального элемента на главной диагонали
// матрицы типа double
double maxElement(double array[5][5], int a, int b);
//Определение минимального элемента на главной диагонали
//матрицы типа double
double minElement(double array[5][5], int a, int b);
//Cортировка элементов по возрастанию отдельно для 
//каждой строки матрицы типа double
void sortArray(double array[5][5], int a, int b);
//Инициализация квадратной матрицы типа char
void initArray(char array[5][5], char a, char z);
//Вывод матрицы на экран типа char
void showArray(char array[5][5], char a, char b);
//Определение максимального элемента на главной диагонали
//матрецы типа char
char maxElement(char array[5][5], int a, int b);
//Определение минимального элемента на главной диагонали
//матрицы типа char
char minElement(char array[5][5], int a, int b);
//Сортировка жлементов по возрастанию отдельно для 
//каждой строки матрицы типа char
void sortArray(char array[5][5], int a, int b);


void initArray(int array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            array[i][j] = 10 + rand() % (90 - 10) + 1;
        }
    }
}
void showArray(int array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0 ; j < b; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}
int maxElement(int array[5][5], int a, int b)
{
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] > max)  max = array[i][j];                
            }
        }
    }
    return max;
}
int minElement(int array[5][5], int a, int b)
{
    int min = 90;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] < min)  min = array[i][j];
            }
        }
    }
    return min;
}
void sortArray(int array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < b - 1; k++)
            {
                if (array[i][k] > array[i][k + 1]) swap(array[i][k], array[i][k + 1]);
            }
        }
    }
}
void initArray(double array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            array[i][j] = (1000 + rand() % (9000 - 1000 + 1)) / 100.0 + 0.01;
        }
    }
}
void showArray(double array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}
double maxElement(double array[5][5], int a, int b)
{
    double max = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] > max)  max = array[i][j];
            }
        }
    }
    return max;
}
double minElement(double array[5][5], int a, int b)
{
    double min = 90;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] < min)  min = array[i][j];
            }
        }
    }
    return min;
}
void sortArray(double array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < b - 1; k++)
            {
                if (array[i][k] > array[i][k + 1]) swap(array[i][k], array[i][k + 1]);
            }
        }
    }
}
void initArray(char array[5][5], int a, int z)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < z; j++)
        {
            array[i][j] = 97 + rand() % (122 - 97 + 1);
        }
    }
}
void showArray(char array[5][5], int a, int z)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}
char maxElement(char array[5][5], int a, int b)
{
    char max = 97;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] > max)  max = array[i][j];
            }
        }
    }
    return max;
}
char minElement(char array[5][5], int a, int b)
{
    char min = 122;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                if (array[i][j] < min)  min = array[i][j];
            }
        }
    }
    return min;
}
void sortArray(char array[5][5], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < b - 1; k++)
            {
                if (array[i][k] > array[i][k + 1]) swap(array[i][k], array[i][k + 1]);
            }
        }
    }
}



int main()
{
    srand(time(NULL));
    int array1[5][5];
    double array2[5][5];
    char array3[5][5];
    cout << "Overloaded function int " << endl << endl;
    initArray(array1, 5, 5);
    showArray(array1, 5, 5);
    cout << endl;
    cout << "Max Elemetn: " << maxElement(array1, 5, 5) << endl;
    cout << "Min Elemetn: " << minElement(array1, 5, 5) << endl;   
    cout << endl;
    cout << "Sorting an array line by line " << endl << endl;
    sortArray(array1, 5, 5);
    showArray(array1, 5, 5);
    cout << endl;
    cout << "Overloaded function double " << endl << endl;
    initArray(array2, 5, 5);
    showArray(array2, 5, 5);
    cout << endl;
    cout << "Max Elemetn: " << maxElement(array2, 5, 5) << endl;
    cout << "Min Elemetn: " << minElement(array2, 5, 5) << endl;
    cout << endl;
    cout << "Sorting an array line by line " << endl << endl;
    sortArray(array2, 5, 5);
    showArray(array2, 5, 5);
    cout << endl;
    cout << "Overloaded function char " << endl << endl;
    initArray(array3, 5, 5);
    showArray(array3, 5, 5);
    cout << endl;
    cout << "Max Elemetn: " << maxElement(array3, 5, 5) << endl;
    cout << "Min Elemetn: " << minElement(array3, 5, 5) << endl;
    cout << endl;
    cout << "Sorting an array line by line " << endl << endl;
    sortArray(array3, 5, 5);
    showArray(array3, 5, 5);
    cout << endl;
}