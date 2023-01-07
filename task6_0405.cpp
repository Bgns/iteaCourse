#include <iostream>

using namespace std;
int main()
{
    float R1, R2, R3;
    cout << "Введіть опори R1: ";
    cin >> R1;
    cout << "R2: ";
    cin >> R2;
    cout << "R3: ";
    cin >> R3;
    printf("R0 = %.2f ", (1/1/R1 + 1/R2 + 1/R3)); 
}
