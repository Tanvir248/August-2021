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
const int INF = 0x3f3f3f3f;
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e4 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

struct node
{
    int x,r,res,id;
}f[N];
int n;
bool judge(int x,int y,int p)
{
    if(p<0||p>=n) return false;
    if(f[p].res!=-1) return false;
        if((f[p].x-x)*(f[p].x-x)+y*y<=f[p].r*f[p].r)
        return true;
    return false;
}
bool cmp1(node a,node b)
{
    return a.x<b.x;
}
bool cmp2(node a,node b)
{
    return a.id<b.id;
}
int Bin(int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)>>1;
        if(f[m].x>x) r=m-1;
        else l=m+1;
    }
    return l;
}
int main()
{
    // freopen("input.txt", "r", stdin);

    int m;
   cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f[i].x>>f[i].r;
        f[i].id=i;
        f[i].res=-1;
    }
    sort(f,f+n,cmp1);
cin>>m;
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        int x,y;
    cin>>x>>y;
        int t=Bin(x);
        for(int k=-1;k<=1;k++){
            int p=t+k;
            if(judge(x,y,p)) f[p].res=i,cnt++;
        }
    }
    sort(f,f+n,cmp2);
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
        cout<<f[i].res<<" ";
 ed
    return 0;
}