#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int n, average, sum = 0;
    cout << "введите размер массива: ";
    cin >> n;
    if (n < 3) {
        cout << "error" << endl;
    }
    else {
        // динамический массив:
        int* mass = new int[n];

        cout << "Введите элемент массива =  \n";
        for (int i = 0; i < n; i++)
        {

            cout << i << ": ";
            cin >> mass[i];
            sum += mass[i];

        }

        average = sum / n;

        cout << "среднее арифметическое =  " << average << endl;
    }
}