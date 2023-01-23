/*Завдання.Задайте дві змінні, які містять рядки. 
Перевірте чи вони закінчуються однаковою буквою.*/
#include <bits/stdc++.h>

using namespace std;
int main() {
  string str1("To be, or not to be, that is the question:");
  string str2("Whether ’tis nobler in the mind to suffer");
  cout << "First string is: " << str1 << endl;
  cout << "Second string is: " << str2 << endl;

  int n1 = (str1.length() - 1), n2 = (str2.length() - 1);
  if(str1[n1] != str2[n2]) cout << "Останні не повторюються" << endl;
  else cout << "Останні повторюються" << endl;
}
