#include<iostream>
using namespace std;

void shiftArray(int size,int array[])
{
    int half=size/2;
    for(int i=0;i<half;i++)
    {
        int temp=array[i];
        array[i]=array[i+half];
        array[i+half]=temp;
    }
    cout<<"The resultant array after shifting is : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    shiftArray(size,array);
    return 0;
}