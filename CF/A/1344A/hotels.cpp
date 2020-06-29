#include <iostream>
#include <unordered_map> 

#define ll long long
using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);

int min(int i, int j) { return (i < j) ? i : j; }
int size(int i) { return (i*2 - 1); }

int main() {
   fio
   int epochs, n, i, j;
   ll k;
   
   cin >> epochs;
   for (i = 0; i < epochs; i++) {
      string res = "YES";
      cin >> n;
      int a[100001] = {};
      
      for (j = 0; j < n; j++) {
         cin >> k;
         int mod = (k + j) % n;
         mod = (mod < 0) ? mod + n : mod;
         if (a[mod]) { res = "NO"; }
         else { a[mod] = 1; }
      }
      
      cout << res << endl;
   }
   return 0;
}