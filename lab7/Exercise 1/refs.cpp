#include <iostream>

using namespace std;

void triple(int& n){
	n*=3;
}

int main( int argc, const char * argv[] )
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	triple(num);

	cout << num << endl;

	return 0;
}