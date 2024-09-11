#include <stdio.h>
	
int fib(int x){
	if(x<=3) return x;
	else return fib(x-1)+fib(x-2)+fib(x-3);
}

int fibonnaci(int x){
	int t1 = 0, t2 = 1, t3 = 2, t4 = 3;
	int nextTerm = t1 + t2 + t3 + t4;

	for (int i = 5; i <= x; ++i) {
		t1 = t2;
		t2 = t3;
		t3 = t4;
		t4 = nextTerm;
		nextTerm = t2 + t3 + t4;
	}
	return nextTerm;
}

int main(){
	printf("%d\n", fib(9));
	printf("%d\n", fibonnaci(9));
	return 0;
}
