/*
Problem Link: https://www.codechef.com/LTIME88B/problems/ROOTTREE
Editorial: https://discuss.codechef.com/problems/ROOTTREE

A directed tree is a directed graph such that if all edges were undirected, this graph would be a tree. A rooted directed tree is a directed tree in which there is one vertex (the root, let's denote it by r) such that it is possible to reach all vertices of the graph from r

by moving along the directed edges.

You are given a directed tree with N
vertices (numbered 1 through N). 
You may perform the following operation on it any number of times (including zero):

    1. Choose some edge which currently exists in the graph.
    2. Remove this edge.
    3. Add a new edge in such a way that the graph becomes a directed tree again.

What is the smallest number of operations which need to be performed in order to make the directed tree rooted?
*/

#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define pb push_back
#define FR first
#define SC second
#define MOD 1000000007
#define LLMN LLONG_MIN
#define LLMX LLONG_MAX
#define LDMX LDBL_MAX
#define LDMN LDBL_MIN
#define MAX 1000010
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

void solve()
{
	ll n, m, k;
	cin>>n;
	//vll adj(n);
	vb res(n, false);
	for(ll i = 0; i < n - 1; i++)
	{
	    ll u, v;
	    cin>>u>>v;
	    u--;v--;
	    res[v] = true;
	}
	ll count = 0;
	for(ll i = 0; i < n; i++)
	{
	    if(!res[i])
	        count++;
	}
	cout<<count - 1<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
