#include <iostream>
#include<stack>
using namespace std;
int main() {
  int n , m;
  stack<int> box;
  int book = 1;
  for(int i = 1 ; i< m ; i++){
    char move;
    cin>>m>>n;
    if(move == 'a'){
      int movement;
      cin>>movement; 
       for(int j = 0; j < m; j++){
         box.push(book);
         book++;
       }
    }
    else if(move == 'b') {
       int movement;
       cin>>movement;
       for (int j = 0; j < movement; j++ ){
         box.pop();
       }
  
                     
    }
  }
}
