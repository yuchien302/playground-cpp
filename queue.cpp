#include <iostream>
#include <queue>

using namespace std;

int main(void){

	queue<string> myq = queue<string>();
	myq.push("2");
	myq.push("+");
	queue<string>* myq2 = &myq;
	myq.push("1");

	cout << myq.front() << endl; // should be 2
	cout << myq.back() << endl; // should be 1


	cout << myq2 -> back() << endl; // should be +
}