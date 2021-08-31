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
#define mi map<string, int>
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
void solve(){   
   freopen("input.txt", "r", stdin);
mi prev_data;
  lln n;
  cin>>n;
  ls s;
  while(n--){
    cin>>s;
    if(prev_data.count(s)==0){
      cout<<"OK"<<endl;
      prev_data[s]=1;
    }else{
      cout<<s<<prev_data[s]<<endl;
      prev_data[s]+=1;
    }
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}