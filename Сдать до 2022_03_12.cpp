

#include <iostream>
#include <ctime>
using namespace std;

const int size = 10;

void initArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 10 + rand() % (90 - 10 + 1);
    }
}
void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void sortArray(int array[], int size)
{
    int counter = 0;
    bool flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                flag = true;
            }
            counter++;
        }
        if (flag == false) break;        
    }
}
int binarySort(int array[], int number, int min, int max)
{             
    if (min <= max)
    {
        int s = (min + (max-1)) / 2;      
        if (array[s] == number) return s;
        else if (array[s] < number) return binarySort(array, s + 1, max, number);
        else if (array[s] > number) return binarySort(array, s - 1, min, number);
    }
    return -1;
}
//int binary(int* arr, int l, int r, int key)
//{
//    if (l <= r)
//    {
//        int mid = l + (r - l) / 2;
//        if (arr[mid] == key) return mid;
//        else if (arr[mid] < key) return binary(arr, mid + 1, r, key);
//        else if (arr[mid] > key) return binary(arr, l, mid - 1, key);
//    }
//    return -1;
//}

int main()
{
    srand(time(NULL));
    const int size = 10;
    int array1[size] = {};    
    initArray(array1, 10);
    showArray(array1, 10);
    cout << endl;
    sortArray(array1, 10);
    cout << endl;
    showArray(array1, 10);
    cout << endl;        
    int number;
    cout << "Input namber: ";
    cin >> number;    
    int min = 0;
    int max = 1000;     
    cout << binarySort(array1, 10, min, max);

}
