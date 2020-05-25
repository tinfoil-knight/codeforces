#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int points(int p, int t) { return max(3 * p / 10, p - p * t / 250); }

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int misha = points(a, c);
  int vasya = points(b, d);

  if (misha > vasya) {
    LOG("Misha");
  } else if (misha < vasya) {
    LOG("Vasya");
  } else {
    LOG("Tie");
  }
  return 0;
}