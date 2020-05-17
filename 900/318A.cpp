#include <iostream>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  long long n;
  long long k;
  cin >> n >> k;
  long long mid = (n + 1) / 2;
  if (k > mid) {
    k -= mid;
    LOG(2 * k);
  } else {
    LOG(2 * k - 1);
  }
  return 0;
}