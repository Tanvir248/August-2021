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
const int N = int(205);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
map<string,int> mp;
string me;
struct node{
    string str;
    int v;
}p[N];
void gao (string st) {
    int len = st.length();
    int i,j;
    string a,b;
    a.clear();b.clear();
    for (i = 0; i < len; i++) {
        if (st[i] == ' ')break;
        a += st[i];
    }
    i++;
    int v;
    if (st[i] == 'p') {
        v = 15;
        for (i = i + 10; i < len; i++) {
            if (st[i] == '\'') break;
            b += st[i];
        }
    }
    if (st[i] == 'c') {
        v = 10;
        for (i = i + 13; i < len; i++) {
            if (st[i] == '\'') break;
            b += st[i];
        }
    }
    if (st[i] == 'l') {
        v = 5;
        for (i = i + 6; i < len; i++) {
            if (st[i] == '\'') break;
            b += st[i];
        }
    }//cout<<b<<endl;
    if (a == me || b == me) {
        if (b == me)
        mp[a] += v;
        if (a == me)
        mp[b] += v;
    }
    if (a != me && b != me) {
        if (mp.find(a) == mp.end())
        mp[a] = 0;
        if (mp.find(b) == mp.end())
        mp[b] = 0;
    }
}
bool cmp (node a, node b) {
    if (a.v == b.v) return a.str < b.str;
    return a.v > b.v;
}
int main () {
    int i,j;
    int n;
    cin>>me>>n;
    string str;
    getchar();
    for (i = 0; i < n; i++) {
        getline(cin,str);//cout<<str<<"!"<<endl;
        gao(str);
    }
    map<string,int> ::iterator it;
    int cnt = 0;
    for (it = mp.begin(); it != mp.end(); it++) {
        p[cnt].str = it->first;
        p[cnt].v = it->second;
        cnt++;
    }
    sort(p,p+cnt,cmp);
    for (i = 0; i < cnt; i++) {
        cout<<p[i].str<<endl;
    }
    return 0;
}
