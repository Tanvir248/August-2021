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
const lln N = lln(1e18);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
     lln n, a, b;
 
    cin >> n >> a >> b;
    if (6*n <= a*b)
        cout << a*b <<endl<< a << " " << b << endl;
    else {
        bool flag = 0;

        if (a > b)
        {
            swap(a, b);
            flag = true;
        }
        
        lln lim = N, a1, b1, tmp;
        for(lln i = a; i*i <= 6*n; ++i) {
            tmp = 6*n / i;
            if (tmp * i < 6*n) 
            tmp++;
            
            if (tmp < b) 
            continue;
            
            if (tmp * i < lim) {
                lim = tmp * i;
                a1 = i;
                b1 = tmp;
            }
        }
        
        if (flag)
            swap(a1, b1);
        
        cout << lim << endl << a1 << " " << b1 << endl;
    }
 
}
int main(){
     speed();

       solve();  
     
     return 0;
}