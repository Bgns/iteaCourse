#include <iostream>

using namespace std;
int main()
{
    int address;
    const int mask = 128;
    cout << "Введіть октет адреси за протоколом ІР версії 4: ";
    cin >> address;

    if(address < 0 || address > 255)
    {
        cout << "Invalid address";
        return 0;
    }
    
    cout << "В нашій мережі застосована маска " << mask << endl;
    cout << "Октет адреси підмережі: " << (address & mask);
    return 0;
}
