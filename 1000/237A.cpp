#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> times(n);
  REP(i, 0, n) {
    int h, m;
    cin >> h >> m;
    times[i] = (h * 60) + m;
  }
  int lCount = 1;
  int gCount = 1;
  REP(i, 1, n) {
    if (times[i] == times[i - 1]) {
      lCount++;
      gCount = max(gCount, lCount);
    } else {
      lCount = 1;
    }
  }

  LOG(gCount);
  return 0;
}