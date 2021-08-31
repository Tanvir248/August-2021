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
const lln N = lln(2e18);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int solve(ls s, ls t)
{
ll tp = 0;
	ll sp = 0;
	ll taken = 0;

	while (sp < s.length() && tp < t.length())
	{
		if(s[sp] == t[tp])
		{
			taken++;
			tp++;
		}
		sp++;
	}

	return (int)s.length() - taken + (int)t.length() - taken;
}

vector<string> ts;

int main()
{
	for (lln p2 = 1; p2 <= N; p2 *= 2)
		ts.push_back(to_string(p2));

	int t;
	cin >> t;

	while (t--)
	{
		ls n;
		cin >> n;

		int ans = n.length() + 1;
		for (auto p2 : ts)
			ans = min(ans, solve(n, p2));
		cout << ans << endl;
	}

	return 0;
}
