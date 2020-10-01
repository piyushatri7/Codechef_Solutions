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

   #ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    ll i,n,n2,m,t,j,l,r,pos,mpos,f=0,k,p,n1,z,q,x,y,x1,y1,x2,y2,x3,y3,x4,y4,w;
 
    t=1;
    cin>>t;

    while(t--)
    {
      cin>>n;
      bool arr[n+1]={0};
      for(i=0;i<n-1;i++)
      {
        cin>>x>>y;
        arr[y]=true;
      }
      int count=0;
      for(i=1;i<=n;i++)
      {
          if(arr[i]==false)
            count++;
      }
      cout<<count-1<<endl;
        
    }
    return 0;
}