/*У перший день черепаха проповзла 1.5 м. Кожен наступний день вона проповзала на 20 см більше
за попередній. Визначити загальну відстань, що проповзла черепаха за N днів. Число N треба
запропонувати ввести користувачу з клавіятури.*/
#include <iostream>

using namespace std;
int main()
{
  float n, entireDistance = 0, turtleLength = 1.5;
  cout << "Введіть n днів для черепахи: ";
  cin >> n;

  if(n < 2) cout << "Помилка. N повинен бути більше 2";
  else
  {
    for(int i = 1; i <= n; i++) {
      turtleLength += 0.2;
      entireDistance += turtleLength; 
    }
    cout << "Загальна відстань: " << entireDistance << endl;
  }
  
  return 0;
}
