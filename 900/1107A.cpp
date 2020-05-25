#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q;

  while (q--) {
    int n;
    string s;
    cin >> n >> s;

    if (n == 2 && s[0] >= s[1]) {
      LOG("NO");
    } else {
      LOG("YES");
      LOG(2);
      cout << s[0] << ' ' << s.substr(1) << '\n';
    }
  }
  return 0;
}