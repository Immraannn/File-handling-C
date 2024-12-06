#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    float x=cbrt(10);
    int x2=__INT_MAX__;
    int x3=INT_MIN;
    long y=LONG_MAX;
    printf("%f\n",x);
    printf("%d\n",x2);
    printf("%d\n",x3);
    printf("%ld",x);
    return 0;
    
}
// OUTPUT-
// 2.154435
// 2147483647
// -2147483648
// 1073741824