#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  int n;
  cin >> n;
  int a, p;
  int money = 0;
  // Specified Limit
  int price = 101;
  while (n--) {
    cin >> a >> p;
    price = min(price, p);
    money += price * a;
  }
  
  LOG(money);
  return 0;
}