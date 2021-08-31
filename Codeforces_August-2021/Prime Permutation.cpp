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
const int N = int(1001);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls s;
ll c[256];
bool f[1001];
void solve(){   
   //freopen("input.txt", "r", stdin);
   cin>>s;
    for (int i = 0; i < s.sz; i++){
        c[s[i]]++;
        }
        
    // for (int i = 0; i < s.sz; i++){
    //     cout<<c[i]<<" ";
    //     }
 

    ll cnt = 0;
    for (int i = 0; i < 256; i++){
        if (c[i] > c[cnt])
         cnt = i;
        }
 
 
    memset(f, true, sizeof(f));
    for (int i = 2; i * i <= s.sz; i++)
        if (f[i])
            for (int j = i * i; j <= s.sz; j += i)
                f[j] = false;
 
    f[1] = true;
    for (int i = 2; i + i <= s.sz; i++)
        f[i] = false;
 
    for (int i = 1; i <= s.sz; i++)
        if (!f[i])
        {
            if (c[cnt] == 0)
            {
                no
                return;
            }
            c[s[i - 1] = cnt]--;
        }
 
    ll k = 0;
    for (int i = 1; i <= s.sz; i++)
        if (f[i])
        {
            while (c[k] == 0) k++;
            c[s[i - 1] = k]--;
        }
        yes
        cout<<s;
        ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}