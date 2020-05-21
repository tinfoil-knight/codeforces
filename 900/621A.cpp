#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  vector<int> arr;
  arr.reserve(n);
  while (n--) {
    cin >> x;
    arr.push_back(x);
  }

  ll sum = 0;
  REP(i, 0, arr.size()) { sum += arr[i]; }

  if (sum % 2 != 0) {
    sort(arr.begin(), arr.end());
    REP(i, 0, arr.size()) {
      if (arr[i] % 2 != 0) {
        sum -= arr[i];
        break;
      }
    }
  }

  LOG(sum);

  return 0;
}