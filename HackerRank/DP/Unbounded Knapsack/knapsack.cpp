// Source: https://www.hackerrank.com/challenges/unbounded-knapsack/problem
// Problem: Unbounded Knapsack Problem
// Solution Author: Namita Dongre
// Date: May 2020

// Explanation: 
// When I read this problem the first thing I thought of was COIN CHANGE!! 
// Literally. I used the same code as I did with the coin change
// problem. Take a look at my explanation for that :> To map the Coin Change
// Problem to Unbounded Knapsack: coins are the items, the target is...the target.
// Only real difference here is that it may not be possible to reach the target.
// Thus, we keep searching backwards to find the value closest to the target that
// is achieved that is **less than** the target.


#include <iostream>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main() {
   fio
   int N, m, t, i, j, k;
   int buffer[11];
   
   cin >> N;
   
   
   for (k = 0; k < N; k++) {
      int C[2001];
      ll DP[2001] = {};
      cin >> m >> t;
      
      for (i = 0; i < m; i++) { cin >> C[i]; }
      
      DP[0] = 1;
      for (i = 0; i < m; i++) {
         for (j = C[i]; j <= t; j++) {
            DP[j] += DP[j - C[i]];
         }
      }
      
      int res = 0;
      for (i = t; i >= 0; i--) {
         if (DP[i]) { buffer[k] = i; break; }
      }
   }
   
   for (k = 0; k < N; k++) cout << buffer[k] << "\n";
   
   return 0;
}