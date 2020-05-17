#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  int a, tmp;
  int count = 0;
  int gCount = 0;

  cin >> n;
  int size = n;
  
  while (n--) {
    cin >> a;
    if (n == size - 1) {
      tmp = a;
    }
    if (a >= tmp) {
      count++;
    } else {
      count = 1;
    }
    tmp = a;

    gCount = max(gCount, count);
  }
  LOG(gCount);
  return 0;
}