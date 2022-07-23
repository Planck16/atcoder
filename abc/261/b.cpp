#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdint>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define rng(a) (a).begin(),(a).end()
#define rrng(a) (a).rbegin(),(a).rend()
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  vector<string> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) rep(j, n) {
    if (i == j) continue;

    bool ng = false;

    if (a[i][j] == 'W' and a[j][i] != 'L') ng = true;
    if (a[i][j] == 'L' and a[j][i] != 'W') ng = true;
    if (a[i][j] == 'D' and a[j][i] != 'D') ng = true;
    
    if (ng) {
      cout << "incorrect" << "\n";
      return 0;
    }
  }

  cout << "correct" << "\n";
  return 0;
}