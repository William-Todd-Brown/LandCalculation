// Land Calculation
// In the united states, land is often measured in square feet. In many 
// other countries, it is measured in square meters. One acre of land 
// is equivalent ot 43,560 square feet. A square meter is equivalent to 
// 10.7639 square feet. Write a program that computes and displays the 
// number of square feet and the number of square meters in 0.5 acre of 
// land. Hint: Because a square meter is larger than a square foot, there 
// will be fewer square meters in 0.5 acre than there are square feet.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double acre = 43560;
	double squareMeter = 10.7639;
	double halfAcre = 43560 * 0.5;
	double squareMeterOfHalf = halfAcre / squareMeter;


	cout << fixed << setprecision(4);
	cout << "Half Acre: " << halfAcre << " in feet." << endl;
	cout << "Half Meter: " << squareMeterOfHalf << " in feet." << endl;
	return 0;
}
