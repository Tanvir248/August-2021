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
void solve(ull p, ull d){   
   
    ull pre=p,las=0;  
	ull pow=10,ans=p;
    while(pre>0)
    {
                 ll x=pre%10;
        pre=pre/10;
        las=las*10+9;
                 if(x!=9) {
                         if(pre>=1){
                                 pre--; 
                                 ull tmp=pre*pow+las;
                                 ull cha=p-tmp; 
                if(cha<=d) ans=tmp;
                else break;
            }
                 }else{ 
            ull tmp=pre*pow+las;
            ull cha=p-tmp;
            if(cha<=d) ans=tmp;
            else break;
        }
        pow=pow*10;
    }
    cout<<ans<<endl;

}
int main(){
     speed();
//freopen("input.txt", "r", stdin);
	
	ull m, n;
	cin>>m>>n;
      solve(m, n);  
    
     return 0;
}