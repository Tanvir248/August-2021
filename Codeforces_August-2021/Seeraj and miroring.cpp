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
const int N = 105;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int  n,m,i,j,k,a[N][N];
string s,ss;
void solve(){
  // freopen("input.txt", "r", stdin);
     cin>>n>>m; 
        for(i=0; i<n; i++)  
              for(j=0; j<m; j++) 
              cin>>a[i][j]; 
                 if(n&1) cout<<n<<endl;   
                  else{int r=n/2,flag=1,ff=1;
                          int sum=0;  
   while(r&&flag)  {  
         for(i=0; i<n&&flag; i+=r*2)
                            { 
                 for(j=i,k=i+r+r-1; j<k&&flag; j++,k--) 
                                  {     
            for(int p=0; p<m&&flag; p++) 
         if(a[j][p]!=a[k][p])
          flag=0; 
         } 
                                       }  
    if(flag&&(r%2==0)) r/=2;
      if(flag&&(r&1)) sum++; 
   if(sum>3) break;   
                 }  
      if(!flag) cout<<r*2<<endl;  
           else cout<<r<<endl; 
  }
}
int main(){ 
  speed();
  solve();
return 0;
}