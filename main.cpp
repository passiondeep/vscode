#include <iostream>
#include <limits.h>
using namespace std;

class A
{
private:
    /* data */
public:
    A(/* args */);
    virtual ~A();
    virtual void fun(){
        std::cout<<"A fun"<<endl;
    }
};

A::A(/* args */)
{
    std::cout<<"A"<<endl;
}

A::~A()
{
    std::cout<<"~A"<<endl;
}

class B: public A
{
private:
    /* data */
public:
    B(/* args */);
    ~B();
    void fun(){
        std::cout<<"B fun"<<endl;
    }
};

B::B(/* args */)
{
    std::cout<<"B"<<endl;
}

B::~B()
{
    std::cout<<"~B"<<endl;
}

class Solution {
public:
    int arrangeCoins(int n) {
        int left = 1, right = n;
        while(left < right){
            float mid = left + (right-left+1)/2;
            std::cout<<"left:"<<left<<" mid:"<<mid<<" right"<<right<<endl;
            if(mid/2 <= n / (mid+1)){
                left = mid;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
};

int main(int argc, char **argv){
    // Solution s;
    // std::cout<< s.arrangeCoins(2146467959)<<endl;
    std::cout<< (1<<30) << " " << 0x7fffffff<<endl;
    return 0;
}