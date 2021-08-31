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
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}   
int solve(int s){
        int sum=0;
        while(s)
        {
            sum+=s%10;
            s/=10;
        }
        return sum;
    }
    int main(){
		speed();
		//freopen("input.txt", "r", stdin);

        lln n;
        cin>>n;
        double a;
        int i,b,flag=1;
        for(i=1;i<=81;++i)
        {
            a=(sqrt(i*i+4*n)-i)/2;
            b=(int)a;
            if(b==a&&solve(b)==i)
            {
              cout<<b<<endl;
			    flag=0;
                break;
            }
        }
        if(flag)
		cout<<-1<<endl;
        return 0;
    }

