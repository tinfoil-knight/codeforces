#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, h;
  int ht;
  int count = 0;
  cin >> n >> h;
  while (n > 0) {
    cin >> ht;
    if (ht > h) {
      count += 2;
    } else {
      count++;
    }
    n--;
  }
  LOG(count);
  return 0;
}