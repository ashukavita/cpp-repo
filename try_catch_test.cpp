#include<iostream>

using namespace std;

int main(void){

    int a = 0;
    int b = 7;

    try{
        if (a == 0){
            throw a;
        }
        int ret = b/a;

    }catch(...){
        cout << "Got an exception in the source code " << endl;
    }
    return 0;
}
