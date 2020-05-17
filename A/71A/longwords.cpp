#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int n, i;
  string word;
  cin >> n;
  
  for (i = 0; i < n; i++) {
   cin >> word;
   int len = word.length();
   if (len <= 10) { cout << word << endl; }
   else { cout << word[0] << len - 2 << word[len-1] << endl; }
  } 

  return 0;
}