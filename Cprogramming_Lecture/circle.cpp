#include <iostream>
using namespace std;
class Rectangle {
public:
	int width, height;
	Rectangle() { width = height = 1; }
	Rectangle(int w, int h) { width = w; height = h; }
	Rectangle(int length) { width = height = length; }
	bool isSquare();
};
bool Rectangle::isSquare() {
if(width ==height) return true;
else return false;
}
int main()
{
	Rectangle r1;
	Rectangle r2(3, 5);
	Rectangle r3(3);
	if (r1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (r2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (r3.isSquare()) cout << "rect3은 정사각형이다." << endl;
	return 0;
}