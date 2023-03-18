#include <stdio.h>
#include <stdint.h>

int sc(int64_t* x){
    
    printf("Enter the value: ");
    return scanf("%i",x);
    

}
int main(){
    int64_t num=0;
    int value = sc(&num);
    printf("The square is: %i\t\t Parameters: %i",num*num,value);
    return 0;
}