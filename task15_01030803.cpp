/*Написати програму яка лічить суму всіх від ємних значень в масиві , ’фіксованого розміру Розмір масива можна прописати в коді тобто . (захардкодити на розсуд програміста Елементи масива заповнити ) .випадковим чином але так щоб та , , м ’ . були додатні і від ємні числа Сам масив і суму від ємних вивести на екран ’ .*/
#include <array>
#include <iostream>
#include <time.h>

using namespace std;
int main() {
  int sumNegatives = 0, sumNegatives1 = 0;
  int arr[] = {-2, 6, 9, -1, -7, 5, -3, 1, 10, 4};

  srand(time(NULL));
  int arrRand[10];
  for (int i = 0; i < 10; i++) {
    arrRand[i] = rand() % 10 - 10;
  }

  cout << "Елементи arr:";
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << ", ";
    if (arr[i] < 0) {
      sumNegatives += arr[i];
    }
    if (arrRand[i] < 0) {
      sumNegatives1 += arrRand[i];
    }
  }
  
  cout << endl << "Елементи arrRand:";
  for (int i = 0; i < 10; i++)
    cout << arrRand[i] << ", ";

  cout << endl << "Сума від ємних елементів sumNegatives: " << sumNegatives;
  cout << endl << "Сума від ємних елементів arrRand: " <<   sumNegatives1 << endl;
  return 0;
}
