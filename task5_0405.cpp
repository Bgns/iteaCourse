#include <iostream>

using namespace std;
int main()
{
    float km, versta = 1.067;
    cout << "Введіть кілометри, щоб дізнатися версти: ";
    cin >> km;
    printf("%.3f \n", versta * km);
}
