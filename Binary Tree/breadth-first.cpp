#include <iostream>
using namespace std;
struct node{
  char data;
  struct node *left;
  struct node *right;
};
int main(void){
  node *root,*p1,*p2,*p3,*p4,*p5,*p7;
  p1=new node;
  p1->data='A';
  root=p1;
  p2=new node;
  p2->data='B';  
  p3=new node;
  p3->data='C';
  p4=new node;
  p4->data='D';
  p5=new node;
  p5->data='E';
  p7=new node;
  p7->data='F';
  p1->left=p2;
  p1->right=p3;
  p2->left=p4;
  p2->right=p5;
  p3->left=NULL;
  p3->right=p7;
  p4->left=NULL;
  p4->right=NULL;
  p5->left=NULL;
  p5->right=NULL;
  p7->left=NULL;
  p7->right=NULL;
}
