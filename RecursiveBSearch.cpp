#include<iostream>
using namespace std;
int recurbinary(int array[],int low,int high,int target)
{
    int mid =(low+high)/2;
    if(array[mid]==target)
    {
        return mid;
    }else if (array[mid]>target)
    {
        return recurbinary(array,low,mid-1,target);
    }else 
    {
        return recurbinary(array,mid+1,high,target);
    }
    return -1;
}
int main ()
{
    int n,m,iteam,i;
    cout<<"Enter The Array Size : ";
    cin>>n;
    int array[n];

    cout<<"Enter Element of Array: "<<endl;
    for(i=1;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the valu of Iteam: ";
    cin>>iteam;
    m= recurbinary(array,0,n-1,iteam);
    if(m!=-1)
    {
        cout<<"Data Available "<<m+1<<endl;
    }else 
    {
        cout<<"Data Not Available";
    }
    return 0;
}
