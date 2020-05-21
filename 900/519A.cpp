#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  // Num of lines
  unordered_map<char, int> pieces = {{'K', 0}, {'Q', 9}, {'R', 5},
                                     {'B', 3}, {'N', 3}, {'P', 1}};
  int n = 8;
  int white = 0, black = 0;
  while (n--) {
    string str;
    getline(cin, str);
    str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
    for (int i = 0; i < str.size(); i++) {
      if (islower(str[i])) {
        black += pieces[toupper(str[i])];
      } else {
        white += pieces[str[i]];
      }
    }
  }

  if (white > black) {
    LOG("White");
  } else if (white < black) {
    LOG("Black");
  } else {
    LOG("Draw");
  }
  return 0;
}