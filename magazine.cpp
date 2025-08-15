#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int amount = 0;
    int i = 0;
    int a;
    int arr[5]; //создали массив для 5 оценителей
    for (int j = 0; j < 5; j++) {
        cout << "Введите оценку " << j + 1 << " = ";
        cin >> arr[j];
        if (arr[j] < 0) { //проверяем на ввод отрицательных чисел
            cout << "oops..." << endl;
            return 0; //завершаем программу, т.к. нет смысла в её дальнейшем выполнении
        }
        amount += arr[j]; //подсчитываем сумму оценок
    }
    double average = amount / 5; //считаем среднее арифметическое без округления
    cout << "средний балл =  " << average << endl;
}