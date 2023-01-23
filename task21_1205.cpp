/* Є рядок символів. Потрібно перевірити, 
чи є він паліндромом. Тобто чи читається однаково в обох
напрямках. Наприклад: “козак з казок”. */

// Підхід до символів з ASCII
#include <bits/stdc++.h>

using namespace std;
int main() {
  string word;
  int i, n, ans = 1;
  cout << "Enter a palindrom: ";
  getline(cin, word);
  
  //word.erase(remove(word.begin(), word.end(), ' '), word.end());
  n = word.length();
  
  for (i = 0; i < n/2; i++) {
    if (word[i] != word[n - i - 1]) {
      ans = 0;
      break;
    }
  }

  if (ans == 0) cout <<"The word isn't a palindrom";
  else cout << "The word is a palindrom";
  return 0;
}

 //Підхід до кирилиці
/*#include <bits/stdc++.h>

using namespace std;
int main() {
  string word;
  int n, i, result = 1;
  cout << "Enter a palindrom: ";
  getline(cin, word);

  word.erase(remove(word.begin(), word.end(), ' '), word.end());
  n = word.length();
