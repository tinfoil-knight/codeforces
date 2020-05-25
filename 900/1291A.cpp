#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
// Seen
using namespace std;

// If num of odd no is <=1 then ebne not possible
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int odd = 0;
    for (char c : s)
      if ((c - '0') & 1) odd++;
    if (odd <= 1) {
      cout << "-1\n";
      continue;
    }
    int cnt = 0;
    for (char c : s) {
      if ((c - '0') & 1) {
        cout << c;
        cnt++;
      }
      if (cnt == 2) break;
    }
    cout << '\n';
  }
  return 0;
}