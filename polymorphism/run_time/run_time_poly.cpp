#include<iostream>
using namespace std;

class shape{
    public:
        virtual void draw(void){
        cout << "This is shape class" << endl;
        }

};

class ractangle: public shape {
//class ractangle{
    public:
        void draw(void){
            cout << "This is rectangle class" << endl;
        }

        void print(void){
            cout << "in print function" << endl;
        }

};

int main(){
    shape *s;
    //shape sr;
    //sr.draw();
    ractangle obj;
    s = &obj;
    s->draw();
    //obj.print();
    return 0;
}