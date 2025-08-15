#include <iostream>
#include <string>
using namespace std;

class Human 
{
public:
    int age;
    int weight;
    string name;

    void Print()
    {
        cout << "Имя " << name << "\nВес " << weight << "\n Возраст" << age << endl << endl;

    }
};

int main()
{
    setlocale(0,"");
    //классы
    Human firstHuman;

    firstHuman.age;
    firstHuman.name;
    firstHuman.weight;
    cout << "введите возраст:  " << endl;
    cin >> firstHuman.age;
    if (firstHuman.age <= 0) {
        cout << "error" << endl;
    }
    else {
        cout << "введите ваше имя: " << endl;
        cin >> firstHuman.name;
        cout << "введите ваш вес =  " << endl;
        cin >> firstHuman.weight;
    }
        if (firstHuman.weight <= 0) {
            cout << "error" << endl;
        }
        else {




            cout << "___________________________________________________________" << endl;
            //создаём второго человека
            Human secondHuman;

            //возраст второго = второго

            secondHuman.age = firstHuman.age;
            secondHuman.name = "Денис";
            secondHuman.weight = 76;
            cout << secondHuman.name << endl;
            cout << "вес = " << secondHuman.weight << endl;
            cout << "возраст =  " << secondHuman.age << endl;
        }

        Human threeHuman;
        threeHuman.age = 30;
        threeHuman.name = "Иванов Иван";
        threeHuman.weight = 100;
        //выводим имя ,возраст,вес с помощью функции в классе Print()
        threeHuman.Print();

        // у каждого экземпляра свои поля класса 




    return 0;
}
