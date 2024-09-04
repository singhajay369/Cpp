#include<iostream>
using namespace std;
int main (){
    int age;
    cout << "Enter your age \n";
    cin >> age;
    if ((age<=18)&&(age>=1)){
        cout << "YOU ARE KID & YOU WILL GET KID PASS FOR PARTY\n";
            }
    else if (age>=18){
        cout << "welcome to the party \n";
    }
    else
        (age >= 0);
    {
        cout << "you are not yet born\n";
    }
    return 0;
}