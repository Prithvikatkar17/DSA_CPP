#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the numner1:";
    cin >>a;
    cout<<"enter the bunmber2:";
    cin>>b;
    if(a==b){
        cout<<"Numbers are equal."<<endl;
    }else if(a < b){
        cout<<"Number2 is greater"<<endl;
    }else{
        cout<<"Number1 is greater."<<endl;
    }
    return 0;
}