#include <iostream>
using namespace std;

int main(){
    int age ;
    cout<<"Enter your age :";
    cin >> age ;
    if (age < 18){
        cout<< "Can not vote ."<< endl ;
    }else{
        cout << "Can vote"<< endl ;
    }
}