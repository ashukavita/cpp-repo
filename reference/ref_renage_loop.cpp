#include<iostream>
#include <vector>
using namespace std;

int main(void){
    
    vector<int> test{1,2,4,5,};

    for(auto v: test){
        v = v* 10;  // it is changing the temp v vairable not actula memory 
    }

    for(auto vr: test){
        cout << vr << " ";
     }
     cout << endl;

     for(auto &vri: test){
        vri = vri * 10; // here vri is using reference so we can change actual memory
     }

     for(auto vr: test){
        cout << vr << " ";
     }
     cout << endl;



}