#include <iostream>
using namespace std;

class num{
    public:
    int data;
    num(int d=0): data(d) {

    }
    ~num(){

    }
    num& operator++(){
        ++data;
        return *this;
    }
    num operator++(int){
        num n(data);
        ++data;
        return n;
    }

};

int main(){
    num a(2);
    num b = a++;
    cout<<b.data<<" "<<a.data<<endl;
    return 0;
}