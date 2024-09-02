#include<iostream>//HEADER FILE 
// "TO OPEN HEADER FILE JUST RIGHT CLICK ON THE HEADER FILE "
using namespace std ;
// int sum = 32;
int main (){
    //THIS IS CALLED MAIN FUNCTION EXECUTATION OF PROGRAMME TOOK PLACE

    // INT --> IS DATA TYOE // SUM --> IS VARIABLE THAT HOLDES 21 IN IT 

    int    sum  = 21;
    int    num  = 20;
    float num2 = 3.012345678900;    
    double num3 = 3.012345678900;    
    bool   mission =  1;
    bool   mission_fail = 0;

//THIS IS CALLED SINGLE LINE COMMENT 
/* 
THIS IS CALLED MULTILINE COMMENT
*/


// << THIS IS CALLED INSERTION OPERATOR 
// >> THIS IS CALLED EXSERTION OPERATOR




    cout << sum << endl;
    // cout << ::sum << endl; 
    // cout << getline(mission);
    cout << num << endl;//THIS IS CALLED OUTPUT STREAM
    // cin >> ; THIS IS CALLED INPUT STREAM
    cout<<"\'Hello World\'\n" "\"mini world\""<<endl;
    cout<<num2 <<endl <<num3 <<endl ;
    cout<< mission<<endl;
    cout<< mission_fail<<endl;
    cout << "the size of int is "<<sizeof(int) << endl;


    return 0;
}
