#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_path(vector<vector<int>>& g, vector<int>& path)
{
	int p = 0;
	for(int i = 0; i < path.size()-1; i++) {
		p += (g[path[i]])[(path[i+1])];
	}
	return p;
}

int tsp(vector<vector<int>>& g, vector<int>& path, int&n) {
	int min_len = -1, cur_len;
	// consider all possible paths and find minimal value
	do{
		cur_len = find_path(g, path);
		if((cur_len < min_len) || (min_len == -1)) {
			min_len = cur_len;	
		}
	} while(next_permutation(path.begin()+1, path.begin()+n));
	return min_len;
}

int main() {
	int n, tmp; cin >> n;
	vector<vector<int>> g(n);
	// generate a path array we'll iterate through and find the length of this path
	// it is n+1 elements long and looks like 0 1 2 ... n 0
	vector<int> path;
		for(int i = 0; i < n; i++) {
		path.push_back(i);
		g[i] = vector<int>();
		for(int j = 0; j < n; j++) {
			cin >> tmp;
			g[i].push_back(tmp);
		}
	}
	path.push_back(0);
	cout << tsp(g, path, n) << endl;
	return 0;
}
