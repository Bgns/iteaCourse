/*Створіть масив цілих чисел. А також дві змінні:
int найбільше=масив[0];
int найменше=масив[0];
Використайте їх, щоб знайти найменший і 
найбільший елемент масива. Вхідниймасив, 
його найменше і найбільше значення 
видайте на екран.*/
#include <iostream>

using namespace std;
int main()
{
    int arr[] = {-200, 300, 10, 25, -400, 150, 200, 450, -10, 60, 20, 40, -40, 30, 100, -100, 10};
    int min = arr[0], max = arr[0];

    for(int i = 0; i < 17; i++)
    {
      if(min > arr[i]) min = arr[i];
      if(max < arr[i]) max = arr[i];
    }
    cout << "Max: " << max << endl << "Min: " << min << endl;
}