// Сдать до 28.01.22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));

	 //************************** Задача 1 **********************


	int array[10];


	for (int i = 0; i < 10; i++)
	{
		{
			array[i] = 1 + rand() % (10 - 1 + 1);
			cout << array[i] << " ";
		}
	}
	int min = array[0];
	int max = array[0];
	for (int i = 0;i < 10;i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		if (array[i] > max)
		{
			max = array[i];
		}

	}
	cout <<" Min : " << min << " " << " Max : " << max << " ";
	cout << endl;


	 //************************** Задача 2 **********************


	int array1[100];
	int a, b ;	
	cout << "input a,b :";
	cin >> a >> b;
	int summ = 0;
	if (a > b) swap(a, b);	
	for (int y = 0; y < 10; y++)
	{
		array1[y] = a + rand() % (b - a);		
	}	
	for (int y = 0; y < a; y++)
	{
		summ += array1[y];
	}	
	cout << "Summa :" << summ;
	cout << endl;

		
	 //************************** Задача 3 ***********************


	/*int array3[12];	
	int a, b;	
	for (int z = 0;z < 12;z++)
	{
		cout << z + 1 << " Enter profit for the month :";
		cin >> array3[z];		
	}	
	cout << " Select month range :";
	cin >> a >> b;
	int min3 = array3[0];
	int max3 = array3[0];
	for (int m = a;m < b;m++)
	{
		if (array3[m] < min3)
		{
			min3 = array3[m];
		}
		if (array3[m] > max3)
		{
			max3 = array3[m];
		}
	}
	cout << "Min :" << min3 << " ";
	cout << "Max :" << max3 << " ";
	cout << endl;*/


	//*************************** Задача 4 ***********************


	int array4[100];
	int p;
	cout << "Enter array :";
	cin >> p;
	int summa = 0;
	
	for (int n = 0;n < p;n++)            // Сумма отрицательных элементов
	{
		cout << "Enter nambers :";
		cin >> array4[n];
		if (array4[n] < 0) 
		{			
			summa += array4[n];		
		}		
	}
	cout << "Summa :" << summa << " ";

	int min4 = array4[0];                // Произведение элементов, находящихся между min и max
	int max4 = array4[0];	
	int pr = 0;
	for (int n = 0;n < p;n++)
	{
		if (array4[n] < min4)
		{
			min4 = array4[n];				
		}
		if (array4[n] > max4)
		{
			max4 = array4[n];				
		}
	}	
	if(min4 < max4)
	for (int n = min4;n < max4;n++)
	{
		pr =min4*max4 ;
	}			
	cout << "Pr :" << pr << " ";
	
	int pr1 = 0;	                     //Произведение элементов с чётными номерами
	for (int n = 0;n < p;n++)
	{		
		if (n % 2 == 0)
		{
			pr1 *= array4[n];
		}
	}
	cout << "Pr1 :" << pr1 << " ";

	int summa1 = 0;
	for (int n = 0 + 1;n < p;n++)        // Сумма отрицательных элементов
	{
		
		if (array4[n] < 0)
		{
			summa1 += array4[n];
		}
	}
	cout << "Summa :" << summa1 << " ";

      
}
