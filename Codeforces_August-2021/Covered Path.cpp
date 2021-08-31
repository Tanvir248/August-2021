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
const int N = int(105);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln arr1[N], arr2[N];
lln solve(lln ans){   
   //freopen("input.txt", "r", stdin);
  lln v1, v2, t, d;
  cin>>v1>>v2>>t>>d;
   arr1[1]= v1;
  for (ll i = 2; i <= t; i++)
  {
    arr1[i]=arr1[i-1]+d;
  }
  arr2[t]=v2;
  for (ll i = t-1;  i>=1; i--)
  {
    arr2[i]=arr2[i+1]+d;
  }

  for (ll i = 1; i <= t; i++)
  {
    ans+= min(arr1[i],arr2[i]);
  }
  
  return ans;
}
int main(){
     speed();

      cout<<solve(0);  
      ed
     
     return 0;
}