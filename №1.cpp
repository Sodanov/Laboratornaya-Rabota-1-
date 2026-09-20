#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");   // ввод русских символов

    double x, y;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    //разложение формулы
    double chislitel = y * y * y - 9;      // это y^3 - 9
    double znamenatel = (x + 1) * y;       // это (x+1)*y
    double cosXY = cos(x + y);             // косинус (x+y)

    double a = chislitel / znamenatel + cosXY * cosXY;

    // b = тангенс(|x|+10) + sin(x)
    double b = tan(fabs(x) + 10) + sin(x);

    // c = ln(x-16) + 5*|x+y|
    double c = log(x - 16) + 5 * fabs(x + y);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
