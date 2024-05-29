#include<iostream>

using namespace std;

class test {
    private:
        int count;
    public:
        test(): count{8}{}
    
        // operator overloading
        void operator --(){
            count = count - 3;
        }

        void operator ++(){
            count = count + 50;
        }

        void print(){
            cout << "value of the count = " << count << endl;
        }
};
 
 int main(){

    test obj;
    --obj; // -- operator calling 
    obj.print();
    ++obj; // ++ operator calling
    obj.print();

    return 0;
 }