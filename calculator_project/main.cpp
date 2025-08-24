#include <iostream>
#include <array>
#include <string> 
#include "Calculator.hpp"
using namespace std;

int main(){
    bool run = true;
    Calculator *cal = new Calculator();
    array <string,8> operan = {
        "add(+)","substract(-)","divide(/)","multiple",
        "pow","log","out","edit history"
    };
    while(run){
        double a,b;
        int choice;
        cout<<"########## Menu ##########"<<endl;
        for (int i =0; i<operan.size(); i++){
            cout<<i<<". "<<operan[i]<<endl;
        }
        cal->show_history_status();
        cout<<"operan (1/7) : ";
        cin>>choice; 
        switch(choice){
            case 0:
                cout<<"input num :";
                cin>>a;
                cout<<"input num factor :";
                cin>>b;
                cout<<"result : "<<cal->add(a,b)<<endl;
                break;
            
            case 1:
                cout<<"input num :";
                cin>>a;
                cout<<"input num factor :";
                cin>>b;
                cout<<"result :"<<cal->subtract(a,b)<<endl;
                break;
            case 2 :
                cout<<"input num :";
                cin>>a;
                cout<<"input num factor :";
                cin>>b;
                cout<<"result : "<<cal->divided(a,b)<<endl;
                break;
            case 3:
                cout<<"input num :";
                cin>>a;
                cout<<"input num factor :";
                cin>>b;
                cout<<"result : "<<cal->divided(a,b)<<endl;
                break;

            case 4:
                cout<<"input num :";
                cin>>a;
                cout<<"input num factor :";
                cin>>b;
                cout<<"result : "<<cal->power(a,b)<<endl;
                break;
            
            case 5:
                cout<<"input num :";
                cin>>a;
                cout<<"result : "<<cal->log(a)<<endl;
                break;
            
            case 6:
                run = false;
                break;
            
            case 7:
                cal->mechanism_history();
                break;
            
            default :
                cout<<"operand not aivable"<<endl;
                break;
        }
    }
    delete cal;
    return 0;
}