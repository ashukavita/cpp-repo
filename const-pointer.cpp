#include <iostream>

int main(void){

    // Case 1: non const pointer to non const value

    int val{12};
    int* ptr{nullptr};

    ptr = &val;

    //std::cout << "Default value of pointer = " << *ptr << std::endl;
    //std::cout << "Default address of pointer = " << ptr << std::endl;
    //change the value pointed by pointer 
    *ptr = 20; 
    //std::cout << "After changing the value of pointer = " << *ptr << std::endl;
    // change the address of pointer 
    int val_2{100};

    ptr = &val_2;
    //std::cout << "After changing the address of pointer = " << ptr << std::endl;


    // Case 2: pointer pointing to a const data 
    int val_3{233};
    const int* non_const_ptr{&val_3}; // here data is constant not pointer
    //std::cout << "Default address of pointer = " << non_const_ptr << std::endl;

    //so if we are gonig to change the value through pointer then compiler will through error
    // error: assignment of read-only location '* non_const_ptr'
    //*non_const_ptr = 300;

    //but in this case we can change the pointer pointing address 
    // we can chanage data direct to variable not using pointer
    int temp{100};
    non_const_ptr = &temp;

    //std::cout << "After changing the address of pointer = " << non_const_ptr << std::endl;

    //Case 3: pointer and data both is constant

    const int num{5};
    const int* const ptr_con{&num};

    std::cout << "Const data = " << num << std::endl;
    std::cout << "Const pointer = " << ptr_con << std::endl;
    std::cout << "Const pointer = " << *ptr_con << std::endl;

    int num_cha{10};
    //ptr_con = &num_cha; //error: assignment of read-only variable 'ptr_con'
    // here user can not change poiter and value.


    // case 4: const pointer to non const data 

    int num1{456};
    int* const p_num{&num1};

      


}
