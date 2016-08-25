#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	string line;
	ifstream myfile("test_data_load.txt");
	if (myfile.is_open()){
		cout << "Yes Yes Yes" << endl;
		while (getline(myfile, line))
			cout << line << endl;
		myfile.close();
	}
	else cout << "Too bad" << endl;
	
	return 0;
}
