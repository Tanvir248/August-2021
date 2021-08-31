#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
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
const int N = int(1e5 + 3);
const int limit = 20000000;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
char ch[limit];
ull st[limit];
void solve(){   
   //freopen("input.txt", "r", stdin);
	ll root = sqrt(limit);
	lln n=0;
			ch[0]=ch[1]=0;
	for (ll i = 2; i < root; i++)
	{
		 memset(ch,1,sizeof(ch));
		if(ch[i]==1){
			for (ll j = i+i; i <= limit; i++)
			{
				ch[j]=0;
			}
			
		}
       
	}
	ll t =1; 
	for(ll i=3;i<limit;i++) {
           if(ch[i]==1 && ch[i+2]==1){
                   st[t++]=i;
                          }
						  }
			while(cin>>n){
					cout<<"("<<st[n]<<", "<<st[n]+2<<")"<<endl;
			}
}
int main(){
     speed();

       solve();  
     
     return 0;
}