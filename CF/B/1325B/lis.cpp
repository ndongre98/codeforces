#include <iostream>
#include <unordered_set>
 
#define ll long long
using namespace std;
#define fio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL);
  
  
int main() {
  fio
  int epochs, n;   
  cin >> epochs;
  
  
  for (int i = 0; i < epochs; i++) {    
    cin >> n;
    unordered_set<int> set;
    for(int j = 0; j < n; j++){
      int val;
      cin >> val;
      set.insert(val);
    }
    cout << set.size() << endl;
  }
  return 0;
}