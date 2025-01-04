#include<iostream>
using namespace std;
int bubblesort(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    cout<<"The Sorted Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i ]<<" ";
    }
    return 0;
}
int main ()
{
    int n,m,i;
    cout<<"Enter the Array Size: ";
    cin>>n;
    int array[n];
    cout<<"Enter the Array Element : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    m=bubblesort(array,n);

    return 0;
}