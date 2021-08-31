#include<bits/stdc++.h>
using namespace std;
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
#define MN 300000
#define MX 15000000
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
int a[MN+5],u[MX+5],p[MX+5],pn,s[MX+5];

int gcd(int x,int y){
	return y?gcd(y,x%y):x;
	}
ll solve(){   
   //freopen("input.txt", "r", stdin);
   ll n,i,j,g,x,ans=0;
	for(i=2;i<=MX;++i)
	{
		if(!u[i])u[i]=p[++pn]=i;
		for(j=1;i*p[j]<=MX;++j){
			u[i*p[j]]=p[j];
			if(i%p[j]==0)
			break;
			}
	}
	cin>>n;
	for(g=0,i=1;i<=n;++i){
	cin>>a[i];
	
	g=gcd(g,a[i]);
	}
	for(i=1;i<=n;++i)for(j=a[i]/g;j>1;)
	for(++s[x=u[j]];u[j]==x;)j/=u[j];
	for(i=1;i<=MX;++i){
		ans=max(ans,s[i]);
		}
	return ans?n-ans:-1;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}