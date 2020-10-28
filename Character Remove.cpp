#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s, t = "";
		cin >> s;
		for (char c : s){
			if (c == 'B' && !t.empty()) t.erase(t.end() - 1);
			else t.push_back(c);
		}
		cout << t.size() << endl;
	}
}
