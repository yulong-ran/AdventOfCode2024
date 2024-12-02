#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <sstream>
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

bool check(vector<int>& A){
	for(int i=0; i<A.size()-1; i++){
		int d = A[i + 1] - A[i];

		if(d < 1 || d > 3) return false;
	}

	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ifstream file;
	string text;
	file.open("input.txt", ios::in);

	long long res = 0, cur = 0;


	while(getline(file, text)){
		vector<long long> A;
		string temp;
		stringstream ss(text);

		while(getline(ss, temp, ' ')) {
			A.push_back(stoll(temp));
		}

		
		for(int i=0; i<A.size(); i++){
			vector<int> B(A.begin(), A.end());
			B.erase(B.begin() + i);

			if(check(B)){
				res += 1; break;
			}

			reverse(B.begin(), B.end());

			if(check(B)){
				res += 1; break;
			}
		}
	}

	cout << res << "\n";

	return 0;
}
