#include<iostream>
using namespace std;
void selection(int array[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(array[j] < array[min])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            } 
        }
    }

    cout<<"The Sorted Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main ()
{
    int n,i;
    cout<<"Enter The Array Size : ";
    cin>>n;
    int array[n];
    cout<<"Enter The Array Element: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    selection(array,n);

    return 0;
}