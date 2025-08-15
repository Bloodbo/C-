#include <iostream>
using namespace std;

// private и protected не дают воспользоваться переменными в основной функции

class Point
{
public:
    int x;
    int y;
    void Print() 
    {
        cout << "координата по оси x = " << x <<" координата по оси y = " << y << endl;
        PrintZ();
    }
protected:
    void PrintZ() {
        cout << z << endl;
    }
    int z;
};

int main()
{
    setlocale(0,"");
    Point a;
    cout << "введите координату по оси x =  " << endl;
    cin >> a.x;
    cout << "введите координату по оси y =  " << endl;
    cin >> a.y;
    a.Print();
    







}

