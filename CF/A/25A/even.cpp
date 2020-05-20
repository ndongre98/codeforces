#include <iostream>
using namespace std;

int main ()
{
  int n, i, v;
  int A[100];
  
  cin >> n;
  for (i = 0; i < n; i++) {
   cin >> v;
   A[i] = v % 2; 
  }
  
  if (A[0] != A[1] && A[0] != A[2]) { cout << 1 << endl; return 0; }
  
  for (i = 1; i < n; i++) {
   if (A[i] != A[i-1]) { cout << i+1 << endl; return 0; }
  }

  return 0;
}