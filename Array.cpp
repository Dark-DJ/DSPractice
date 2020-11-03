#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    int i, j, v;
    int arr[9];
    int get(int i,int  j,int *arr);
    void set(int i,int  j,int *arr,int v);
    for(int i=0;i<9;i++)
    {
        arr[i]=i;

    }
    cin>>i>>j;
    cout<<get(i,j,arr)<<endl;

    cin>>i>>j>>v;
    
}




int get(int i,int  j,int *arr)
{
     return arr[(i-1)*3+(j-1)];
}
void set(int i,int  j,int *arr,int v)
{
    arr[i,j]=arr[(i-1)*3+(j-1)]=v;
    cout<<arr[(i-1)*3+(j-1)]<<endl;
}
