//c program to fibanacci series of n numbers
#include <stdio.h>
int main() {
    int i=1,t1 = 0,t2 = 1,n,nextTerm;
    scanf("%d", &n);
    while (i <= n) {
        printf("%d\t", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        ++i;
    }
    return 0;
}
