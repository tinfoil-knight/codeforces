#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int onSale, canCarry;
  int price;
  int result = 0;
  cin >> onSale >> canCarry;
  vector<int> prices;
  prices.reserve(onSale);
  while (onSale--) {
    cin >> price;
    prices.push_back(price);
  }
  sort(prices.begin(), prices.end());
  for (int i = 0; i < canCarry; i++) {
    if (prices[i] < 0) {
      result += prices[i];
    }
  }
  LOG(-result);
  return 0;
}