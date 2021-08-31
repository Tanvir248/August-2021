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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls solve(lln m, lln n){   
   //freopen("input.txt", "r", stdin);
	if(m==1 || n==1){
	ls x =to_string(m);
		return x;
	}else if(m<10){
		return "9";
	}else if(m<9){
		ls x =to_string(m);
		return x;
	}	
	ls s, ans;
	bool flag =false;
		while (n<m)
		{
			
			ll x = m%10;
		m--;
		if(x==9){
			s=to_string(m+1);
		for (ll i = 0; i < s.sz; i++)
		{ 
				if(s[i]=='0'){
					flag = true;
				}
		}if(flag==false){
				return s;
			}else{
			s.erase();
			flag =false;
			}
		}else
			x = 0;
		}
	
}
int main(){
     speed();
	lln m, n;
	cin>>m>>n;
      cout<< solve(m, n);  
     ed
     return 0;
}