#include<iostream>
using namespace std;

bool safe(int** array,int x,int y,int n){
    
    for(int row=0;row<x;row++){
        if (array[row][y]==1){
            return false;
        }   
    }
    
    //Left Digonal attack Check 
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(array[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    //Right Digonal Attack check
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(array[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nqueen(int** array,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(safe(array,x,col,n)){
            array[x][col]=1;

            if(nqueen(array,x+1,n)){
                return true;
            }
            else {
                array[x][col]=0;//backtracking
            }
        }

    }
    return false;
}

int main (){
    cout<<"Enter The Number of Queen: ";
    int n;
    cin>>n;
    int** array=new int*[n];//create 2 dimentional array
    for(int i=0;i<n;i++){
        array[i]=new int[n];
        for(int j=0;j<n;j++){
            array[i][j]=0;
        }
    }
    //call function and print 
    if(nqueen(array,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}