#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    //указатель на целое число:
    int* size;
    //динамическое выделение памяти под переменную:
    size = new int;
    cout << "введите размер динамического массива =  " << endl;
    cin >> *size;
    //указатель на символьное значение:
    char* symbs;
    //создание символьного массива:
    symbs = new char[*size];
    //заполнение массива:
    for (int k = 0; k < *size; k++) {
        symbs[k] = 'a' + k;
        cout << symbs[k] << " ";
    }
    //удаление массива:
    delete[] symbs;
    cout << "\nмассив был удалён" << endl;
    return 0;




}

