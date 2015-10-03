#include <iostream>
#include <vector>

using namespace std;

void append3(vector<int>& list){
  list.push_back(3);
}

int main(void){

  vector<int> myheap = vector<int> ();
  int n;
  while(cin >> n){
    myheap.push_back(n);
  }

  for(int i=0; i<myheap.size(); i++){
    cout << myheap[i] << endl;
  }
  cout << endl;
  myheap.pop_back();
  cout << myheap.front() << endl;


  append3(myheap);
  append3(myheap);
  append3(myheap);

  vector<int>::iterator it = myheap.begin();
  while(it != myheap.end()){
    cout << *it << endl;
    it++;
  }


  

  return 0;
}