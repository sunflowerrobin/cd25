//2-a) Integer variable = (i-n,l-N)(a-z,A-Z,0-9)*
#include<iostream>
#include<string.h>
int i,check;
using namespace std;

bool isAllDigit(string s){
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i])){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;

}
int main(){

    string str;
    cin>>str;

    char first= str.at(0);
    int length = str.size();

    if(isAllDigit(str) && first=='1'){
        cout<<"Long Int"<<endl;
    }
    else{
        cout<<"Wrong Long Int format"<<endl;
    }


    return 0;
}


