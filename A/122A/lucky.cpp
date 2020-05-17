#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  
  if (!(n%4 && n%7 && n%47 && n%74 && n%77 && n%447 && n%474 && n%477 && n%777 && n%774 && n%747)) {
     cout << "YES" << endl;
  }else {
     cout << "NO" << endl;  
  }
  
  return 0;
}