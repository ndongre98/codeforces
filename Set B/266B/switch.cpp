#include <iostream>
using namespace std;

int main ()
{
  int n, t, i, j;
  char A[50] = {};

  cin >> n >> t;
  
  for (i = 0; i < n; i++) {
   cin >> A[i];
  }

  for (j = 0; j < t; j++) {
     for (i = 0; i < n-1; i++) {
         if (A[i] == 'B' && A[i+1] == 'G') {
            A[i] = 'G';
            A[i+1] = 'B';
            i++;
         }
     } 
  }
  
  
  for (i = 0; i < n; i++) {
   cout << A[i];
  }  
  return 0;
}