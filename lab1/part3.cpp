#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14159265358979323846;
    int radius; 
    cout << "Enter radius: ";
    cin >> radius;

	cout << pi * (radius * radius) << endl;
	
	return 0;
}