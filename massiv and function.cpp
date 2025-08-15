#include <iostream>
using namespace std;

void FillArray(int arr[], int size)
{
    //заполнение массива случайными числами:
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30;
    }
}

void PrintArray(int arr[], int size)
{
    //вывод массива:
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  " ;
    }
}

int main()
{
    setlocale(0,"");
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    

    FillArray(arr, SIZE);
    PrintArray(arr, SIZE);


}
