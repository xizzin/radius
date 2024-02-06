
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;

double aaaaa(double a, double b) {
    double c;
    c = 3.14 * (a*a - b*b);
    return c;
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    cout << "Введите внешний радиус кольца\n";
    double R;
    cin >> R;
    cout << "Введите внутренний радиус кольца\n";
    double r;
    cin >> r;
    double S;
//оч сильно извиняюсь, проверок нет :(
    
    S = aaaaa(R, r);
    cout << "Результат равен " << S << "\n\n";
}

