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
const int N = int(1e6 + 10);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

lln solve(lln n, lln ans){   
   //freopen("input.txt", "r", stdin);
   ll arr[N];
   ll fnd[N];
   lln sum =0;
    for (ll i = 0; i < n; i++)
    {
            cin>>arr[i];
            sum+=arr[i];
    }
    if(sum%3 != 0){
        return 0;
    }else{
         sum /= 3;
         lln sum1;
        for(int i = n-1; i >= 0 ; i--)
        {
            sum1 += arr[i];
            if (sum1 == sum)
                fnd[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; i--){
            fnd[i] += fnd[i+1];
            }
        
            sum1 = 0;
        for(int i = 0 ; i+2 < n ; i++) {
            sum1+=arr[i];
            if (sum1 == sum)
                ans+=fnd[i+2];
        }
        return ans;
    }
}
int main(){
     speed();
lln t;
cin>>t;
 cout<<solve(t, 0);  
     ed
     return 0;
}