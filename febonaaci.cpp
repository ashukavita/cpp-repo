#include <iostream>

int main(void){

    int n{};
    int temp{0}, t1{0}, t2{1};
    std::cout << "Enter the number = " << std::endl;
    std::cin >> n;

    for(int i{0}; i<n; i++){
        if (i == 1){
            std::cout << t1 << ",";
            continue;
        }

        if(i == 2){
           std::cout << t2 <<  ","; 
           continue;
        }

        temp = t1 + t2;
        t1 = t2;
        t2 = temp;

        std::cout << temp << ", ";
    }
}