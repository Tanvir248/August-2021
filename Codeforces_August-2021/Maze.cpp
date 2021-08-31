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
const int MOD = 1000000007;
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool vis[501][501];
ll freecells=0;
ll vs=0;
ll k;
char grid[501][501];
ll dx[] = {-1, 0, 0, 1};
ll dy[] = { 0,-1, 1, 0};

void dfs(int x,int y,int n,int m)
{
    if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]!='#'&& !vis[x][y])
    {
        vis[x][y]=true;
        if(k>0) k--;
        else grid[x][y]='X';
       for(int l=0;l<4;l++)
       {
           dfs(x+dx[l],y+dy[l],n,m);
       }
    }
}

int main()

{
    ll n,m;
    cin>>n>>m>>k;
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='.') freecells++;
        }
    }
    k=freecells-k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j]&&grid[i][j]=='.')
            {
                dfs(i,j,n,m);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}
