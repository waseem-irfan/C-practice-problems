
#include<iostream>
#include<stdlib.h>
#include<iomanip>





using namespace std;

int main(){
    int hour, min, sec;

    cout<<"Enter Current Time: ";
    cout<<endl;

    cout<<"HH-";
    cin>>hour;
    cout<<"MM-";
    cin>>min;
    cout<<"SS-";
    cin>>sec;

    if(hour>23){
        cout<<"Wrong Time Input";
    }
    else if(min>60){
        cout<<"Wrong Time Input";
    }
    else if(sec>60){
        cout<<"Wrong Time Input";
    }

    else{
        while(1){
            for(hour;hour<24;hour++){
                for(min;min<60;min++){
                    for(sec;sec<60;sec++){
                        cout<<"\n\n\n~~~~~~~~~~~~~~~ Current Time is: "<<hour<<":"<<min<<":"<<sec<<"~~~~~~~~~~~~~~~~~";
                        // sleep(1000);
                    }
                }
            }
        }
    }

    return 0;
}