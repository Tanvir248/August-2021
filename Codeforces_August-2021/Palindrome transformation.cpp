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
char str[N];
ll solve(ll n, ll p){   
   //freopen("input.txt", "r", stdin);
   cin>>str+1;
           ll psum = 0, las, fir;
        bool flag = true;
        if(p > n/2)  p = n + 1 - p;
        for (int i = 1; i <= n/2; i++) {
            int op = abs(str[i] - str[n + 1 - i]);
            if (op) {
                if (flag) {
                    fir = i; flag = false;
                }
                psum += min(op, 26 - op);
                las = i;
            }
        }
        if (psum == 0) return 0;
        else if (fir >= p) return las - p + psum;
        else if (las <= p) return p - fir + psum;
        else{
            return min(2*(p - fir) + las - p, 2*(las - p) + p - fir) + psum;
        }

   }
int main(){
     speed();
ll a, b;

cin>>a>>b;
      cout<< solve(a, b);  
     ed
     return 0;
}