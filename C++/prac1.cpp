#include <stdio.h>
#include <stdint.h>

void append(int64_t* a,int64_t* b,int64_t num){
    *a +=num;
    (*b)++;

}

int main(){
    int64_t a = 0;
    int64_t b = 0;
    
    
    append(&a,&b,10);
    append(&a,&b,20);
    printf("a:%lli,b:%lli",a,b);
    
    return 0;
}