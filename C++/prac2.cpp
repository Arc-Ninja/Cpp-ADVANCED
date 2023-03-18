#include <stdio.h>
#include <stdint.h>
struct test{
    int32_t a;
    int32_t b;
};
void func(struct test* z){
    z->a = 5;
    z->b = 10;
}
void func2(struct test* data,int32_t value){
    data->a+=value;
    data->b+=value;
    printf("a:%i\tb:%i \n",data->a,data->b);
}
int main(){
    struct test data{2,3},car{12,32},test1{0,0};
    func(&test1);
    func2(&test1,5);
    func2(&data,10);
    func2(&car,20);
    
    
    
    return 0;
}