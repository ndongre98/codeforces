#include <iostream>
#include <numeric>

#define ll long long
using namespace std;

ll max(ll m, ll n) { return (m > n) ? m : n; }
ll derp(ll m, ll n) { return (m == 0 || n == 0) ? max(m, n) : gcd(m, n); }

int main() {
   int n, i;
   cin >> n;
   
   ll A[100001];
   ll G[100001];
    
   for (i = 0; i < n; i++) {
     cin >> A[i];  
   }
   
   G[n-1] = A[n-1];
   for (i = n-2; i >= 0; i--) {
      G[i] = derp(A[i], G[i+1]);
   }
   
   ll res = (A[0] * G[1])/G[0];
   
   for (i = 1; i < n-1; i++) {
      res = derp(res, (A[i] * G[i+1])/G[i]);
   }
 
   cout << res << endl;
   return 0;
}