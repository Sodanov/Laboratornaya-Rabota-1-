#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, ""); // русские символы

    int K;
    int sotni, desyatki, edinicy; // отдельно каждая цифра числа
    int S;

    cout << "Введите трехзначное число K: ";
    cin >> K;

    sotni = K / 100;            // сотни
    desyatki = (K / 10) % 10;   // десятки
    edinicy = K % 10;           // единицы

    S = sotni + desyatki + edinicy;

    cout << "S = " << S << endl;

    return 0;
}
