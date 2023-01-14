/*Написати програму, яка обчислює кількість і суму всіх цілих непарних чисел від 1 до n.*/

#include <iostream>

using namespace std;
int main()
{
  int n, counter = 0, sum = 0;
  cout << "Введіть n, щоб дізнатися кількість і суму всіх непарних чисел від 1 до n: ";
  cin >> n;

  for(int i = 1; i <= n; i++) {
    if(i%2 == 1) {
      counter++;
      sum += i;
    }
  }
  cout << "Кількість непарних: " << counter << endl;
  cout << "Сума непарних : " << sum;

  return 0;
}
