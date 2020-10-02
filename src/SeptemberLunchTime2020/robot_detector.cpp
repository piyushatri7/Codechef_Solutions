/*
Problem Link: https://www.codechef.com/LTIME88B/problems/UKROBOT
Editorial: https://discuss.codechef.com/problems/UKROBOT

There is a robot in the cell (0,0) of an infinite grid. One cell (X,Y) contains an obstacle and all other cells are free.
We only know that 1≤X≤R and 1≤Y≤C, but not the exact location of the obstacle.

You may give the robot a sequence of instructions. There are four types of instructions:

L: move one cell to the left, i.e. from a cell (x,y) to (x−1,y)
R: move one cell to the right, i.e. from a cell (x,y) to (x+1,y)
D: move one cell down, i.e. from a cell (x,y) to (x,y−1)
U: move one cell up, i.e. from a cell (x,y) to (x,y+1)

The robot attempts to perform these instructions one by one. When performing an instruction, if the cell it needs to move to is free, then it moves to that cell;
otherwise, it stays in its current cell.

Consider the following process: you choose a fixed sequence of instructions for the robot, which performs these instructions;
then you are given the final cell of the robot and based on only that information, you determine the position of the obstacle.
Find a sufficiently short sequence of instructions such that if this process was performed, you would always be able to correctly determine the position of the obstacle.
It can be proved that for the given constraints, such a sequence always exists.

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
	ll n, m, k, r, c;
	cin>>r>>c;
	for(ll i = 0; i < 20; i++)
	{
	    cout<<"U";
	    for(ll j = 0; j < 20 * (i + 1); j++)
	        cout<<"R";
	    for(ll j = 0; j < 20 * (i + 1); j++)
	        cout<<"L";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
