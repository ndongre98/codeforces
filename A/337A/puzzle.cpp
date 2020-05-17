#include <iostream>
#include <algorithm>
using namespace std;

int min(int a, int b) { return (a < b) ? a : b; }

int main ()
{
  int n, m, i, minV, d;
  int A[50] = {};
  minV = 2000;

  cin >> n >> m;
  n --;
  d = m - n;
  
  for (i = 0; i < m; i++) {
   cin >> A[i];
  }

  sort(A, A+m);
  
  for (i = 0; i < d; i++) {
   int diff = A[i+n] - A[i];
   minV = min(minV, diff); 
  }  

  cout << minV;  
  return 0;
}