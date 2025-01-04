#include<iostream>
using namespace std;
int binary(int array[],int size,int iteam)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==iteam)
        {
            return mid;
        }
        else if(array[mid]<iteam)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main ()
{
    int array []={10,20,30,50,60,100};
    int size =sizeof (array)/sizeof(array[0]);
    int iteam=60;
    int result=binary(array,size,iteam);
    
    if(result!=-1)
    {
        cout<<"Data Available: "<<result+1;
        
    }else
    {
        cout<<"Data Not Available";
    }

    return 0;
}