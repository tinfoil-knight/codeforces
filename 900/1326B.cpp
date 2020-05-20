#include <bits/stdc++.h>
// Seen
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int x = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] += x;
    x = max(x, a[i]);
    cout << a[i] << ' ';
  }
  cout << endl;
  return 0;
}