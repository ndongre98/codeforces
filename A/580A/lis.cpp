#include <iostream>
using namespace std;

int N;

int main() {
   int N;
   long long A[100000];
   
   cin >> N;
   for (int i = 0; i < N; i++) {
      cin >> A[i];
   }
   
   int p = 1;
   int s = 0; 
   int best = 1;  
   
   while (s+p < N) {
      if (A[s+p-1] <= A[s+p]) {
         p++;
      } else {
         best = (p > best) ? p : best;
         s = s + p;
         p = 1;
      }
   }
   
   best = (p > best) ? p : best;
   
   cout << best;
   return 0;
}