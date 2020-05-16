#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int t;
  cin >> t;

  int el;
  while (t--) {
    int n;
    cin >> n;
    set<int> a;
    while (n--) {
      cin >> el;
      a.insert(el);
    }
    LOG(a.size());
  }
  return 0;
}