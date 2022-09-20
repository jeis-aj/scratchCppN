#include  <iostream>
using namespace std;

struct data {
  int key;
  int data;
  /*
  int operator<(const struct data& d){
    if (d.key==key){
      return d.data > data;
    }
    return d.key >key;
  }
  */
};
bool comp(struct data data1,struct data data2){

  /* struct data data1; */
  /* data1 ={ 8, 9}; */
  /* struct data data2={ 8, 4}; */

  /* cout<<( data2<data1 )<<endl; */

    if (data1.key==data2.key){
      return data1.data < data2.data;
    }
    return data1.key <data2.key;
  

  /* return (data1<data2); */
}
/*
 * struct comparison operator 
 *
 * declaring function inside a struct
 */
