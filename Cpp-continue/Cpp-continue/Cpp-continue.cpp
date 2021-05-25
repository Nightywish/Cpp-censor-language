#include <iostream>
#include <string>

using namespace std;


int main()
{

	// game censor practice
	string censor = " yo what the hell?";
	censor.replace(censor.find("hell"), 4, "^.^!");
		cout << censor << endl;
	






}

