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
const int N = 101;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll arr[101];
void solve(){   
   //freopen("input.txt", "r", stdin);
   arr[1]=1;
   arr[3]=5;
   arr[4]= arr[2]=arr[5]=3;
    for(int i=5;i<N; )
	     {  
			  int x= (arr[i]+1)*2;
			  for(int j=i+1; j<=i+x ;j++){ 
			  arr[j]=arr[i]+2; 
			  }
			  i+=x; 
			      } 
}
int main(){
     speed();

       solve();  
     ll n;
     cin>>n;
     cout<<arr[n]<<endl;
     return 0;
}