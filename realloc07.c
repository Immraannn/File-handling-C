#include<stdio.h>
int main(){
    int* ptr=(int*)malloc(10*4);
    printf("%p\n",ptr);
    ptr =realloc(ptr,20*4);
    printf("%p\n",ptr);

    return 0;
}