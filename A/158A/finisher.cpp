#include <iostream>
using namespace std;

int main ()
{
  int n, k, i, val, kVal, count;
  cin >> n >> k;
  count = 0;
  kVal = -1;
  
  for (i = 1; i <= n; i++) {
   cin >> val;
   if (val <= 0) { break; }
   if (i <= k) { count++; }
   if (i == k) { kVal = val; }
   if (i > k && val == kVal) { count++; }
   else if (i > k) { break; }
  } 
  
  cout << count << endl;
  return 0;
}