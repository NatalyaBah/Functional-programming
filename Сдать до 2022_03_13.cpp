#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

#define random(min, max) min+rand()%(max-min+1)

//Функция распределения динамической памяти
void distrArray(int*& array, int size)
{
	array = new int[size];		
}
//Функция инициализации динамического массива
void initArray(int* array)
{
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
	{
		array[i] = random(10, 90);
	}
}
//Функция печати динамического массива
void showArray(int* array)
{
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
//Функция удаления динамического массива
void delArray(int*& array)
{
	int size = _msize(array) / sizeof(array[0]);
	distrArray(array, size);
	delete[]array;
}
//Функция добавления элемента в коней массива
void addArray(int*& array, int n)
{
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		buf[i] = array[i];
	}
	buf[size] = n;
	delete[]array;
	array = buf;
}
//Функция вставки элемента по указанному индексу
void AddIndexElement(int*& array, int index, int n)
{
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < index; i++)
	{
		buf[i] = array[i];
	}
	for (int j = index; j < size + 1; j++)
	{
		buf[j] = array[j - 1];
	}	
	buf[index] = n;
	delete[]array;
	array = buf;	
}
//Функция удаления элемента по указанному индексу
void delIndexElement(int*& array, int index)
{
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size - 1];
	for (int i = 0; i < index; i++)
	{
		buf[i] = array[i];
	}
	for (int j = index; j < size; j++)
	{
		buf[j] = array[j + 1];
	}	
	delete[]array;
	array = buf;
}
int main()
{	
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 5;
	int* array1;
	cout << "Элементы массива" << endl << endl;
	distrArray(array1, SIZE);
	initArray(array1);
	showArray(array1);
	cout << "Добавление элемента в конец массива" << endl << endl;
	addArray(array1, 13);	
	showArray(array1);
	cout << "Добавление элемента по индексу" << endl << endl;
	AddIndexElement(array1,3, 23);
	showArray(array1);
	cout << "Удаление элемента по индексу" << endl;
	delIndexElement(array1, 2);
	showArray(array1);
}
