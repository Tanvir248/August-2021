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
const int N = int(1e8 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln arr[N];
void solve(){   
  //freopen("input.txt", "r", stdin);
   ll i,j;
    arr[0]=arr[1]=1;
    for(i=2; i*i<=10000000; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=10000000; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    ll n,t;
    cin>>n;
    lln in;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        t=sqrt(in);
        if(t==sqrt(in)&&arr[t]==0)
        {
            yes
        }
        else
          no
    }

}
int main(){
     speed();

       solve();  
     
     return 0;
}