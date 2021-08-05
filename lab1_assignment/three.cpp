#include <iostream>

using namespace std;

namespace my {
	int gcd(int a, int b)
	{
		while(std::min(a,b) != 0) {
			if(a > b) { a = a % b; }
			else if(a < b) { b = b % a; }
		}
		return std::max(a,b);
	}
}

int main() 
{
	int a, b;
	cin >> a >> b;
	cout << my::gcd(a,b) << endl;
	return 0;
}
