#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={2,3,5,-4,6,-2,-8,9};
    stack <int> st;
    for(int i=0;i<8;i++){
       if(st.empty()){
        st.push(arr[i]);
       }
       else if(arr[i]>=0){
        if(st.top()>=0){
            st.push(arr[i]);
        }
        else{
            st.pop();
        }
       }
       else{
        if(st.top()<0){
            st.push(arr[i]);
        }
        else{
            st.pop();
        }
       }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}