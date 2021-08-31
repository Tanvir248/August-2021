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
#define ps pair<ls, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool sortbysec(const pair<ls,int> &a,const pair<ls,int> &b)
{
    return (a.second < b.second);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll n;
   cin>>n;
   vector<pair<ls,int>>add;
   for (ll i = 0; i < n; i++)
   {
       ls s;
       ll num;
       cin>>s>>num;
       add.pb(make_pair(s, num));
   }
   vi v1, v2;
   for (auto &x: add)
    {
        v1.pb(x.second);
        }
   sort(add.begin(), add.end(),sortbysec);
    
    for (auto &x: add)
    {
        v2.pb(x.second);
        }
    ll cnt =0;
    for (ll i = 0; i < v1.sz; i++)
    {
        if(v1[i]==v2[i]){
            cnt++;
        }
    }
    if(cnt==n && n!=1){
        cout<<"-1"<<endl;
    }else{
        vi res(n);
        for (int i = 0; i < n; ++i) {
            res.insert(res.begin() + i - add[i].second, i);
        }
        for (int i = 0; i < n; ++i) {
            add[res[i]].second = i + 1;
        }
        for (int i = 0; i < n; ++i) {
            cout << add[i].first << " " << add[i].second <<endl;
        }
    }
}
int main(){
     speed();

       solve();  
     
     return 0;
}