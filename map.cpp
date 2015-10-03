#include <iostream>
#include <map>

using namespace std;

int main(void){
	map<int, string> mymap = map<int, string>();
	mymap[3] = "hi3";
	mymap[2] = "hi2";

	map<int, string>::iterator it;
	for(it = mymap.begin(); it!= mymap.end(); it++){
		cout << it -> first << ", " << it->second << endl;
	}

	cout << mymap.size() << endl;

}