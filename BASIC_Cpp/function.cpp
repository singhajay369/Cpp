#include<iostream>
using namespace std;
// FUNTCION is a very important part of top down structure programming 


    int func(int a , int b){
        int sum = a + b;
        return sum;
    }
    
    int main(){
        int x, y;
        cout << "Enter two integers" << endl;
        cin << x;
        cin << y;

        cout << func(x, y);
}