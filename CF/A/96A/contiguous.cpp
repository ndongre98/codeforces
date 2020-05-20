#include <iostream>
using namespace std;

int main ()
{
  string A;
  cin >> A;
  
  int n = A.length();
  int cont = 1;
  int i;
  
  for (i = 1; i < n; i++) {
   if (A[i] == A[i-1]) { cont++; }
   else { cont = 1; } 
   if (cont >= 7) { cout << "YES" << endl; return 0; }
  }
  
  cout << "NO" << endl;
  return 0;
}