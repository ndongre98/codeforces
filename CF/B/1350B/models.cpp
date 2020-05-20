#include <iostream>
using namespace std;

long long A[100001];
long long M[100001];
int n;

int min(int a, int b) { return (a < b) ? a : b; }
int max(int a, int b) { return (a > b) ? a : b; }


int dp() {
   int i, j;
   int best = M[0]; 
   
   for(i = 1; i <= n; i++) {
      for (j = i+i; j <= n; j += i) {
         if (A[j] > A[i]) {
            M[j] = max(M[j], M[i] + 1);
         }
      }
   } 
   
   for(i = 1; i <= n; i++) {
      best = max(best, M[i]);
   }
   
   return best;
}


int main ()
{
  int i, v, N;
  cin >> N;
 
  while (N > 0) {
   cin >> n;
   for (i = 1; i <= n; i++) {
      cin >> A[i];
      M[i] = 1;
   }
   
   cout << dp() << endl;

   N--;
  }

  return 0;
}