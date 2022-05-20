#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int input, min, min1, hour, hour1, per;
    cout << "Введите время в секундах: \n";
    cin >> input;
    per = 28800 - input;
    hour = per / 3600;
    min = per % 3600;
    min1 = min / 60;
    cout << "До окончания рабочего дня осталось: \n";

    if(hour>=0&&hour<1)
        cout<< hour << " часов " << min1 << " минут ";
    else if (hour == 1)
        cout << hour << " час " << min1 << " минут ";
    else if (hour > 1 && hour < 5)
        cout << hour << " часа " << min1 << " минут ";
    else if (hour >= 5 && hour <= 8)
        cout << hour << " часов " << min1 << " минут ";


    return 0;
}
