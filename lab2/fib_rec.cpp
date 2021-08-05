#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int nfib(int n) 
{
	if(n == 2) return 1;
	if(n == 1) return 1;
	if(n == 0) return 0;
	return (nfib(n-1) + nfib(n-2));
}

int main() {
	int n; cin >> n;
	auto start = chrono::steady_clock::now();
	cout << "N-th Fibonacci number: " << nfib(n) << endl;
	auto end = chrono::steady_clock::now();
	cout << "Execution time: " << chrono::duration_cast<chrono::microseconds>(end-start).count() << " microseconds" << endl;
	return 0;
}
