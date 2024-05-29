#include<iostream>

using namespace std;

int main(void){

    int *ptr{new int{83}};
    if (ptr){
        cout << "value of ptr " << *ptr << endl;
    }
    else{
        cout << "Memory allocation failled !" << endl;
    }

    // now with free the ptr allocated memory asigen the ptr to some other address this will cause memory leak;
    //other case cause memory leak of without deleted older allocated memory, allocate other memory to the same pointer (double allocation)
    // other case local pointer allocation and not delete after uses end 

// proper way is 
    //delete ptr;
    //ptr = nullptr;

    int num{10};
    //ptr = new int{num};
    //cout << "value of ptr " << *ptr << endl;
    ptr = &num; // ptr pointed memeory address change but still the older memory is not free 
    return 0;
}