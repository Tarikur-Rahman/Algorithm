#include<iostream>
using namespace std ;
void insertionsort(int array[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=array[i];
        int j=i-1;
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    cout<<"The Sorted Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}


int main ()
{
    int m,i;
    cout<<"Enter the Array Size: ";
    cin>>m;
    int array[m];
    cout<<"Enter The Element of Array: "<<endl;
    for(i=0;i<m;i++)
    {
        cin>>array[i];
    }
    insertionsort(array,m);
    return 0;
}