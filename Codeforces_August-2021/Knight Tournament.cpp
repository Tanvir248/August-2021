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
// #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const lln N = int(1e5 + 10); 

#define lson l, mid, ri << 1
#define rson mid + 1, r, ri << 1 | 1
 
struct Node {
    lln l, r, k ;
}mes[N];
 
lln no[N << 2], ans[N] ;
lln a[N], n, m ;
 
void Updata (lln l, lln r, lln ri, lln L, lln R, lln val){
    if (L <= l && R >= r) {
        no[ri] = val ;
        return ;
    }
    if (no[ri]) {
        no[ri << 1] = no[ri << 1 | 1] = no[ri] ;
        no[ri] = 0 ;
    }
    lln mid = (l + r) >> 1 ;
    if (L <= mid) Updata(lson, L, R, val) ;
    if (R > mid) Updata(rson, L, R, val) ;
}
 
void query(lln l, lln r, lln ri){
    if(l == r) {
        ans[l] = no[ri] ;
        return ;
    }
    if (no[ri]) {
        no[ri << 1] = no[ri << 1 | 1] = no[ri] ;
        no[ri] = 0 ;
    }
    int mid = (l + r) >> 1 ;
    query(lson) ;
    query(rson) ;
}
 
int main (){
       //freopen("input.txt", "r", stdin);

    cin >> n >> m ;
    for (int i = 0; i < m; i++) cin >> mes[i].l >> mes[i].r >> mes[i].k ;
    for (int i = m - 1; i >= 0; i--){
        if (mes[i].l < mes[i].k) Updata(1, n, 1, mes[i].l, mes[i].k - 1, mes[i].k) ;
        if (mes[i].r > mes[i].k) Updata(1, n, 1, mes[i].k + 1, mes[i].r, mes[i].k) ;
    }
    query(1, n, 1) ;
    for (int i = 1; i <= n; i++) cout << ans[i] << " " ;
    cout << endl ;
    return 0 ;
}