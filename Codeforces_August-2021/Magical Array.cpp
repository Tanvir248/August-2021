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
#define END return 0;
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
lln n, ans;

lln solve(){   
   //freopen("input.txt", "r", stdin);
  ans = n;
  lln arr[n];
  for (ll i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  for (lln i = 0; i < n-1; i++)
  {
    if(arr[i]==arr[i+1]){ 
      lln temp =1;
      for (lln j = i+1; j < n; j++)
      {
        if(j==n-1 && arr[i]==arr[j]){
            temp++;
            i =j-1;
             ans += (temp*(temp-1))/2;
        }
        else if(arr[i]==arr[j]){
          temp++;
        }else{
          i= j-1;
           ans += (temp*(temp-1))/2;
           break;
        }
      }
      
    }
  }
  return ans;
}
int main(){
     speed();
  cin>>n;
    cout<<solve();  
     ed
   END
}