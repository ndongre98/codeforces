#include <iostream>
using namespace std;

int main ()
{
  long long n, m, a;
  cin >> n >> m >> a;

  long long w = (n % a) ? (n / a) + 1 : (n / a);
  long long h = (m % a) ? (m / a) + 1 : (m / a);
  cout << (w * h) << endl;
  return 0;
}