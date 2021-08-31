  #include<bits/stdc++.h>
 using namespace std;
  #define Fopen freopen("_in.txt","r",stdin); freopen("_out.txt","w",stdout);
  #define LL long long
  #define ULL unsigned LL
  #define fi first
  #define se second
  #define pb push_back
  #define lson l,m,rt<<1
 #define rson m+1,r,rt<<1|1
 #define max3(a,b,c) max(a,max(b,c))
 #define min3(a,b,c) min(a,min(b,c))
 typedef pair<int,int> pll;
 const LL INF = 0x3f3f3f3f3f3f3f3f;
 const LL mod =  (int)1e9+7;
 const int N = 2e5 + 100;
 LL n, m, x, y;
 LL k, ans1, ans2 = INF, ans3;
 LL cnt[N];
 int main(){
	      scanf("%I64d%I64d%I64d%I64d%I64d", &n, &m, &k, &x, &y);
     LL c1, c2;
     c1 = k/m;
     c2 = k%m;
     swap(c1, k);
     if(k < n){
         for(int i = 1; i <= k; i++) cnt[i] = m;
         cnt[k+1] = c2;
     }
     else {
         for(int i = 1; i <= n; i++) cnt[i] = m;
         k -= n;
         if(n != 1){
             LL t = n-1;
             LL z = k / t;
             LL lf = k % t;
             LL t1 = z-z/2;
             for(int i = 1; i < n; i++) cnt[i] += t1*m;
             for(int i = 2; i <= n; i++) cnt[i] += z/2 * m;
             if(z&1ll){
                 int g = 1;
                 for(int i = 2; i <= n, lf > 0; i++, lf--) cnt[i] += m, g = i;
                 cnt[++g] += c2;
             }
            else{
                 int g = n;
                 for(int i = n-1; i >= 1, lf > 0; i--, lf--) cnt[i] += m, g = i;
                 cnt[--g] += c2;
            }
         }
         else cnt[1] = c1;
     }
     for(int i = 1; i <= n; i++){
         if(cnt[i] == 0) {ans2 = 0; continue;}
         if(i == x) {
             LL lf = cnt[i]%m;
             ans3 = cnt[i]/m;
             if(lf >= y) ans3++;
         };
         LL t1 = cnt[i]/m;
         if(cnt[i]%m) t1++;
         ans1 = max(ans1, t1);
         LL t2 = cnt[i]/m;
         ans2 = min(ans2, t2);
     }

    printf("%I64d %I64d %I64d", ans1, ans2, ans3);
    return 0;
 }