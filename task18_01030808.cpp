/*Національний банк (версія 2.0 :) випустить банкноти 
номіналом 3000, 1000, 500, 200, 100, 50, 25, 10, 5 та 1.
Ваше завдання — написати програму для банкоматів, яка має знайти 
мінімальну кількість банкнот для видачі будь-якої суми клієнтам.
Майбутній міністр фінансів України попросив, щоб ваш код видав на екран
значення і кількість всіх типів банкнот окремо для вказаної суми.
Також врахуйте той факт, що банкомати Вінкор-ніксдорф можуть видавати за
один раз не більше 40 банкнот.*/
#include <iostream>

using namespace std;
int main() 
{
  int banknotes[] = {3000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
  int banknoteCounter[10] = {0};
  int banknote, n = 0;
  cout << "Enter your banknote: ";
  cin >> banknote;

  if(banknote <= 0) cout << "You have entered incorrectly, try once again";
  
  for(int i = 0; i < 10; i++) 
  {
    if(banknote >= banknotes[i]) {
      banknoteCounter[i] = banknote / banknotes[i];
      banknote %= banknotes[i];
      n+=banknoteCounter[i];
    }
  }

  if(n < 41) 
  {
    cout<<"Banknotes: " << endl;
    for(int i = 0; i < 10; i++) 
    {
      if(banknoteCounter[i] != 0)
      {
        cout << banknotes[i] << ", " << banknoteCounter[i] << "x" << endl;
      }
    }
    cout << "Amount of banknotes: " << n;
  }
  else cout << "Error. Amount of possible banknotes is more than 40. Try once again";
  
  return 0;
}
