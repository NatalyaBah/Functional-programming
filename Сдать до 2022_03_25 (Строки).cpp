// Сдать до 2022_03_25 (Строки).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
//Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
void spaceToTab(char str[]);
//Задание 2. Дана строка символов. Определить количество букв,
//цифр и остальных символов, присутствующих в строке.
int defineNumberWord(char str[]);
//Задание 3. Подсчитать кол-во слов во введеном предложении.
bool findWord(char str[], const char word[]);
//Задание 4. Дана строка символов. Необходимо проверить является ли
//эта строка палиндромом.
void polidromWord(char str[]);

void spaceToTab(char str[])
{   
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ') str[i] = '\t';        
        cout << str[i];
    }
}
void defineNumberStroka(char str[])
{
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z') counter++;
    }
    cout << " Word count: " << counter << endl;

    int counter1 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9') counter1++;
    }
    cout << " Word namber: " << counter1 << endl;  

    int counter2 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ',') counter2++;        
    }
    cout << " Word symbol: " << counter2 << endl;
}
int findWord(char str[])
{          
    int size = sizeof(str) / sizeof(str[0]);
    int counter = 0;   
    for (int i = 0; str[i] != '/0'; i++)
    {
        
    }
}
int polidromStr(char str[])
{    
    int size = sizeof(str) / sizeof(str[0]);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int k = 0, j = size+1; k < j; k++, j--)
        {
            if (str[k] == str[j]) return true;
        }
        return false;
    }
}
int main() 
{    
    char str[] = {"Heppy new year, 2022!"};      
    cout << str;
    cout << endl;
    spaceToTab(str);
    cout << endl << endl;
    defineNumberStroka(str);
    cout << endl;    
    cout << " Word count: "<< findWord(str);
    cout << endl << endl;
    cout << " Word polydrom if \" 1 \", the word is not a polydrome if \" 0 \": "
        << polidromStr(str);
    cout << endl;
        

    
}

