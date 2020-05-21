#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)
// Seen
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> a(n);
  int result = 0;
  int len = 0;

  REP(i, 0, n) { cin >> a[i]; }
  REP(i, 0, 2 * n) {
    if (a[i % n] == 1) {
      len++;
      result = max(result, len);
    } else {
      len = 0;
    }
  }

  LOG(result);

  return 0;
}
