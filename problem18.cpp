// Transpose of a Matrix.
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int Matrix[3][2]={{1,2},{3,4},{5,6}};
    cout<<"Given Matrix is...."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of Matrix is...."<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<Matrix[j][i]<<" ";
        }
        cout<<endl;
    }

}