#include <iostream>

using namespace std;
int main()
{
    int address;
    cout << "Enter address: ";
    cin >> address;

    if(address < 0 || address > 255)
    {
        cout << "Invalid address";
        return 0;
    }
    const int mask = 128;

    if(address & mask) cout << "You entered: " << (address & mask);
    else cout << "You don't have rights: "<< (address & mask);
    
    return 0;
}
