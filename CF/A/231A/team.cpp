#include <iostream>
using namespace std;

int main ()
{
  int n,i,ctr;
  cin >> n;
  ctr = 0;

  for (i = 0; i < n; i++) {
   int a,b,c;
   cin >> a >> b >> c;
   if ((a + b + c) > 1) {
      ctr ++;
   }
  }
  
  cout << ctr << endl;
  return 0;
}