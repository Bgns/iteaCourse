#include <iostream>

using namespace std;
int main()
{
    const int mask = 1;
    int bits;
    cout << "Enter bits: ";
    cin >> bits;

    if(bits < 0 || bits > 511) {
        cout << "Invalid bits" << endl;
        return 0;
    }
    
    if((bits & mask) == 1) cout << "The packet was last: " << (bits & mask) << endl;
    else cout << "The packet was not last: " << (bits & mask) << endl;
}
