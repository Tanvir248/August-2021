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
const int N = int(11e5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls s;
int a,b;
lln l[N],r[N];
void solve(){   
  // freopen("input.txt", "r", stdin);
   int i;
   cin>>s;
        cin>>a>>b;
       lln cnt=0;
        for(i=0;i<s.sz;i++)
        {
            cnt=(cnt*10+s[i]-'0')%a;
            l[i]=cnt;
        }
        cnt=0;
        lln ans=1;
        for(i=s.sz-1;i>=0;i--)
        {
            cnt=(cnt+(s[i]-'0')*ans)%b;
            ans=(ans*10)%b;
            r[i]=cnt;
        }
        for(i=0;i<s.sz;i++)
        {
            if(l[i]==0&&r[i+1]==0&&s[i+1]!='0')
                break;
        }
        if(i<s.sz-1)
        {
            yes
            for(int j=0;j<s.sz;j++)
            {
                cout<<s[j];
                if(j==i)
                    ed
            }
            ed
        }
        else
            no
}
int main(){
     speed();

       solve();  
     
     return 0;
}