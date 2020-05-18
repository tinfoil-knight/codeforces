#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
#define MONTHS 12
using namespace std;

int main() {
  int k;
  cin >> k;
  int a;
  vector<int> arr;
  arr.reserve(MONTHS);
  for (int i = 0; i < MONTHS; i++) {
    cin >> a;
    arr.push_back(a);
  }
  if (k == 0) {
    LOG(0);
    return 0;
  }
  sort(arr.rbegin(), arr.rend());
  int count = 0;
  for (int i = 0; i < MONTHS; i++) {
    count += arr[i];
    if (count >= k) {
      LOG(i + 1);
      return 0;
    }
  }
  LOG(-1);
  return 0;
}