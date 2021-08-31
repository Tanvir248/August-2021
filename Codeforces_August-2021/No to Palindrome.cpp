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
const int N = int(1005);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll n, p;
ls s;
bool check (ll v){   
	 if (v >= 1 && s[v] == s[v-1])      
        return false;  
  if (v >= 2 && s[v] == s[v-2])     
      return false;   
          return true;
 }

bool solve (ll v){
    while(true) {       
	    if (v >= n)      
            return true;     
   if (v < 0)          
       return false;       
 if (s[v] - 'a' == p - 1) {       
	      s[v] = 'a' - 1;   
                v--;
          } 
else{         
  int k = (s[v] - 'a' + 1) % p;          
     s[v] = 'a' + k;           
     if (check(v))            
        v++;     
   }  
  }   
 return false;
 }

int main () { 
   //freopen("input.txt", "r", stdin);

cin>>n>>p>>s;
  
  if(!solve(n-1))   
   no
 else       
  cout<<s<<endl;  
  return 0;
  }