#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int>s1;
    stack<int> mystack2;
    //inserting an element into stack
    //it is based on LIFO -last in first out
    s1.push(20);
    s1.push(30);
    s1.push(50);
    s1.push(60);
    
    mystack2.push(3);
    mystack2.push(5);
    mystack2.push(7);
    mystack2.push(9);
 
 // swapping 
    s1.swap(mystack2);
    
   cout<<"mystack1 = ";
    while (!s1.empty()) {
        cout<<s1.top()<<" ";
        s1.pop();
    }
 
        // printing the second stack
    cout<<endl<<"mystack2 = ";
    while (!mystack2.empty()) {
        cout<<mystack2.top()<<" ";
        mystack2.pop();
    }
}
