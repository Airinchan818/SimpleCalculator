#include <iostream>
#include <array> 
#include <string>
#include <cmath>

#include "Calculator.hpp"
using namespace std;

double Calculator::add(double a,double b){
    double result = a + b;
    this->add_history(result);
    return result ;
}
double Calculator::subtract(double a, double b){
    double result = a-b;
    this->add_history(result);
    return result;
}
double Calculator::divided(double a,double b){
    double result = a / b;
    this->add_history(result);
    return result;
}
double Calculator::multi(double a,double b){
    double result = a *b;
    this->add_history(result);
    return result;
}
double Calculator::log(double x){
    double result = log10(x);
    this->add_history(result);
    return result;
}
double Calculator::power(double x,double factor){
    double result = pow(x,factor);
    this ->add_history(result);
    return result;
}
void Calculator::show_history_status(){
    try{
        cout<<"History : ";
        for (int i=0; i<this->threshold; i++)cout<<this->history[i]<<", ";
    }catch(const exception& e){
        cerr<<e.what()<<"\n";
        cout<<"the history still 0"<<endl;
    }
}
void Calculator::mechanism_history(){
    array<string,3> menu = {
        "delete","reset","back"
    };
    bool run = true;
    while(run)
    {   int choice; 
        cout<<"### History Mechanism ###"<<endl;
        this->show_history_status();
        cout<<endl;
        for (int i =0; i<menu.size(); i++){
            cout<<i<<". "<<menu[i]<<endl;
        }  
        cout<<"choice (1/2) : ";
        cin>>choice; 
        cin.ignore();
        switch (choice)
        {
        case 0:
            this->delete_history();
            break;
        case 1:
            this->reset_history();
            break;
        case 2:
            run = false;
            break;
        
        default:
            cout<<"RuntimeError the function is not aivable"<<endl;
            break;
        }
    }
    
}
