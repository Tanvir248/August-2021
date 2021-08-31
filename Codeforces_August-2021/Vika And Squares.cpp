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
lln cnt, n, temp , len, arr[N];
void solve(){   
   //freopen("input.txt", "r", stdin);
  cin>>n;
 
  for (ll i = 1; i <= n; i++)
  {
    cin>>arr[i];
  }
  lln mn = INF;
  for (ll i = 1; i <= n; i++)
  {
    mn= min(mn,arr[i]);
  }
  for (ll i = 1; i <= n; i++)
  {
    if(arr[i]==mn){
      cnt++;
    }
  }
  if(cnt==n){
      cout<<n*arr[1]<<endl;
      return;
  }else if(cnt==1){
    cout<<n*mn+n-1<<endl;
    return;
  }else{
    cnt=0;
   for (ll i = 1; i <= n; i++)
  {
    if(arr[i]==mn){
        if(temp>len)
            len = temp;
            temp =0;
        
    }else{
      temp++;
    }
    for (ll i = 1; i <= n; i++){
     if(arr[i]==mn){
       break;
     }else 
     cnt++;
  }
  }
  		len = max(cnt + temp, len);

        cout<<n*mn+len<<endl;
  
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}