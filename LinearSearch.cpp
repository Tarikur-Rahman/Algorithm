#include<iostream>
using namespace std;
int main ()
{
    int array[]={80,20,50,70,60,70};
    int iteam,i,n,found=0;
    n=sizeof(array)/sizeof(array[0]);
    cout<<"Enter the Value of Iteam: ";
    cin>>iteam;
    for(i=0;i<n;i++)
    {
        if(iteam==array[i])
        {
            cout<<"Data Found "<< i+1<<endl;
            found++;
        }
    }
    if(found==0)
    {
        cout<<"Data Not Found"<<endl;
    }
    return 0;
}