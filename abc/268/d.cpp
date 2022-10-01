#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;


int main() {
  ll n, m;
  cin >> n >> m;

  vector<string> s(n);
  rep(i, n) cin >> s[i];
  sort(s.begin(), s.end());

  set<string> st;
  rep(i, m) {
    string t;
    cin >> t;
    st.emplace(t);
  }

  do {
  } while (next_permutation(s.begin(), s.end()));
  return 0;
}