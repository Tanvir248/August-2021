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
const int N = int(1e5 + 10);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
} ll limit ,sum;
struct node{
	ll a, b;	
} bit[N];
bool comp(node a, node x){
		return a.a>x.a;
}
int lowbit(ll x){
	return x&(-x);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
 ll bx[N];
  ll total =0, cnt=0;
	for (ll i = 1; i <= limit; i++)
	{
		bit[i].a = lowbit(i);
		bit[i].b= i;
 	}
	 sort(bit+1, bit+limit+1, comp);
	 for (ll i = 1; i <= limit; i++)
	 {
		 if(total+bit[i].a<=sum){
			 	total +=  bit[i].a;
				 bx[cnt++] = bit[i].b;
		 }
		 if(total ==sum){
			 	break;
		 }
			if(i == limit && total != sum) {
			cout << -1 << endl; 
			return;
		}
	 }
	 cout<<cnt<<endl;
	 for (ll i = 0; i < cnt; i++)
	 {
		 cout<<bx[i]<<" ";
	 }
	 ed
	
}
int main(){
     speed();
cin>>sum>>limit;
       solve();  
     
     return 0;
}