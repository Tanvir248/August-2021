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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
struct Box
{
  lln Size;
  lln num;
} box [N];
bool cmp (Box a, Box b)
{
    if (a.Size> b.Size)
        return true;
    return false;
}
lln solve(lln ans){
     //freopen("input.txt", "r", stdin);

  lln i, n;
    lln temp;
    cin >>n;
        temp = -1;
        for (i = 0; i <n; i ++)
            {
                cin >> box [i] .Size >> box [i] .num;
                if (temp <box [i] .Size)
                    temp = box [i] .Size;
            }
            ans = temp + 1;
        sort (box, box + n, cmp);
        for (i = 0; i <n; i ++)
        {
            temp = ans-box [i] .Size;
            if (temp> 30)
                continue;
            temp = pow (4.0, temp);
            while (box [i] .num> temp) {
                temp *= 4;
                ans++;
            }
        }
        return ans;
}
int main ()
{
  speed();
 cout<< solve(0);
    ed
    return 0;
}