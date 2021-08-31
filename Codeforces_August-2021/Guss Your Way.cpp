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
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

lln solve(lln a,lln b)
{
    lln ans=1ll;
    while(b)
    {
        if(b&1ll) ans=(ans*a);

        a=(a*a);
        b=b>>1ll;
    }
    return (ans);
}

int main()

{
  speed();
   // freopen("input.txt", "r", stdin);

    lln h,n;
    cin>>h>>n;
    int binary[51];
    n--;
    for(int i=0;i<h;i++)
    {
        binary[h-i-1]=n%2;
        n=n>>1ll;
    }
    lln visited=0ll;
    if(binary[0]==1) visited+=solve(2ll,h);
    else visited+=1ll;
    for(int j=1;j<h;j++)
    {
        //pattern doesn't match
        if(binary[j]==binary[j-1])
        {
            visited+=solve(2ll,h-j);
        }
        else visited=visited+1ll;

    }
    cout<<visited<<endl;
}