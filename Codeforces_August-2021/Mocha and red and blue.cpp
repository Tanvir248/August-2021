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
}int t,n,cnt;
char s[N];
void solve(){   
   //freopen("input.txt", "r", stdin);

	scanf("%d",&t);
	while (t--)
	{
		cnt=0;
		scanf("%d",&n);
		scanf("%s",s+1);
		for (int i=1;i<=n;i++)
			cnt+=(s[i]!='?');
		if (!cnt)
			s[1]='R';
		for (int i=2;i<=n;i++)
			if (s[i]=='?'&&s[i-1]!='?')
				s[i]=s[i-1]^('B'^'R');
		for (int i=n-1;i;i--)
			if (s[i]=='?'&&s[i+1]!='?')
				s[i]=s[i+1]^('B'^'R');
		printf("%s\n",s+1);
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}