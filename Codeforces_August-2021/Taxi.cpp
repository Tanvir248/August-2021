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
   freopen("input.txt", "r", stdin);
   ll n, num;
   cin>>n;
   vi arr;
   ll cnt4 =0, cnt3 =0;
   for (ll i = 0; i < n; i++)
   {
	   cin>>num;
	   if(num==4){
		   	cnt4++;
	   }else{
		   arr.pb(num);
	   }
   }
   vi add2, add3, add1;
		for (ll i = 0; i <arr.sz; i++)
		{
				if(arr[i]==3){
						add3.pb(arr[i]);
				}
		}
		//cout<<add3.sz<<endl;
		if(add3.sz !=0)
		for (ll i = 0; i < arr.sz; i++)
		{
			if(arr[i]==1){
					add1.pb(arr[i]);
			}
			if(add1.sz==add3.sz){
					break;
			}
		}
		
		for (ll i = 0; i < arr.sz; i++)
		{
			if(arr[i]==2){
					add2.pb(arr[i]);
			}
		}
		ll x =add1.sz+add2.sz+add3.sz;
		ll y = arr.sz;
		ll tempans = y - x;
		ll fx = add2.sz;
		ld ans2 = (ld)fx*2+(ld)tempans;
		ld ans = ans2/4;
		ll ann = ans2/4;
		if(ans>ann){
			ann+=1;
		}
		cout<<cnt4+add3.sz+ann<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}