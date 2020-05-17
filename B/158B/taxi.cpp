#include <iostream>
using namespace std;

int main ()
{
  int i, n, v, res;
  int counts[5] = {0, 0, 0, 0, 0};

  cin >> n;

  for (i=0; i<n; i++) {
   cin >> v;  
   counts[v] += 1;
  }
  
  int lone2 = counts[2] % 2;
  int cnt2 = counts[2] / 2 + lone2;
  int rem1 = (counts[1] < counts[3]) ? 0 : counts[1] - counts[3];
  if (lone2 && rem1 >= 2) { rem1 -= 2; }
  else if (lone2 && rem1 == 1) { rem1 = 0; }
  int cnt1 = rem1 / 4 + ((rem1 % 4) ? 1 : 0);
  res = cnt1 + cnt2 + counts[3] + counts[4];

  cout << res << endl;
  
  return 0;
}