#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 10);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
 vi v[N];
ll visit[N];
bool flag[N];
ll n, m, cnt=0;
void dfs(ll i,ll con,ll maxcon)
{
    visit[i]=1;
         if(v[i].size()==1&&i!=1){
        if(maxcon<=m)
        {
            cnt++;
        }
    }
    for(int j=0;j<v[i].size();++j)
    {
        if(!visit[v[i][j]])
        {
            if(flag[v[i][j]]==1)
            {
                dfs(v[i][j],con+1,max(maxcon,con+1));
                }
                else
            {
               dfs(v[i][j],0,maxcon);
            }
 
        }
    }
}
int main(void)
{
    speed();
    //  freopen("input.txt", "r", stdin);

    cin>>n>>m;
    int temp;
    for(int i=1;i<=n;++i)
    {
        cin>>temp;
        if(temp==1)
        {
            flag[i]=true;
        }
        else
        {
            flag[i]=false;
        }
    }
    ll a,b;
    for(int i=1;i<=n-1;++i)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,flag[1],flag[1]);
    cout <<cnt <<endl;
    return 0;
    }
