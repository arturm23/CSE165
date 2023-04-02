#include <iostream>
#include <string>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	Data myData;
	
	char input;
	
	while(true){
		cin >> input;
		if(input == 'q' || input == 'Q'){
			return 0;
		} 
		if(input == 'c' || input == 'C'){
			cout << "Circle added" << endl;
			int r;
			cin >> r;
			myData.add(new Circle(r));
		}
		if(input == 't' || input == 'T'){
			cout << "Participant added" << endl;
			string name;
			int age, score;
			cin >> name;
			cin >> age >> score;
			myData.add(new Participant(name,age,score));
		}
		if(input == 's' || input == 'S'){
			cout << "Data Sorted" << endl;
			myData.sort();
		} 
		if(input == 'p' || input == 'P'){
			myData.print();
		} 
	}

	return 0;
}