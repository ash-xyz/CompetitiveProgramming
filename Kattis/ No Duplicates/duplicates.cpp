#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
	set<string> maps;
	bool rep = false;
	while (cin >> s && !rep){
		if (!maps.count(s)) maps.insert(s);
		else rep = true;
	}
	if (rep) cout << "no" << endl;
	else cout << "yes" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}