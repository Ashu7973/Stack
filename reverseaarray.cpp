#include<iostream>
#include<stack>
using namespace std;
int main(){
    char as[]={'a','b','c','d','e'};
    stack<char>ch;
    for(int i=0;i<5 ;i++){
        ch.push(as[i]);
    }
    while(!ch.empty()){
        cout<<ch.top()<<endl;
        ch.pop();
    }
}