#include <iostream>
#include <set> 
#include <vector> 
#include <iterator> 
#define ll long long
using namespace std;

// SLOW AF

ll gcd(ll a, ll b) {
    int c;      
    while (b) { c = a; a = b; b = c % b; }
    return a;
}

ll lcm(ll a, ll b) { return (a*b)/gcd(a, b); }

int main ()
{
  int i, j, N;
  cin >> N;
  
  ll A[200001];
  set <ll, greater <ll> > lcms;         

  for (i = 0; i < N; i++) cin >> A[i];
  
  for (i = 0; i < N; i++) {
   for (j = i+1; j < N; j++) {
      lcms.insert(lcm(A[i], A[j]));
   }  
  }
  
  int res;
  set <ll, greater <ll> > :: iterator itr; 
  for (itr = lcms.begin(); itr != lcms.end(); ++itr) {
   cout << *itr << endl;
   if (itr == lcms.begin()) res = *itr;
   else res = gcd(res, *itr);
  }

  cout << res << endl;
  return 0;
}
