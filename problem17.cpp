//Addition and Subtraction of Two Matrices.
#include<iostream>
using namespace std;
int main(){
    int A[2][2],B[2][2],Add[2][2],Sub[2][2],i,j;
    //Taking numbers of first matrix from the user.
    cout<< "Enter the numbers of First Matrix"<<endl;
    for(i = 0 ; i < 2; i++){
        for(j=0;j<2;j++){
            cout<<"Enter the Number in Pocket ["<<i<<"] ["<<j<<"] : ";
            cin>>A[i][j];
        }
    }
    // Printing First matrix.
    cout<<"First Matrix is...."<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //Taking numbers of second matrix from the user.
    cout<< "Enter the numbers of Second Matrix"<<endl;
    for(i = 0 ; i < 2; i++){
        for(j=0;j<2;j++){
            cout<<"Enter the Number in Pocket ["<<i<<"] ["<<j<<"] : ";
            cin>>B[i][j];
        }
    }
    // Printing Second matrix.
    cout<<"Second Matrix is...."<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    // Perform Addition.
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            Add[i][j] = A[i][j]+B[i][j];
        }
    }
    // Printing Addition of two matrices.
    cout<<"Addition of two matrices is... "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<Add[i][j]<<" " ;
        }
        cout<<endl;
    }
    //Perform Subtraction
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            Sub[i][j] = A[i][j]-B[i][j];
        }
    }
    // Printing Subtraction of two matrices.
    cout<<"Subtraction of two matrices is... "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<Sub[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}