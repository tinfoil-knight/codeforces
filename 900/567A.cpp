#include <bits/stdc++.h>
#define LOG(x, y) cout << x << " " << y << "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
  int n;
  int x;
  cin >> n;
  vector<int> arr(n);

  REP(i, 0, n) {
    cin >> x;
    arr[i] = x;
  }

  int maX, miN;
  REP(i, 0, n) {
    int first = abs(arr[i] - arr[0]);
    int last = abs(arr[i] - arr[n - 1]);
    maX = max(first, last);

    int left = abs(arr[i] - arr[i - 1]);
    int right = abs(arr[i] - arr[i + 1]);
    miN = min(left, right);
    if (i == 0) {
      miN = right;
    }
    if (i == n - 1) {
      miN = left;
    }
    LOG(miN, maX);
  }

  return 0;
}