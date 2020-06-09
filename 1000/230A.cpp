#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s, n;
  cin >> s >> n;
  vector<pair<int, int> > dragons(n);
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (s > x) {
      s += y;
    } else {
      dragons.push_back(pair<int, int>(x, y));
    }
  }
  int len = dragons.size();
  if (len > 0) {
    sort(dragons.begin(), dragons.end());
    for (int i = 0; i < dragons.size(); i++) {
      if (s > dragons[i].first) {
        s += dragons[i].second;
      } else {
        s = 0;
        break;
      }
    }
  }
  s ? LOG("YES") : LOG("NO");
  return 0;
}