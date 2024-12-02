#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <bitset>

using namespace std;

void solve(){

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ifstream file;
	string text;
	file.open("input.txt", ios::in);

	long long res = 0, cur = 0;

	vector<long long> A;
	unordered_map<long long, int> B;

	while(getline(file, text)){
		char c = ' ';
		int d = text.find(c), n = text.size();

		long long a = stoll(text.substr(0, d));
		long long b = stoll(text.substr(d + 1, n - d));

		A.push_back(a);
		B[b] += 1;
	}

	for(int i=0; i<A.size(); i++){
		res += A[i] * B[A[i]];
	}

	cout << res << "\n";

	return 0;
}
