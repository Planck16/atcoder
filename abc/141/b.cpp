#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const int inf = INT_MAX;
const int mod = 1000000007;

int main() {
  string s;
  cin >> s;
  bool ans = true;
  rep(i, s.size()) {
    if (i % 2 == 0 and s[i] == 'L') ans = false;
    else if (i % 2 == 1 and s[i] == 'R') ans = false;
  }
  puts(ans ? "Yes" : "No");
  return 0;
}