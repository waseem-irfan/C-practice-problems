#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter a:";
    cin>>a;
    cout<<endl;
    cout<<"Enter b:";
    cin>>b;
    cout<<endl;
    cout<<"Enter c:";
    cin>>c;
    cout<<endl;
    cout<<"Enter d:";
    cin>>d;
    cout<<endl;
    cout<<"Enter e:";
    cin>>e;
    cout<<endl;

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    cout<<a<<" is the largest number.";
                }
                else{
                    cout<<e<<" is the largest number.";
                }
            }
            else{
                if(d>b){
                    if(d>c){
                        if(d>e){
                            cout<<d<<" is the largest number.";
                        }
                        else{
                            cout<<e<<" is the largest number.";
                            
                        }
                    }
                    else{
                        if(c>e){
                            cout<<c<<" is the largest number.";
                        }
                        else{
                            cout<<e<<" is the largest number.";

                        }
                    }
                }
                else{
                    if (b>e){
                        cout<<b<<" is the largest number.";
                    }
                    else{
                        cout<<e<<" is the largest number.";
                    }
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    cout<<c<<" is the largest number.";
                }
                else{
                    cout<<e<<" is the largest number.";
                }
            }
            else{
                if(d>e){
                    cout<<d<<" is the greatest number.";
                }
                else{
                    cout<<e<< " is the largest number.";
                }
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                if(b>e){
                    cout<<b<<" is the largest number.";
                }
                else{
                    cout<<e<<" is the largest number.";
                }
            }
            else{
                if(d>c){
                    if(d>e){
                        cout<<d<<" is the largest number.";
                    }
                    else{
                        cout<<e<<" is the largest number.";
                    }
                }
                else{
                    if(c>e){
                        cout<<c<<" is the largest number.";
                    }
                    else{
                        cout<<e<<" is the largest number.";
                    }
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    cout<<c<<" is the largest number.";
                }
                else{
                    cout<<e<<" is the largest number.";
                }
            }
            else{
                if(d>e){
                    cout<<d<<" is the largest number.";
                }
                else{
                    cout<<e<<" is the largest number.";
                }
            }
        }
    }

    
    
    
    return 0;
}