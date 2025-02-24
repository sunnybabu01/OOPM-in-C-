#include <iostream>
using namespace std;
class Point {
private:
 int x, y;
public:
 // Constructor
 Point(int x = 0, int y = 0) : x(x), y(y) {}
 // Overloading the insertion operator (<<)
 friend ostream& operator<<(ostream& os, Point& p) {
 os << "(" << p.x << ", " << p.y << ")";
 return os; 
 }
 // Overloading the extraction operator (>>)
 friend istream& operator>>(istream& is, Point& p) {
 cout << "Enter x and y coordinates: ";
 is >> p.x >> p.y;
 return is; // Return the stream to allow chaining
 }
};
int main() {
 Point p1; // Default point (0, 0)
 // overloaded extraction operator
 cin >> p1;
 // overloaded insertion operator
 cout << "You entered the point: " << p1;
 return 0;
}