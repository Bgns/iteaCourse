/*Задача. Дана програма, має визначити останнє позитивне і перше негативне число в масиві. 
Треба знайти і виправити синтаксичні і логічні помилки.
#include <iostream>
using namespace std;
int main()
{ double size = 8;
double arr[size]={-5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0};
int positive = 0;
for (int i = size; i >= 0; i++)
{ if (arr[i] > 0)
{ positive = arr[i]; break; }
}
int negative = 0;
for (int i = 0; i <= size; i++)
{ if (arr[i] < 0)
{ negative = arr[i];
break; }
}
cout << "Last positive number: " << positive << endl;
cout << "First negatine number: " << negative << endl;
return 0;
}
Про знайдені помилки напишіть у коментарях і запропонуйте їх вирішення в програмі.
Виправлену програму з коментарями завантажте на replit.com і надішліть на перевірку.*/

#include <iostream>
using namespace std;
int main()
{ 
  int size = 9; // 8 обʼєктів недостатньо для масиву, замінив на int 9
  double arr[9] = {-5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0}; 
  // arr[size] замінив на arr[9] 
  int positive = 0;
  for (int i = size; i >= 0; i--) // замінив i >=0; i--
  { 
    if (arr[i] >= 0) // додатнє число - це >= 0, замінив >=0
    { 
      positive = arr[i];
      break; 
    }
  }
  int negative = 0;

  for (int i = 0; i < size; i++) // замінив i <= size, на i < size;
  { 
    if (arr[i] < 0)
    { 
      negative = arr[i];
      break; 
    }
  }
  cout << "Last positive number: " << positive << endl;
  cout << "First negatine number: " << negative << endl;
  return 0;
}
