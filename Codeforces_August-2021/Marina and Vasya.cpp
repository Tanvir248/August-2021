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
#define pp pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
  //freopen("input.txt", "r", stdin);
    lln i,j,k;
    lln n,t;
    lln t1,t2;
    string s1,s2,a;

    cin>>n>>t;
    cin>>s1>>s2;

    k=n;
    t1=n-t;t2=n-t;

    for(i=0;i<n;i++)
        a.push_back('#');

    i=0;
    while(i<n && t1>0 && t2>0)
    {
        if(s1[i]==s2[i])
            a[i]=s1[i],t1--,t2--,k--;

        i++;
    }

    i=0;
    while(t1 && k)
    {
        if(a[i]=='#')
            a[i]=s1[i],t1--,k--;

        i++;
    }

    i=0;
    while(t2 && k)
    {
        if(a[i]=='#')
            a[i]=s2[i],t2--,k--;

        i++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='#' && k)
        {
            for(j='a';j<='z';j++)
            {
                if(s1[i]!=j && s2[i]!=j)
                {
                    a[i]=j;break;
                }
            }
        }
    }

    t1=0,t2=0;

    for(i=0;i<n;i++)
    {
        if(a[i]!=s1[i])
            t1++;

        if(a[i]!=s2[i])
            t2++;
    }

    if(t==t1 && t==t2)
        cout<<a;

    else
        cout<<"-1";

 ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}