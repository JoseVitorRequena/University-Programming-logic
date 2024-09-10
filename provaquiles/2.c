#include <stdio.h>
	
int fib(int x){
	if(x<=3) return x;
	else return fib(x-1)+fib(x-2)+fib(x-3);
}
int main(){
	printf("%d", fib(4));
	return 0;
}
