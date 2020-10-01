/*

https://www.codechef.com/LTIME87A/problems/ARRGAME

Tzuyu gave Nayeon a strip of N cells (numbered 1 through N) for her birthday. This strip is described by a sequence A1,A2,…,AN, where for each valid i, the i-th cell is blocked if Ai=1 or free if Ai=0

. Tzuyu and Nayeon are going to use it to play a game with the following rules:

    The players alternate turns; Nayeon plays first.
    Initially, both players are outside of the strip. However, note that afterwards during the game, their positions are always different.
    In each turn, the current player should choose a free cell and move there. Afterwards, this cell becomes blocked and the players cannot move to it again.
    If it is the current player's first turn, she may move to any free cell.
    Otherwise, she may only move to one of the left and right adjacent cells, i.e. from a cell c

, the current player may only move to the cell c−1 or c+1

    (if it is free).
    If a player is unable to move to a free cell during her turn, this player loses the game.

Nayeon and Tzuyu are very smart, so they both play optimally. Since it is Nayeon's birthday, she wants to know if she can beat Tzuyu. Find out who wins.
*/
#include <bits/stdc++.h>
         
using namespace std;
 
#define ll  long long
#define mod 1000000007
#define pb push_back
#define pie 3.141592653589
#define inf 1e9


     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   

    ll i,n,n2,m,t,j,l,r,pos,mpos,f=0,k,p,n1,z,q,x,y,x1,y1,x2,y2,x3,y3,x4,y4,w;
 
    cin>>t;
    
    while(t--)
    {
       cin>>n;
       ll a[n];
       for(i=0;i<n;i++)
        cin>>a[i];
      ll mx=0,c=0;
      unordered_map<ll,ll> mp;
      for(i=0;i<n;i++)
      {
         if(a[i]==0)
         {
            c=1;
            j=i;
            while(i+1<n&&a[i]==a[i+1])
            i++;
            c+=(i-j);
            mp[c]++;
            mx=max(mx,c);

         }
      }
      ll mx2=0;
      for(i=0;i<n;i++)
      {
         if(a[i]==0)
         {
            c=1;
            j=i;
            while(i+1<n&&a[i]==a[i+1])
            i++;
            c+=(i-j);
            
            if(c!=mx)
            mx2=max(mx2,c);

         }
      }
      if(mx%2&&mp[mx]==1&&mx2<(mx+1)/2)
        cout<<"Yes\n";
    else
        cout<<"No\n";


    }
   
  return 0;
}
