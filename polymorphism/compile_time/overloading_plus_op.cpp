#include<iostream>
using namespace std;

class comp_test{
    private: 
        int real, imag;
    public:
        comp_test(int r = 0, int i = 0){
            real = r;
            imag = i;
        }

        comp_test operator+(comp_test& obj){
            comp_test res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void display(){
            cout << "Real = " <<  real << " " << "imag = " << imag << endl;
        }

};

int main(void){
    comp_test obj1(10, 20), obj2(40,50);
    comp_test res = obj1 + obj2;
    res.display();
    return 0;
}