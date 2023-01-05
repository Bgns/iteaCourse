#include <iostream>

using namespace std;
int main()
{
    11 int hryvnya, penny;
    cout << "Введіть гривні = ";
    cin >> hryvnya;
    cout << "Введіть копійки = ";
    cin >> penny;
    cout << hryvnya + (penny / 100) % 100 << " грн. " << (penny % 100) << " коп." << endl;
}
