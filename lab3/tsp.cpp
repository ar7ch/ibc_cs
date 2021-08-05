#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_path(vector<vector<int>>& g, vector<int>& path){
	int p = 0;
	for(int i = 0; i < path.size()-1; i++) {
		p += (g[path[i]])[(path[i+1])];
	}
	return p;
}

int main() {
	int n, tmp; cin >> n;
	vector<vector<int>> g(n);
	vector<int> path;
	int min_len = -1, cur_len;
	for(int i = 0; i < n; i++) {
		path.push_back(i);
		g[i] = vector<int>();
		for(int j = 0; j < n; j++) {
			cin >> tmp;
			g[i].push_back(tmp);
		}
	}
	path.push_back(0);
	do{
		cur_len = find_path(g, path);
		if((cur_len < min_len) || (min_len == -1)) {
			min_len = cur_len;	
		}
	} while(next_permutation(path.begin()+1, path.begin()+n));
	cout << min_len << endl;
	return 0;
}
