#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter a character : "<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<ch<< " is lowercase"<<endl;
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<ch << " is uppercase"<<endl;
    }
    else{
        cout<<ch << " is not a letter"<<endl;
    }
    return 0;
}