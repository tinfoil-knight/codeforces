#include <iostream>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n < -9) {
    int a, b;
    n = -n;

    a = n % 10;
    b = (n / 10) % 10;
    n = (n - a) / 10;
    if (a < b) {
        n = n - b + a;
    }
    n = -n;
  }
  LOG(n);
  return 0;
}