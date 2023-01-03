/* Умова: Напишіть програму для обчислення площі прямокутника. Довжини сторін фігури
мають вводитись з клавіатури. */

#include <iostream>
using namespace std;
int main()
{
    double firstSide, secondSide;
    cout << "Введіть 2 сторони прямокутника\nПерша сторона = ";
    cin >> firstSide;
    cout << "Друга сторона = ";
    cin >> secondSide;
    cout << "S = " << firstSide * secondSide << endl;
}
