#include <iostream>
using namespace std;

int f(int n) {
   int i = 3;
   while (n % i) {
      i++;
   }
   return i;
}

int main ()
{
  int i, n, N;
  long long k, j;
  cin >> N;
  
  for (i = 0; i < N; i++) {
     cin >> n >> k;
     
     int res = n;

     for (j = 0; j < k; j++) {
      int d = (k - j);       
      if (res % 2 == 0) { res += d*2; break; }
      else { res += f(res); }
     }  
   
     cout << res << endl;
  }

  return 0;
}