#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(0, "");

	int num;
	//инициализация генератора случайных чисел
	srand(2);
	//оператор цикла:
	for (int k = 1; k <= 10; k++) {
		// случайное число от 2 до 8:
		num = 2 + rand() % 7;
		//оператор выбора:
		switch (num)
		{
		case 3:
		case 6:
			cout << num << ": число делиться на три" << endl;
			break;

		case 2:
		case 4:
		case 8:
			cout <<num<< ": степень двойки" << endl;
			break;

		case 5:
			cout << num << ": пятёрка" << endl;
			break;

		case 7:
			cout << num << ": семёрка" << endl;
		}

	}




}

