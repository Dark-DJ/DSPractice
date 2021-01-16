#include <iostream>
#include <cstring>
using namespace std;
char btree[1024];
void preorder(int);
void inorder(int);
void postorder(int);
int main(void){
  memset(btree,0,sizeof(btree));
  btree[1]='A';
  btree[2]='B';
  btree[3]='C';
  btree[4]='D';
  btree[5]='E';
  btree[7]='F';
  preorder(1);
  cout << endl;
  inorder(1);
  cout << endl;
  postorder(1);
  cout << endl;
}
void preorder(int p){
  if(btree[p]) {
    cout << btree[p] << " ";
    preorder(2*p);
    preorder(2*p+1);
  }
}
void inorder(int p){
  if(btree[p]) {
    inorder(2*p);
    cout << btree[p] << " ";
    inorder(2*p+1);
  }
}
void postorder(int p){
  if(btree[p]) {
    postorder(2*p);
    postorder(2*p+1);
    cout << btree[p] << " ";
  }
}
