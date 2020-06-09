#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int arr[5] = {a + b + c, a * b * c, (a + b) * c, a * (b + c)};
  LOG(*max_element(arr, arr + 5));
  return 0;
}