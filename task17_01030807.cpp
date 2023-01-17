/*Є масив чисел : {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
Це так звана послідовність Фібоначчі .
Створіть новий масив який складатиметься із дійсних чисел обчислених за 
формулою фібоначчі[i+1] / фібоначчі[i]
Результ виведіть на екран*/
#include <iostream>

using namespace std;
int main() 
{
  int fibonacci[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
  int arr[13];
  cout << "A new array from numbers of fibonacci: ";
  for(int i = 0; i < 12; i++)
  {
    arr[i] = 0;
    arr[i] = fibonacci[i+1]/fibonacci[i];
    cout << arr[i] << " ";
  }
}
