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

lln solve(lln ans){   
   //freopen("input.txt", "r", stdin);
   
   lln n, i, j;
   cin>>n;
  lln arr[n];
  bool flag[n];
   memset(flag,1,sizeof(flag));
  for (i = 0; i < n; i++)
  {
    cin>>arr[i];
     }
  sort(arr, arr+n);
  lln add[n];
  for (i = 0; i < n; i++)
  {
    add[i]=arr[i];
     }
  
  for (i = 0; i < n-1; i++)
  {
      for(j =i+1; j<n; j++){
          if(arr[i]<add[j]){
            flag[i]=0;
        add[j]=arr[i];
      break;
          }
      }
  }
   for (i = 0; i < n; i++)
  {
    if(flag[i]){
    ans++;
    }
  }
  
  return ans;
}
int main(){
     speed();

       cout<<solve(0);  
     ed
     return 0;
}