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

		bool inc = A[1] > A[0];
		bool bad = false;

		if(inc) {
			for(int i=1; i<A.size(); i++){
				int delta = A[i] - A[i - 1];
				if(delta < 1 || delta > 3){
					bad = true;
				}
			}
		}else{
			for(int i=0; i<A.size()-1; i++){
				int delta = A[i] - A[i + 1];

				if(delta < 1 || delta > 3) bad = true;
			}
		}

		res += !bad;
	}

	cout << res << "\n";

	return 0;
}
