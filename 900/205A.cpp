#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  auto itr = min_element(arr.begin(), arr.end());
  int ct = count(arr.begin(), arr.end(), *itr);
  if (ct - 1) {
    LOG("Still Rozdil");
  } else {
    LOG(itr - arr.begin() + 1);
  }

  return 0;
}
