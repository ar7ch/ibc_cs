#include <iostream>
#include <cmath>

using namespace std;

class point_2d {
	public:	
		float x;
		float y;
		point_2d(float x1, float y1){
			x = x1;
			y = y1;
		}
};

float dist_2d(point_2d a, point_2d b) {
	return sqrt(pow(abs(a.x-b.x),2) + pow(abs(a.y-b.y),2));
}

int main() {
	float x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	point_2d a(x1, y1);
	point_2d b(x2, y2);
	point_2d c(x3, y3);
	float l1 = dist_2d(a, b), l2 = dist_2d(a, c), l3 = dist_2d(b, c);
	float p = (l1+l2+l3)/(float)2;
	float area = sqrt(p*(p-l1)*(p-l2)*(p-l3));
	cout << "Area: " << area << endl;
	return 0;
}
