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
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

using namespace std;

lln C[20][20];
lln pw[4];

lln cnk(int n, int k){
    if (k < 0 || k > n) return 0;
    return C[n][k];
}

long long get(int n, int lft){
    long long tot = 0;
    for (ll i = 0; i <=lft; i++)
    {
    
        tot += cnk(n, i) * pw[i];
    
    }
    return tot;
}

long long calc(long long x){
    string s = to_string(x);
    
    long long res = 0;
    int cur = 3;
    int n = s.size();
    
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0') continue;
        res += get(n - i - 1, cur);
        --cur;
        if (cur == -1) break;
        res += get(n - i - 1, cur) * (s[i] - '1');
    }
    
    return res;
}

int main() {
     for (ll i = 0; i < 20; i++){
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; ++j)
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }
    pw[0] = 1, pw[1] = 9, pw[2] = 81, pw[3] = 729;
    //  freopen("input.txt", "r", stdin);

    ll t;
    cin>>t;
     for (ll i = 0; i < t; i++){
        long long L, R;
        cin>>L>>R;
        cout<<calc(R + 1) - calc(L)<<endl;
    }
    return 0;
}