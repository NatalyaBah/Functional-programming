// ДЗ_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()


{

	//****************** task 1 ***********************
   
	float R1, R2, R3;
	cout << "input R1:";
	cin >> R1;
	cout << "input R2:";
	cin >> R2;
	cout << "input R3:";
	cin >> R3;
    cout << 1 / R1 << " + " << 1 / R2 << " + " << 1 / R3 << " = " << 1/R1 + 1/R2 + 1/R3 << endl;
	float R0 = 1 / R1 + 1 / R2 + 1 / R3;
	cout << "1/R0 = " << 1 / R0 << endl;
	cout << "" << endl;
	


	//****************** task 2 ***********************

	float L;
	cout << "input L:";
	cin >> L;
	const double pi = 3.14;
	cout << L << "/" << 2 << "*" << pi << " = " << L/2*pi << endl;
	double R = L / 2 * pi;
	cout << "R =" << R << endl;
	cout << pi << " * " << R << " * " << R << " = " << pi*R*R << endl;
	cout << "S =" << pi * R * R << endl;
    cout << "" << endl;
	

	//****************** task 3 ***********************

	float v, t, a;
	cout << "input v:";
	cin >> v;
	cout << "input t:";
	cin >> t;
	cout << "input a:";
	cin >> a;
	cout << v << " * " << t << " + " << " ( " << a << " * " << t << " * " << t << " ) " << " / " << 2 << " = ";
	cout << v * t + (a * t * t) / 2 << endl;
	cout << "S =" << v * t + (a * t * t) / 2 << endl;

	return 0;
	

}

