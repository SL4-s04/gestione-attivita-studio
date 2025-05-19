#include <stdio.h>
#include "item.h"
#include "info.h"

/*testing environment*/

item rec(int n, int n2) {
    if(n == 0) return n2;
    return n * rec(n - 1, n + n2);
}

item fib(int n) {
     if(n == 0 || n == 1) return 1;
     return fib(n - 1) + fib(n - 2);

}

int main(void) {
	
	printf("%d\n", rec(1, 2));
	printf("%d\n", fib(2));
}