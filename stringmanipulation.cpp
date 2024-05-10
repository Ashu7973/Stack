#include<iostream>
#include<stack>
using namespace std;
int main(){
    string arr[]={"ab","ac","da","da","ac","db","ea"};
    stack <string> s;
    for(int i=0;i<7;i++){
        if(s.empty()){
            s.push(arr[i]);
        }
        else{
            if(s.top()==arr[i]){
                s.pop();
            }else{
                s.push(arr[i]);
            }
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}