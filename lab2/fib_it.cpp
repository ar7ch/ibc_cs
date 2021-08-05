#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int nfib(int n) 
{
	int a1 = 1, a2 = 1, t;
	for(int i = 2; i < n; i++) {
		t = a2;
		a2 += a1;
		a1 = t;
	}
	return a2;
}

int main() {
	int n; cin >> n;
	auto start = chrono::steady_clock::now();
	cout << "N-th Fibonacci number: " << nfib(n) << endl;
	auto end = chrono::steady_clock::now();
	cout << "Execution time: " << chrono::duration_cast<chrono::microseconds>(end-start).count() << " microseconds" << endl;
	return 0;
}
