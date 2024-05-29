#include<iostream>

using namespace std;

int main(void){

    size_t size{10};
    //case 1
    double *ptr1{new double[size]}; // allocate array of duoble and initialized with garbage value

    for (int i = 0; i < size; i++){
        cout << ptr1[i] << " "; 
    }
    cout << endl;


    //case 2
    double *ptr2{new double[size]{}}; // allocate array of duoble and initialized with zero
     for (int i = 0; i < size; i++){
        cout << ptr2[i] << " "; 
    }
    cout << endl;

    //case 3
    double *ptr3{new double[size]{1,2,3,4,5}}; // allocate array of duoble and initialized first five with given number 
     for (int i = 0; i < size; i++){
        cout << ptr3[i] << " "; 
    }
    cout << endl;

    //case 4 if memory allocation failled then not throw exception
    double *ptr4{new(nothrow) double[size]{4,5,7,8,9}}; 
     for (int i = 0; i < size; i++){
        cout << ptr4[i] << " "; 
    }
    cout << endl;

    delete [] ptr1;
    ptr1 = nullptr;

    delete [] ptr2;
    ptr2 = nullptr;

    delete [] ptr3;
    ptr3 = nullptr;

    delete [] ptr3;
    ptr3 = nullptr;


    //static array vs dynamic array
    //case 1 
    // static will go to stack memory location 
    // std::size() we can use on static array 
    // for(auto s: static_array_name) range based will work 

    //case 2
    // dynamic will go to head memory location 
    // std::size() we can not use on dynamic array 
    // for(auto s: static_array_name) range based will not work 

    return 0;
}
