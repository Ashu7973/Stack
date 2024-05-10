#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"No.of element to push in the stack"<<endl;
    cin>>n;
    stack <int> st;
    cout<<"Enter the element"<<endl;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<"Enter element to push in last"<<endl;
    int y;
    cin>>y;
    stack <int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(y);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}