#include <iostream>

#define ll long long
using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);



ll A[100002];

int min(int i, int j) { return (i < j) ? i : j; }
int size(int i) { return (i*2 - 1); }

int solve(int n, ll k){
   if (n == 1) return (A[0] == k);
   if (n == 2) return ((A[0] == k || A[1] == k) && (k <= A[0] && k <= A[1]));

   bool k_exists = (A[n-2] == k || A[n-1] == k);
   bool pair_exists = false;
   int pair_cnt = 0;
   for(int i = 0; i < n - 2; i++){
      if(A[i] == k) 
         k_exists = true;
      if (k <= A[i]) pair_cnt ++;
      if (k <= A[i+1]) pair_cnt ++;
      if (k <= A[i+2]) pair_cnt ++;
      if (pair_cnt >= 2) pair_exists = true;
      pair_cnt = 0;
   }

   return k_exists && (n == 1 || pair_exists) ? 1 : 0;
}


int main() {
   fio
   int epochs, n, i, j;
   ll k;
   
   cin >> epochs;
   for (i = 0; i < epochs; i++) {
      cin >> n >> k;
      for (j = 0; j < n; j++) {
         cin >> A[j];
      }
      string res = (solve(n,k)) ? "yes" : "no";
      cout << res << endl;
   }
   return 0;
}