#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


int main() {
  string s;
  cin >> s;

  ll ans = 0;
  ll now = 1;

  for (char c : s) {
    if (c == '+') {
      if (now != 0) ++ans;
      now = 1;
    }
    else if(isdigit(c)) {
      now *= (ll)(c - '0');
    }
  }
  if (now != 0) ++ans;

  cout << ans << '\n';
  return 0;
}