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
char num[100010];
int dp[100010][3],f[100010][3];

void dfs(int x,int temp){
	if (x==0){
		return;
	}
	else{
		if (f[x][temp]==3){
			dfs(x-1,temp);
		}
		else{
			dfs(x-1,f[x][temp]);
			cout<<num[x];
		}
  }
}

int main(){
	cin>>num+1;
	int len=strlen(num+1);
	
	for (int i=0; i<=len; i++)
		for (int j=0; j<3; j++)
			dp[i][j]=1e6;
	dp[0][0]=0;
	
	int find0=0;
	for (int i=1; i<=len; i++){
		int t=num[i]-'0';
		if (t==0) find0=1;
		
		for (int j=0; j<3; j++){
			if ( dp[i-1][j]+1 < dp[i][j] ){
				dp[i][j]=dp[i-1][j]+1;
				f[i][j]=3;
			}
			
			if (dp[i-1][j]!=i-1 || t!=0)
			if ( dp[i-1][j] < dp[i][(j+t)%3] ){
				dp[i][(j+t)%3]=dp[i-1][j];
				f[i][(j+t)%3]=j;
			}
		}	
	}
	
	if (dp[len][0]==len) 
		if (find0) cout<<0;
		else
    cout<<-1;
	else
		dfs(len,0);
	ed
	return 0;
}