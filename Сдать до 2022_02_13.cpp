

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand (time(NULL)); 

	int const size = 7;
	int const size1 = 5;
	int ar [size] [size1];	
	float sum = 0;
	float sr = 0;	
	int min1 = 90*size1;
	int max1 = size1-1;
	int min2 = 90*size;
	int max2 = size-1;
	int number_line = 0;
	int number_column = 0;
	for (int i = 0, sums; i < size; i++)	
	{				
		sums = 0;
		for (int j = 0; j < size1; j++)
		{			
			ar[i][j] = 1 + rand() % (91 + 1);			
			cout << ar[i][j] << "\t ";	
			sum += ar[i][j];                             //Сумма всего массива
			sr = sum/ (size*size1);		                 //Среднеарифмитическое 
			sums += ar[i][j];                            //Сумма строк	
			
		}		
		for (int j = 0; j < size1; j++)
		{
			if (sums > max1)
			{
				max1 = sums;
				number_line = i + 1;                      //Номер строки с максимальной суммой
			}
			if (sums < min1) min1 = sums;				
		}
		
		
		cout << " | " << sums;             
		cout << endl;
	}	
	
	cout << "__________________________________________ " << endl;	
	
	int min = ar[0][0];                                   //Мин. макс. значение массива 
	int max = ar[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size1; j++)		
		{			
			if (ar[i][j] < min) min = ar[i][j];
			if (ar[i][j] > max)	max = ar[i][j];
		}	
	}			
	
	for (int j = 0, sumj; j < size1; j++)
	{
		sumj = 0;                                          //Сумма столбцов  		
		for (int i = 0; i < size; i++)
		{
			sumj += ar[i][j];
		}
		for (int i = 0; i < size1; i++)
		{
			if (sumj > max2) max2 = sumj;
			if (sumj < min2)
			{
				min2 = sumj;
				number_column = j + 1;                     //Номер столбца с минимальной суммой
			}
		}				
		cout << " " << sumj << "\t";
	}


		cout << endl << endl;;
		cout << "Summa: " << sum << " " << endl;
		cout << endl;
		cout << "Sr: " << sr << " " << endl;
		cout << endl;
		cout << "MIN " << min << " " << "MAX :" << max << " " << endl;
		cout << endl;
		cout << "MIN line:\t " << min1 << "\t " << "MAX line:\t " << max1 << " " << endl;
		cout << endl;
		cout << "Namber line MAX: " << number_line << endl;
		cout << endl;
		cout << "MIN column:\t " << min2 << "\t " << "MAX column:\t " << max2 << " " << endl;
		cout << endl;
		cout << "Namber coiumn MIN: " << number_column << endl;
		cout << endl;


	

}


