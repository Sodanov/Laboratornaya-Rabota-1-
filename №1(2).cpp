#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double x, y;
    int a, b, c;   // a, b, c - целые числа

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    // считаем через вещественные числа
    double chislitel = y * y * y - 9;
    double znamenatel = (x + 1) * y;
    double cosXY = cos(x + y);

    double a_veshch = chislitel / znamenatel + cosXY * cosXY;
    double b_veshch = tan(fabs(x) + 10) + sin(x);
    double c_veshch = log(x - 16) + 5 * fabs(x + y);

    // перевод результата в целый тип
    a = (int)a_veshch;
    b = (int)b_veshch;
    c = (int)c_veshch;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
