#include <iostream>

#define ll long long
using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);



ll A[100002];

int min(int i, int j) { return (i < j) ? i : j; }
int size(int i) { return (i*2 - 1); }
int update(int i, int j, int k) {
   int x;
   for (x = i; x <= j; x++) A[x] = k;
   return 0;
}


int main() {
   fio
   int t, n, i, j;
   ll k;
   
   cin >> t;
   
   for (j = 0; j < t; j++) {
      string res = "no";
      int first = 1;
      cin >> n >> k;
       
      for (i = 1; i <= n; i++) {
        cin >> A[i];  
      }
            
      i = 1;
      while (i <= n) {
         int dist = min(i-1, n - i);
         if (A[i] == k && first) {
            first = 0;
            update(i - dist, i + dist, k);
            i += dist;
            if (i >= n && (n == 1 || A[i - dist - 1] == k)) { res = "yes"; break; }
            if (!dist) { i++; }
         } else if (A[i] == k && A[i - dist] == k) {
            update(i+1, i + dist, k);
            i += dist;
            if (i >= n && (n == 1 || A[i - dist - 1] == k)) { res = "yes"; break; }
            if (!dist) { i++; }
         } else { i++; }
      }
      
      cout << res << endl; 
   }
   return 0;
}