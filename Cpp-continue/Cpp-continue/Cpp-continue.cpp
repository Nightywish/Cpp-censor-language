#include <iostream>
#include <string>

using namespace std;


int main()
{

	// game censor practice
	string censor = " yo what the hell?";
	censor.replace(censor.find("hell"), 4, "^.^!");
	cout << censor << endl;

	string greeting =" hello there";
	cout << greeting.find_first_of("!") << endl;
		if (greeting.find_first_of("!") == -1) 
			cout<< "Not found" << endl;


		return 0;

}

