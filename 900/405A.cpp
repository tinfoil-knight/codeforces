#include <bits/stdc++.h>
// -std=c++11

using namespace std;

int main() {
  int n, m;
  vector<int> arr;

  cin >> n;

  while (n--) {
    cin >> m;
    arr.push_back(m);
  }

  sort(arr.begin(), arr.end());
  for (int i : arr) {
    cout << i << " ";
  }
  cout << "\n";

  return 0;
}