#include<iostream>
using namespace std;
using namespace std::string_literals;

int main(void){

    //is alpha numaric
    cout << "check for alpha numeric = " << isalnum('C') << endl;
    cout << "check for alpha numeric = " << isalnum('^') << endl;

    // std::string
    string test{"HELLO WORLD"};
    cout << "Test string = " << test << endl;
    //using string literals
    string tree{"my"s + " name"};
    cout << "Tree String = " << tree << endl;

    //using append
    string t{"Hello"};
    string t2{"Append"};
    cout << "Appended string = " << t.append(t2) << endl;
    
    return 0;

}