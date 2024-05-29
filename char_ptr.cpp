// small trial for char pointer
#include <iostream>

int main(){

    const char* msg{"Hello World!"}; // without const it will give error 

    //*msg = "B"; //this is not allowed if const string is there
    std::cout << "msg  = " << msg << std::endl;
    std::cout << "msg derefrence = " << *msg << std::endl;

    // if user want to change in string.
    char msg_1[] = "Hello World !";
    msg_1[4] = 'C';
    std::cout << "msg_1  = " << msg_1 << std::endl;
}
