// ARRAY is the collection of similar type of data 
#include<iostream>
using namespace std;
int main (){
    int  i = 0;
    // syntax : data_type var_name [size] = { decleration };
    int a[5] = {21, 22, 23, 24, 25};
    cout << "by for loop\n";
    for (int i = 0; i < 5;i++)
    {
        cout << "The marks you entred are " << i << " is " << a[i]<<endl;
    }
    cout << "by while loop\n";
    int j = 0;
    while ( j<5){
        cout<<"The marks you entred are " << j << " is " << a[j]<<endl;
        j++;
    }
    cout << "This is by do while loop\n";
    int e = 0;
    do{
        cout<<"The marks you entred are " << e << " is " << a[e]<<endl;
        e++;
    } while (e < 5);
    


    // POINTER AND ARRAY
    cout << endl;
    int *p = a;
    cout << "The value of markes[0] is " << (*p)   << endl;
    cout << "The value of markes[1] is " << (*p+1) << endl;
    cout << "The value of markes[2] is " << (*p+2) << endl;
    cout << "The value of markes[3] is " << (*p+3) << endl;
    cout << "The value of markes[4] is " << (*p+4) << endl;

    int array[5] = {21, 22, 23, 24, 25};
    
    int sum[5] = array[] + a[];
    cout << sum[0];

    return 0;
}