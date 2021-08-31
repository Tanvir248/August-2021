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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
set<lln>st;
lln n, k;
lln solve(){   
  // freopen("input.txt", "r", stdin);
   cin>>n>>k;
   ll arr[N];
   for (ll i = 1; i <= n; i++)
   {
     cin>>arr[i];
   }
   sort(arr+1, arr+n+1);
  for (ll i = 1; i <= n; i++)
  {
    lln x = arr[i];
    if(x%k!=0){
      st.insert(x);
    }else {
      if(st.count(x/k)==0){
        st.insert(x);
    }
    }
  }
  return st.sz;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}