#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int readGrid(){
	int grid = 0;
	int digit = 0;
	char temp;
	for(int i=0; i<9; i++){
		cin >> temp;
		if(temp == '*')
			grid |= (1 << i);
	}
	// cout << grid << endl;
	return grid;

}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin >> num;
    int flip[9] = { 11, 23, 38, 89, 186, 308, 200, 464, 416 };

    for(int n=0; n<num; n++){
    	int grid = readGrid();
    	queue<int> myqueue;
    	myqueue.push(0);
    	vector<bool> cache = vector<bool>(1023, false);
    	int count = 0;
    	bool solved = false;
    	while(count < 500){
    		int len = myqueue.size();
    		for(int i=0; i<len; i++){
	    		int cur = myqueue.front();
	    		myqueue.pop();
	    		if(cache[cur])
	    			continue;
	    		else
	    			cache[cur] = true;
	    		if(cur == grid){
	    			cout << count << endl;
	    			solved = true;
	    			break;
	    		}
	    		for(int i=0; i<9; i++){
	    			myqueue.push(cur ^ flip[i]);
	    		}
    		}
    		if(solved)
    			break;
    		count++;
    	}
    }
    return 0;
}
