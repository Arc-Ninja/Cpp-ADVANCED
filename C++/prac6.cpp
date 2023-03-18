#include <iostream>
using namespace std;

class complex{
        double re,img;
        int count;
        static int n;
        public:
        
        complex(double r=0.0, double i=0.0):re(r),img(i) { 
            n += 1;
            count = n;
        }
        ~complex(){
            cout<<"Destructed! "<<count<<endl;
        }
        complex operator+(const complex &c1){
            complex r;
            r.re = re+c1.re;
            r.img = img+c1.img;
            return r;
        } 
    
    void display(){
        cout<<re<<" + i"<<img<<endl;
        cout<<"count = "<<count<<endl;
    }
    };
int complex :: n = 0;
int main(){
    complex c1(1,5),c2(2,3);
    cout<<"test"<<endl;
    complex c3 = c2+c1;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}