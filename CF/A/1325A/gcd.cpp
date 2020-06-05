#include <iostream>
 
#define ll long long
using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);
 
int main() {
  fio
  int epochs, x, i;   
  cin >> epochs;
  for (i = 0; i < epochs; i++) {
    cin >> x;
    cout << 1 << " " << (x-1) << "\n";
  }
  return 0;
}