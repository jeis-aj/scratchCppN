#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;


void fn(bool &flag){
  if(flag){
    cout<<"print !!" <<endl;
    flag = false;
  }
}
bool flag[4]={ 1,1,1,1};
void v(void){
  for(auto val: flag){
    cout<<"  "<<val;
  }
}
int main(){
  int i =0;
  while(1){
    fn(flag[i]);
    v();
    i = i<4?i:0;
    ++i;
    sleep(1);
    cout<<endl;
  }
}
