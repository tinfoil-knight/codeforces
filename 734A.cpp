#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int games;
  string input;
  int anton, danik;
  cin >> games >> input;
  anton = count_if(input.begin(), input.end(), [](char c) { return c == 'A'; });
  danik = games - anton;
  if (anton > danik) {
    LOG("Anton");
  } else if (anton < danik) {
    LOG("Danik");
  } else {
    LOG("Friendship");
  }
  return 0;
}