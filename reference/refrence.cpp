#include<iostream>
using namespace std;

int main(void){

    int num{10};
    int &ref{num};

    cout << "value using variable = " << num << endl;
    cout << "value using refrence variable = " << ref << endl;
    cout << "address using variable = " << &num << endl;

    cout << "address using refrence variable = " << &ref << endl;
    //change in value 
    //ref = 30;
    num = 40;
    cout << "value using variable = " << num << endl;
    cout << "value using refrence variable = " << ref << endl;
    cout << "address using variable = " << &num << endl;
    cout << "address using refrence variable = " << &ref << endl;

    int num{30};
    int& ref{num};
    int *ptr = &num;

    cout << "value of var = " << num << endl;
    cout << "value of ref = " << ref << endl;
    cout << "value of ptr = " << *ptr << endl;

    num = 40;

    cout << "value of var = " << num << endl;
    cout << "value of ref = " << ref << endl;
    cout << "value of ptr = " << *ptr << endl;

    *ptr = 50;

    cout << "value of var = " << num << endl;
    cout << "value of ref = " << ref << endl;
    cout << "value of ptr = " << *ptr << endl;

    int test = 70;
    ref = test; // this will change in the same memory location so num value also got change 

     cout << "value of var = " << num << endl;
    cout << "value of ref = " << ref << endl;
    cout << "value of ptr = " << *ptr << endl;





}
