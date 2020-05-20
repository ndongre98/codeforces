#include <iostream>
using namespace std;

int N;
long long DP[1000000001];

int min(int a, int b) { 
   if (a == -1 && b == -1) return -1;
   if (a == -1) return b;
   if (b == -1) return a;
   return (a < b) ? a : b; 
}

int dp() {
   int i; 
   for (i = 1; i <= N; i++) {
      int resA = ((i - 1) < 0) ? -1 : DP[i-1];
      int resB = ((i - 5) < 0) ? -1 : DP[i-5];
      int resC = ((i - 10) < 0) ? -1 : DP[i-10];
      int resD = ((i - 20) < 0) ? -1 : DP[i-20];
      int resE = ((i - 100) < 0) ? -1 : DP[i-100];
      
      int res = min(resE, min(resD, min(resA, min(resB, resC))));
      DP[i] = (res == -1) ? -1 : res + 1;
   }
   
   return DP[N];
}

int faster() {
   int val = N;
   int rem = 0;
   int sum = 0;

   if (val >= 100) {
      rem = val%100;
      sum += val/100;
      val = rem;
   }
   if (val >= 20) {
      rem = val%20;
      sum += val/20;
      val = rem;
   } 
   if (val >= 10) {
      rem = val%10;
      sum += val/10;
      val = rem;
   }
   if (val >= 5) {
      rem = val%5;
      sum += val/5;
      val = rem;
   }
   if (val >= 1) {
      rem = val;
   } 
   return sum + rem;
}

int main() {
   int i; 
   cin >> N;   
   cout << faster();
   return 0;
}