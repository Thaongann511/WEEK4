#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
 
int main()
{
    int num1,num2;
 
    cout<<"Nhap vao so thu nhat: ";
    cin>>num1;
    cout<<"Nhap vao so thu hai: ";
    cin>>num2;
   
    cout<<"Truoc khi doi: \n"<<"So thu nhat = " <<num1<<"\nSo thu hai = "<<num2;
 n 
    swap(&num1,&num2);
 
    cout<<"\nSau khi doi: \n"<<"So thu nhat = " <<num2<<"\nSo thu hai = "<<num1;
}
