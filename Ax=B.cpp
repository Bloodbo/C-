#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    setlocale(0, "");
    cout << "решение уравнение Ax = B" << endl;
    double A, B;
    cout << "A = " << endl;
    cin >> A;
    cout << "B = " << endl;
    cin >> B;
    //контролируемый блок кода:
    try {
        if (A!=0) {
            // генерирование исключения
            throw A;
        }
        if (B != 0) {
            // генерирование исключения
            throw "Решений нет";
        }
        cout << "решением является любое число" << endl;
    }

    //обработка числового исключения
    catch (double e) {
        cout << "Решение уравнение: " << B / e << endl;
    }
    // обработка текстового исключения
    catch (char* e) {
        cout << e << endl;
    }
    return 0;
}

