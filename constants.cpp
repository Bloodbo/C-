#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    //ОБЪЯВЛЕНИЕ КОНСТАНТЫ 7 ДНЕЙ В НЕДЕЛЕ
    const int COUNT_DAYS_IN_WEEK = 7;

    //const char NEW_LINE = "\n";
    //константа для перехода на новую строчку

    int a, b;
    cout << "введите какой сейчас день недели по номеру =  " << endl;
    cin >> a;

    if (a > 7) {
        cout << "ошибка введён неправильно день недели" << endl;
    }

    if (a < 0) {
        cout << "ошибка введён неправильно день недели" << endl;
    }

    if(a <= 7) {
        b = COUNT_DAYS_IN_WEEK - a;
        cout << "до конца недели осталось =  " << b << endl;
    }
    // программа для вычисления сколько дней осталось до конца недели

}

