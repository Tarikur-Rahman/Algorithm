#include<iostream>

using namespace std;


void merge (int array[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    //create  temp arrays
    int L[n1],R[n2];

    //copy data to temp arrays L[] and R[]

    for(i=0;i<n1;i++)
    {
        L[i]=array[l+i];

    }
    for(j=0;j<n2;j++)
    {
        R[j]=array[m+1+j];
    }

    //Merge the temp arrays back into array[ l .... r]
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if (L[i] <= R[j])
        {
            array[k]=L[i];
            i++;
        }
        else
        {
            array[k]=R[j];
            j++;
        }
        k++;
    }
    //copy the remaining elements of L[], if there are any 
    while(i<n1)
    {
        array[k]=L[i];
        i++;
        k++;
    }

    //Copy the remaining elements of R[],if there are any 
    while(j<n2)
    {array[k]=R[j];
    j++;
    k++; 
    }
}
// l for Left index and r for right index 
//sub-array of array to be sorted 

void mergesort (int array[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        //sort first and second halves
        mergesort(array,l,m);
        mergesort(array,m+1,r);
        merge(array,l,m,r);
    }
}

//Function to print an array 
void printarray(int A[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<< " " <<A[ i ];
    }
    cout<<endl;
} 

int main ()
{
 int array[]={12,15,11,40,33,51,55,5};
 int array_size=sizeof(array)/sizeof(array[0]);
 
 
cout<<"Given Array is : "<<endl;

printarray(array,array_size);

mergesort(array,0,array_size-1);

printarray(array,array_size);

return 0;
}