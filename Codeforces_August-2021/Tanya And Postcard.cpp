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
#define X 52
 char s[N],t[N];
 ll cs[X],ct[X];
ll getid(char ch){
     if(ch>='a'&&ch<='z')
         return ch-'a';
     else
         return ch-'A'+26;
}
 int main()
 {
	    //freopen("input.txt", "r", stdin);

    ls s, t;
	    cin>>s>>t;
         getchar();
         memset(cs,0,sizeof(cs));
         for(int i=0;i<s.sz;i++){
             cs[getid(s[i])]+=1;
         }
         memset(ct,0,sizeof(ct));
         for(int i=0;i<t.sz;i++){
             ct[getid(t[i])]+=1;
         }
         int yay=0,whoop=0;
         int p;
         for(int i=0;i<X;i++){
             p=min(cs[i],ct[i]);
             cs[i]-=p;
             ct[i]-=p;
             yay+=p;
         }
         for(int i=0;i<26;i++){
             p=min(cs[i], ct[i+26]) + min(cs[i+26], ct[i]);
             whoop+=p;
         }
	cout<<yay<<" "<<whoop<<endl;
	return 0;
     }
