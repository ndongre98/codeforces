#include <iostream>
#include <ctype.h>
using namespace std;

int main ()
{
  string s;
  int len, i;
  cin >> s;
  len = s.length();

  for (i = 0; i < len; i++) {
   char c = tolower(s.at(i));
   if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
      cout << "." << c;
   }
  }
  
  cout << endl;
  return 0;
}