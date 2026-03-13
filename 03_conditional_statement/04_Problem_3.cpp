#include <iostream>
using namespace std;

int main(){
    float income;
    cout<<"Enter your salary :";
    cin >>income;
    float tax;

    if(income<5){
        tax = 0;
    }else if(income<=10){
        tax = income * 0.2;
    }else{
        tax= income * 0.3;
    }
    cout<<"Tax ="<<tax*100000<<endl;
    return 0;
}