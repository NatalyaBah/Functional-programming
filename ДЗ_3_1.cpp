// ДЗ_3_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	//******************* task 1 *********************


	double t, s;
	cout << "input s:";
	cin >> s;
	cout << "input t:";
	cin >> t;
	double v;
	cout << s << " / " << t << " = " << s / t << endl;
	cout << "v = " << s / t << endl;
	cout << " \n ";


	//******************* task 2 *********************


	int start, stop;
	int t1;
	const int price = 2;
	int h, m, s5;
	cout << "h :";
	cin >> h;
	cout << "m :";
	cin >> m;
	cout << "s :";
	cin >> s5;
	cout << "start :" << h << ":" << m << ':' << s5 << endl;
	int h1, m1, s1;
	cout << "h1 :";
	cin >> h1;
	cout << "m1 :";
	cin >> m1;
	cout << "s1 :";
	cin >> s1;
	cout << "stop :" << h1 << ":" << m1 << ':' << s1 << endl;
	start = h * 60 + m + s5 / 60;
	stop = h1 * 60 + m1 + s1 / 60;
	t = (stop - start);
	cout << "riding time :" << t1 << endl;
	cout << "price :" << t1 * price << " gr ";
	cout << "\n";


	//******************* task 3 *********************


	float s7, a, b1, b2, b3, r, r1, r2;
	cout << "distans :";
	cin >> a;
	cout << "consumption :";
	cin >> s7;
	cout << "92 :";
	cin >> b1;
	cout << "95 :";
	cin >> b2;
	cout << "DT :";
	cin >> b3;
	r = s7 / 100 * a * b1;
	r1 = s7 / 100 * a * b2;
	r2 = s7 / 100 * a * b3;
	cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
	cout << char(124) << "\t 92" << "\t" << char(124) << "\t 95" << "\t" << char(124) << "\t DT" << "\t" << char(124) << endl;
	cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	cout << char(124) << "\t" << r << "\t" << char(124) << "\t" << r1;
	cout << "\t" << char(124) << "\t" << r2 << "\t" << char(124) << endl;
	cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
