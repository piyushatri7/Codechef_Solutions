/*
Problem Link: https://www.codechef.com/LTIME88B/problems/WATMELON
Editorial: https://discuss.codechef.com/problems/WATMELON

Let's call a sequence good if the sum of all its elements is 0.

You have a sequence of integers A1,A2,…,AN.
You may perform any number of operations on this sequence (including zero).
In one operation, you should choose a valid index i and decrease Ai by i.
Can you make the sequence good using these operations?

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
	ll n, m, k, sum = 0;
	cin>>n;
	for(ll i = 0; i < n; i++)
	{
	    cin>>m;
	    sum += m;
	}
	if(sum < 0)
	    cout<<"NO\n";
	else
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
