/*Хай ваша змінна містить значення 9 бітів, отриманих із заголовка ТСР (в десятковій
системі числення вона зможе приймати значення від 0 до 511 включно). Якщо
дев’ятий біт під назвою FIN встановлений в 1, то це означає, що отриманий пакунок
від цього відправника був останній. Розробіть маску і напишіть програму, яка буде
виводити на екран значення цього біта залежно від значення змінної.*/

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
    
    if(bits & mask) cout << "The packet was last: " << (bits & mask) << endl;
    else cout << "The packet was not last: " << (bits & mask) << endl;
    return 0;
}
