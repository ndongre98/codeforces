#include <iostream>
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);

int main() {
   fio
   int epochs, n, k;
   string s;
   
   cin >> epochs;
   for (int t = 0; t < epochs; t++){
      cin >> n >> k;
      cin >> s;
   
      int a[200002]; 
      int sum = 0;  
      a[n-1] = 0;
      for(int i = n-2; i >= 0; i--) {
         int toAdd = (s[i+1] == '1' ? 1 : 0);
         sum += toAdd;   
         if (i < n - 1 - k) { 
            sum -= (s[i+k+1] == '1' ? 1 : 0);
         }
         a[i] = sum;
      }          
        
      int total = 0;
      int j = 0;
      while (j < n) { 
         if (s[j] == '0' && a[j]) {
            j += 1;
         }  
         else {
            if (s[j] == '0' && a[j] == 0) { total += 1; }
            j += (k+1);
         }
      }
      cout << total << endl; 
   }
   return 0;
}

