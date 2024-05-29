#include<iostream>

using namespace std;
int main(void){
    cout << "This is dynamic allocation example" << endl;

    // case 1
    int *ptr = new int{10};
    cout << "value of ptr = " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    //case 2 in is  bad practice
    //int *ptr_test{};
    //*ptr_test = 55;

    //cout << "value = " << *ptr_test << endl; 

    //case 3 best way
    int *test{nullptr}; // intilize with null at time of starting 
    test = new int; // allocate the memory 
    *test = 33; // put the value at the allocated memory 
    cout << "value = " << *test << " " << "address of pointer = " << test << endl; //use it 

    // return the memory to OS
    delete test; // after complation of the ptr use delete it 
    test = nullptr; // asigne to nullptr 


    // case 4 other good way to use dynamic memory allocation
    int *ptr1{new int};
    int *ptr2{new int(22)};
    int *ptr3{new int {30}};

    cout << "value of ptr1 = " << *ptr1 << " " << "address of ptr1 = " << ptr1 << endl;
    cout << "value of ptr2 = " << *ptr2 << " " << "address of ptr2 = " << ptr2 << endl;
    cout << "value of ptr3 = " << *ptr3 << " " << "address of ptr3 = " << ptr3 << endl;

    delete ptr1;
    ptr1 = nullptr;

    delete ptr2;
    ptr2 = nullptr;

    delete ptr3;
    ptr3 = nullptr;

    return 0;
}