#include <iostream>
using namespace std;

int M, S;

int findMax() {
   int i, m;
   int s = S;
   int res = 0;
      
   for (m = 0; m < M; m++) {
      for (i = 9; i >= 0; i--) {
         if (i <= s){ 
           res = (res * 10) + i;
           s -= i;
           break;       
         }
      }
      if (i < 0) return -1;
   }
   
   return res;
}

int findMin() {
   int i, m;
   int s = S;
   int res = 0;
   int start = 1;
         
   for (m = 0; m < M; m++) {
      for (i = start; i <= 9; i++) {
         if (i <= s){ 
           cout << i << endl;
           res = (res * 10) + i;
           s -= i;
           start = 0;
           break;       
         }
      }
      if (i >= 9) return -1;
   }
   
   return res;
}
int main ()
{
  cin >> M >> S;

  int res = findMin();
  int res2 = findMax();
  
  cout << res << endl;
  cout << res2;
  return 0;
}
