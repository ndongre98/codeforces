// Source: https://www.hackerrank.com/challenges/coin-change/problem
// Problem: The Coin Change Problem
// Solution Author: Namita Dongre
// Date: May 2020

// Explanation:
// The goal is to count the number of *unique* ways to use M distinct coins to sum 
// up to some target N. Note that for some N = 10, M = 4, C = [2,3,5,6], using 
// [2,3,5] and [3,2,5] is the same thing. 
// One way to think about this is by counting all paths that _build_ up from 2, then
// 3, then 5, ...and finally 6. 
// This leads us to the following DP recurrence:
// DP[n] = sum_j=C[i]^N DP[j - c[i]] for i \in [M]

#include <iostream>
#define ll long long
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main() {
   int N, M, i, j;
   int C[51];
   ll DP[251] = {};
   
   cin >> N >> M;
   
   for (i = 0; i < M; i++) { cin >> C[i]; }
   
   DP[0] = 1;
   for (i = 0; i < M; i++) {
      for (j = C[i]; j <= N; j++) {
         DP[j] += DP[j - C[i]];
      }
   }
   
   cout <<  DP[N] << endl;
   
   return 0;
}