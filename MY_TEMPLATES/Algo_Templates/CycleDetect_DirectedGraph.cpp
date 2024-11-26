#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

vll v[mxN];
vll vis(mxN);
vll in(mxN);
bool cycle;
void cdfs(ll x)
{
    vis[x]=1;
    for(auto i:v[x])
    {
        if(vis[i]==1){ cycle=true; break; }
        if(vis[i]==0) cdfs(i);
        if(cycle) break;
    }
    vis[x]=2;
}
bool is_cycle(ll n)
{
    cycle=false;
    rep(i,1,n+1)
    {
        if(in[i]==0) cdfs(i); 
        if(cycle) break;
    }
    rep(i,1,n+1) 
        if(vis[i]==0) cycle=true;
    return cycle;
}