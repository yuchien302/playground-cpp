#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector< vector<char> > board = vector< vector<char> >();
    char temp;
    int queens = 0;
    for(int i=0; i<8; i++) {
    	
    	vector<char> row;
    	for (int j=0; j<8; j++) {
    		cin >> temp;
    		if(temp == '*')
    			queens++;
    		row.push_back(temp);
    	}
    	board.push_back(row);
    }

    if(queens != 8){
		cout << "invalid" << endl;
		return 0;    	
    }

    vector< bool > row = vector<bool> (8, false);
    vector< bool > col = vector<bool> (8, false);
    vector< bool > dig1 = vector<bool> (15, false);
    vector< bool > dig2 = vector<bool> (15, false);

    for(int i=0; i<8; i++){
    	for(int j=0; j<8; j++){
    		if(board[i][j] == '*'){
	    		if(row[i] || col[j] || dig1[i+j] || dig2[7+i-j]){
	    			cout << "invalid" << endl;
	    			return 0;
	    		} else {
	    			row[i] = true;
	    			col[j] = true;
	    			dig1[i+j] = true;
	    			dig2[7+i-j] = true;
	    		}
	    	}
    	}
    }
    cout << "valid" << endl;

    return 0;
}
