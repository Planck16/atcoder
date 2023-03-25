#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


string f(ll k) {
  // k = 3^x * l
  ll x = 0;
  while (k > 0 and k%3 == 0) {
    ++x;
    k /= 3;
  }
  cout << k << endl;
  if (k >= 10) return "-1";

  auto Pow = [](ll x, ll n) { ll res = 1; while (n > 0) { if (n & 1) res *= x; x *= x; n >>= 1; } return res; };
  string ans = string(Pow(3, x), k+'0') + '0';

  // set<ll> st = {12, 15, 18, 21, 24, 27, 36, 63};
  // if (not st.count(k)) return -1;
  // if (k == 12) return 48;
  // if (k == 15) return 5055;
  // if (k == 18) return 288;
  // if (k == 21) return 7077;
  // if (k == 24) return 8088;
  // if (k == 27) return 3699;
  // if (k == 36) return 48888;
  // if (k == 63) return 111888;
  // return -1;
  return ans;
}


int main() {
  for (ll k = 3; k <= 100; k += 3) {
    cout << k << '\n';
    cout << f(k) << '\n';
  }
  return 0;
}