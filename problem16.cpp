//Multiplication of two matrices using Array.
#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],i,j,k,result[3][3]={0};
    // Taking the numbers of First Matrix from the user.
    cout<<"Enter First Matrix Elements: "<<endl;
    for(i = 0; i<3;i++){
        for(j=0; j<3;j++){
            cout<<"Enter the Number in Pocket ["<<i<<"] ["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    // Printing the First matrix.
    cout<<"First Matrix is ....."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // Taking the numbers of Second Matrix from the user.
    cout<<"Enter Second Matrix Elements: "<<endl;
    for(i = 0; i<3;i++){
        for(j=0; j<3;j++){
            cout<<"Enter the Number in Pocket ["<<i<<"] ["<<j<<"] : ";
            cin>>b[i][j];
        }
    }
    // Printing the Second matrix.
    cout<<"Second Matrix is ....."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    // Defining the result.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                result[i][j]= result[i][j]+ a[i][k]*b[k][j];
            }
        }
    }
    //Printing the result.
    cout<<"Multiplication of Matrix is ....."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}