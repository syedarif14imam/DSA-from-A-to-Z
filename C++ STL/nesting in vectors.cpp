#include <bits/stdc++.h>
using namespace std;

//function to print vector elements
void printVec(vector<int> &v) {
	cout << "size: " << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		//v.size() -> O(1) TS
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//vector of pairs

	//printing elements in vector of pairs.

	vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};
	printVec(v);

	vector<pair<int, int>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { //taking input from user and print vector of pair elements.
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}
	printVec(v);

	//ARRAY OF VECTORS its kinda behaving like 2-D arrays

	int N;
	cin >> N;
	vector<int> v[N];
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	for (int i = 0; i < N; i++) {
		printVec(v[i]);
	}


	//VECTOR OF VECTORS

	int N;
	cin >> N;
	vector<vector<int>> v; //vectors in v vector &  v is empty here

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		vector<int> temp; // creating a temprary vector to store elements and then pushing it into v vector
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++) {
		printVec(v[i]);
	}

return 0;
}




