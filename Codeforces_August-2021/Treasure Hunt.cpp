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

int A[125],B[125],C[125];
int n,ma,mb,mc,l1,l2,l3;

int main (void)
{
    
    freopen ("input.txt","r",stdin);

    string a,b,c;
cin>>n;
        cin >> a >> b >> c;

        memset (A,0,sizeof A);
        memset (B,0,sizeof B);
        memset (C,0,sizeof C);

        ma = mb = mc = 0;

        for (char x : a)
            ma = max (ma,++A[x]);

        for (char x : b)
            mb = max (mb,++B[x]);

        for (char x : c)
            mc = max (mc,++C[x]);

        l1 = a.length(), l2 = b.length(), l3 = c.length();

        if (n == 1 && ma == l1)
            a.pop_back();

        if (n == 1 && mb == l2)
            b.pop_back();

        if (n == 1 && mc == l3)
            c.pop_back();

        l1 = a.length(), l2 = b.length(), l3 = c.length();

        ma = min (ma+n,l1);
        mb = min (mb+n,l2);
        mc = min (mc+n,l3);

        if (ma > mb && ma > mc)
            cout<<"Kuro";
        else if (mb > ma && mb > mc)
            cout<<"Shiro";
        else if (mc > ma && mc > mb)
           cout<<"Katie";
        else
            cout<<"Draw";

ed

    return 0;
}
