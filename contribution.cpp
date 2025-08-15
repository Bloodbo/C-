#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    double principal, rate, time;

    cout << "Введите основную сумму: ";
    cin >> principal;
    if (principal < 0) {
        cout << "что то пошло не так..." << endl;
    }
    else {
        cout << "Введите процентную ставку (в процентах, например, 5,5 для 5,5%).: ";
        cin >> rate;
        if (rate < 0) {
            cout << "что то пошло не так..." << endl;
        }
        else {
            cout << "Введите промежуток времени (в годах): ";
            cin >> time;
            if (time < 0) {
                cout << "что то пошло не так..." << endl;
            }
            else {

                double amount = principal * pow(1.0 + rate / 100, time);
                double interest = amount - principal;

                cout << "Заработанные деньги после закрытия вклада =   " << time << " год(лет): $" << setprecision(2) << fixed << amount << endl;
                cout << "Заработанные проценты составляют: $" << setprecision(2) << fixed << interest << endl;
                // fixed - для красивого вывода числа вроде такого 3.14; setprecision - задаём сколько может быть знаков после запятой

                return 0;
            }
        }
       }
}