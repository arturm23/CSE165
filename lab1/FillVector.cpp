#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	ifstream in( "code.cpp" );
	string line;
	
	while( getline( in, line ) ) // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v

	cout << "------ part5 ------" << endl;
	// add line numbers:
	for( int i = 0; i < v.size(); i++ )
		cout << i << ": " << v[i] << endl;
    
    cout << endl;

	cout << "------ part5 reversed------" << endl;

    for( int i = v.size() - 1; i >= 0; i-- )
		cout << i << ": " << v[i] << endl;
    
    cout << endl;
    
	cout << "-------- part6 -------" << endl;
    string part6;
    for( int i = 0; i < v.size(); i++ )
		part6 += v[i] + "\n";
    
    cout << part6;

}