/*
Problem Link: https://www.codechef.com/LTIME88B/problems/GCDOPS
Editorial: https://discuss.codechef.com/problems/GCDOPS

Consider a sequence A1,A2,…,AN, where initially, Ai = i for each valid i.
You may perform any number of operations on this sequence (including zero).
In one operation, you should choose two valid indices i and j,
compute the greatest common divisor of Ai and Aj (let's denote it by g), and change both Ai and Aj to g.

You are given a sequence B1,B2,…,BN.
Is it possible to obtain this sequence, i.e. change A to B, using the given operations?

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
	vl a(n);
	for(int i = 0; i < n; i++)
	{
	    cin>>a[i];
	}
	for(ll i = 0; i < n; i++)
	{
	    if((i + 1) % a[i] != 0)
	    {
	        cout<<"NO\n";
	        return;
	    }
	}
	cout<<"YES\n";
	
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
