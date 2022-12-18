#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;


int main() {
  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> edge(n);
  dsu uf(n);
  rep(i, m) {
    ll u, v;
    cin >> u >> v;
    --u; --v;
    edge[u].emplace_back(v);
    edge[v].emplace_back(u);
    uf.merge(u, v);
  }

  ll w = 0; ll b = 0; ll e = 0;
  vector<ll> colors(n);

  auto dfs = [&](auto dfs, ll v, ll c) -> bool {
    colors[v] = c;
    for (auto to : edge[v]) {
      if (colors[to] == c) return false;
      if (colors[to] == 0 and not dfs(dfs, to, -c)) return false;
    }
    return true;
  };

  set<ll> seen;
  ll ans = 0;

  rep(i, n) {
    if (seen.count(uf.leader(i))) continue;

    seen.emplace(uf.leader(i));
    bool is_partial = dfs(dfs, uf.leader(i), 0);
    if (is_partial) ans += w*b - e;
    w = 0; b = 0; e = 0;
  }

  // ufで連結させる
  // グラフのleaderから、グラフを見ていく
  // そのグラフが二部グラフなら、white, blackの個数を求めて答えに加算
  // そうでないなら無視
  return 0;
}