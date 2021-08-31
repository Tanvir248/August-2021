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
lln n1, n2, n3, n4;
ll solve(){   
   //freopen("input.txt", "r", stdin);
    cin>>n1>>n2>>n3>>n4;
    lln t ;
    cin>>t;
lln a, b, c, ans =0;
    while (t--)
    {
      cin>>a>>b>>c;
      lln x = a*n1+b*n2+c;
      lln y = a*n3+b*n4+c;
      if(x>0 &&y<0 || x<0&& y>0){
        ans++;
      }

    }
   return ans; 
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}