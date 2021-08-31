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
void solve(){   
   //freopen("input.txt", "r", stdin);
   lln n;
   cin>>n;
   for (lln i = 2; i*i <=n; i++)
   {
	   lln temp;
	   	if(n%i==0){
			    temp = n/i;
			   for(lln j =2; j*j<=temp; j++){
				   	if(temp%j==0){
						   	cout<<1<<endl<<i*j<<endl;
							   return;
					   }
			   }
		   cout<<2<<endl;
		   return;
		   }
		  
   }
   cout<<1<<endl<<0<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}