#include <iostream>

// triangle inequality: sum of lengths of any two sides must be greater or equal to third side
template <typename T>
bool triangle_exists(T l1, T l2, T l3) {
	if( (l1+l2 >= l3) && (l1+l3 >= l2) && (l2+l3 >= l1) ) {
		return true;
	}
	return false;
}

int main() {
	int l1, l2, l3;
	std::cin >> l1 >> l2 >> l3; 
	std::cout << (triangle_exists<int>(l1,l2,l3) ? "triangle exists" : "triangle doesn't exist") << std::endl;
	return 0;
}
