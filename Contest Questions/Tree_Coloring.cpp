#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
    ll
    BE(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a * 1LL);
        }
        a = (1LL * a * a);
        b = b >> 1;
    }
    return res;
}
ll mod = 1e9 + 7;
vector<vector<int>> adj;
vector<int> vis;
vector<int> val;
void dfs(int node, int va)
{
    vis[node] = 1;
    int start = va;
    if (node == 1)
    {
        start = va - 1;
    }
     else
        start = va - 2;
    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            val[it] = start;
            
            dfs(it, va);
            start--;
        }
    }
    return;
}
void result()
{

    int n, k;
    cin >> n >> k;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);
    val.assign(n + 1, 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    val[1] = k;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, k);
        }
    }
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= val[i];
        ans %= mod;
    }
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("ouput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll t = 1;
    
    ll cnt = 1;
    while (t--)
    {

        result();
        cnt++;
    }
}
