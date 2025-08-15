#include <iostream>
using namespace std;


//функции

void fu() 
{
    cout << "приветствуем!" << endl;
}

double Sum(double a, double b, double c) 
{
    return a + b + c;
}

int sum(int a, int b) 
{
    return a + b;
}

int foo(int a)
{
    //функция на увеличение числа на единицу!
    return ++a;
}

//основная функция с которой читается программа

int main()
{
    setlocale(0,"");
    
    for (int i = 0; i < 20; i++) {
        fu();
        cout << "\n \n";
    }

    int q = 11;
    int w = 12;
    int k = 555;

   
    cout << sum(20,30) << endl;

    
    cout << "\n" << Sum(22, 44, 11) << endl;

    //------------------------------

    int value = 1;
    value = foo(value);
    cout << value << endl;

}
