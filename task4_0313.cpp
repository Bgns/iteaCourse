#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float number, stepin, divider = 1, devisor = 5;
    stepin = divider / devisor; // 1 / 5
    cout << "Введіть число, щоб обчислити зоряну величину: ";
    cin >> number;
    cout << "Відповідь: " << number * pow(100, stepin) << endl;
}
