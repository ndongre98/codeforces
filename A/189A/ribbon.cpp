#include <iostream>
using namespace std;

int N, a, b, c;
int DP[4001];

int max(int a, int b) { return (a > b) ? a : b; }

int dp(int n) {
   if (n == 0) {
      return 0;
   }
   if (n < 0) {
      return -1;
   }
   if (DP[n] != -1) {
      return DP[n];
   }
   else {
      cout << n << endl;
      int resA = dp(n-a);
      int resB = dp(n-b);
      int resC = dp(n-c);
      
      DP[n] = max(resA, max(resA, resC));
      if (DP[n] != -1) { DP[n] += 1; }
      
      return DP[n];
   }
}

int bu() {
   int i; 
   for (i = 1; i <= N; i++) {
      int resA = ((i - a) < 0) ? -1 : DP[i-a];
      int resB = ((i - b) < 0) ? -1 : DP[i-b];
      int resC = ((i - c) < 0) ? -1 : DP[i-c];
      
      int res = max(resA, max(resB, resC));
      DP[i] = (res == -1) ? -1 : res + 1;
   }
   
   return DP[N];
}

int main() {
   int i; 
   cin >> N >> a >> b >> c;
   
   // Make DP[i] == -1 for top-down approach
   for (i = 0; i <= N; i++) DP[i] = 0;
   
   cout << bu();
   return 0;
}