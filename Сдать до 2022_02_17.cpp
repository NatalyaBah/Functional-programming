// Сдать до 2022_02_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()


{
	srand(time(NULL));

	//Создать массив из 10 элементов каждый. Заполнить их случайными значениями от 1 до 9.
	//Записать в третий массив элементы присутствующие одновременно и в первом и во втором
	//массиве без повторений.

	int const size = 10;
	int array1[size];
	int array2[size];
	int array3[size]={};
	for (int i = 0; i < size; i++)
	{
		array1[i] = 1 + rand() % (9 - 1) + 1;		
		cout << array1[i] << " ";	
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{	
		array2[i] = 1 + rand() % (9 - 1) + 1;
		cout << array2[i] << " ";
	}
	cout << endl;
	bool flag;
	for (int i = 0, k = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array1[i] == array2[j])
			{
				flag = true;
				for (int n = 0; n < k; n++)
				{
					if (array1[i] == array3[n])
					{
						flag = false;
						break;
					}
				}
				if (flag == true)
				{
					array3[k++] = array1[i];
					break;
				}
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << array3[i] << " ";
	}
	cout << endl << endl;	

	//Даны два массива по 7 элементов каждый. Создать третий массив, который будет включать
	//только четные значения первого и второго массиива.

	int const size1 = 7;
	int arr1[size1];
	int arr2[size1];
	int arr3[size1 + size1];
	for (int i = 0; i < size1; i++)
	{
		arr1[i] = 1 + rand() % (9 - 1) + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		arr2[i] = 1 + rand() % (9 - 1) + 1;
		cout << arr2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] % 2 == 0)
		{
			arr3[i] = arr1[i];
			cout << arr3[i] << " ";
		}
	}
	for (int j = 0; j < size1; j++)
	{
		if (arr2[j] % 2 == 0)
		{
			arr3[j] = arr2[j];
			cout << arr3[j] << " ";
		}
	}
	cout << endl << endl;

	//Первый массив содержит 6 элементов, второй 8 элементов. Создать третий массив, который
	//будет включать в себя все элементы и первого и второго массива.

	int const size3 = 6;
	int const size4 = 8;
	int ar1[size3];
	int ar2[size4];	
	int ar3[size3 + size4];
	for (int i = 0; i < size3; i++)
	{
		ar1[i] = 1 + rand() % (9 - 1) + 1;
		cout << ar1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size4; i++)
	{
		ar2[i] = 1 + rand() % (9 - 1) + 1;
		cout << ar2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size3; i++)
	{
		ar3[i] = ar1[i];
		cout << ar3[i]<< " ";
	}
	for (int j = 0; j < size4; j++)
	{
		ar3[j] = ar2[j];
		cout << ar3[j] << " ";
	}
	cout << endl << endl;
		
	//Дан массив из 7 элементов и из 5 элементов. Создать третий массив, включающий в себя 
	//только уникальные элементы из первого и второго массива.

    int const size6 = 7;
    int const size7 = 5;
    int mass1[size6];
    int mass2[size7];
    int mass3[size6 + size7] = {};
	
    bool flag1;
    int k = 0;
    for (int i = 0; i < size6; i++)
    {
	    mass1[i] = 1 + rand() % (9 - 1) + 1;
	    cout << mass1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size7; i++)
    {
	    mass2[i] = 1 + rand() % (9 - 1) + 1;
	    cout << mass2[i] << " ";
    }
    cout << endl;
	
    for (int i = 0; i < size6 - 1; i++) 
	{
	    flag1 = true;
	    for (int j = i + 1; j < size6; j++)
	    {
		    if (mass1[i] == mass1[j])
		    {
			    flag1 = false;
			    break;
		    }
		    if (flag1 == true)
		    {
			    for (int j = 0; j < i; j++)
			{
				    if (mass1[i] == mass1[j])
				    {
					    flag1 = false;
					    break;
				    }
			    }
		    }
	    }
	    if (flag1 == true)
	    {
		    mass3[k++] = mass1[i];
	    }
    }
    flag1 = true;
    for (int i = 0; i < size6 - 1; i++)
    {
	     if (mass1[size6 - 1] == mass1[i])
	     {
		     flag1 = false;
		     break;
	     }
    }
    if (flag1)
    {
	    mass3[k] = mass1[size6 - 1];
    }




    for (int i = 0; i < size7 - 1; i++)
    {
	    flag1 = true;
	    for (int j = i + 1; j < size7; j++) 
	    {
		    if (mass2[i] == mass2[j])
		    {
			    flag1 = false;
			    break;
		    }
		    if (flag1 == true) 
		    {
			    for (int j = 0; j < i; j++) 
			    {
				   if (mass2[i] == mass2[j])
				   {
					   flag1 = false;
					   break;
				   }
			    }
		    }
	    }
	    if (flag1 == true) 
	    {
		   mass3[k++] = mass2[i];
	    }
    }
    flag1 = true;
    for (int i = 0; i < size7 - 1; i++)
    {
	    if (mass2[size7 - 1] == mass2[i]) 
     	{
	     	flag1 = false;
		    break;
	    }
    }
    if (flag1)
    {
    	mass3[k] = mass2[size7 - 1];
    }
	for (int i = 0; i < size6 + size7; i++)
    {
	    cout << mass3[i] << " ";
    }
	cout << endl;


	/*for (int i = 0; i < (size6 + size7) -1; i++)
	{
		flag1 = false;
		for (int j = i+1; j < size6 + size7; j++)
		{
			if (mass3[i] == mass3[j])
			{
				flag1 = true;
				break;
			}
		}
		if (flag1 == true)
		{
			for (int j = 0; j < i; j++)
			{
				if (mass3[i] == mass3[j])
				{
					flag1 = false;
					break;
				}
			}
		}
		if (flag1 == true) mass3[k++] = mass3[i];
	}
	for (int i = 0; i < size6 + size7 ; i++)
	{
		cout << mass3[i] << " ";
	}*/

	


	
	cout << endl << endl;
}
