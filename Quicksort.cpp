#include<iostream>
using namespace std;
int quick(int array[],int low,int high)
{
    int pivot= array[high];
    int i=low;
    for(int j=low;j<high;j++)
    {
        if(array[j]<=pivot){
            swap(array[i],array[j]);
            i++;
        }
    }
    swap(array[i],array[high]);
    return i;
}
void quicksort(int array[],int low,int high)
{
    if(low < high)
    {
        int pos=quick(array,low,high);
        quicksort(array,low,pos-1);
        quicksort(array,pos+1,high);
    }
}


int main ()
{
    int n;
    cout<<"Enter the size an array: ";
    cin>>n;
    int array[n];
    cout<<"Enter the element an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    quicksort(array,0,n-1);

    cout<<"The sorted Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<" " <<array[i ]; 
    }
    return 0;
}