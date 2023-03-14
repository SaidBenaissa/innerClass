#include <iostream>

class Outer{
public:
    class Inner{
    public:
        void helloInner(){
            std::cout << "Hello Inner" << std::endl;
        }

    };

    void helloOuter(){
        std::cout << "Hello Outer" << std::endl;
    }

    void createInner(){
        Inner inner;
        inner.helloInner();
    }


};

int main(int argc, const char * argv[]) {
    Outer outer;
    outer.createInner();
    return 0;
}