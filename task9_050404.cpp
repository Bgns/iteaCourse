#include <iostream>

using namespace std;
int main()
{
    const int mask = 100;
    int rights;
    cout << "Enter rights: ";
    cin >> rights;

    if(rights < 0 || rights > 7) {
        cout << "Invalid rights" << endl;
        return 0;
    }

    if((rights & mask)) cout << "Have rights to read" << endl;
    else cout << "Have not rights to read" << endl;
    return 0;
}
