/*
Compile: make fibonacci
Run: ./fibonacci
*/

#include "base.h"


void fibonacci_recursive_test();

void fibonacci_iterative_test();

int fibonacci_recursive(int n);

int fibonacci_iterative(int n);

//Aufgabe a)

void fibonacci_recursive_test(){
    check_expect_i(fibonacci_recursive(0), 0);
    check_expect_i(fibonacci_recursive(1), 1);
    check_expect_i(fibonacci_recursive(2), 1);
	check_expect_i(fibonacci_recursive(3), 2);
	check_expect_i(fibonacci_recursive(4), 3);
	check_expect_i(fibonacci_recursive(5), 5);

}



void fibonacci_iterative_test(){
    check_expect_i(fibonacci_iterative(0), 0);
    check_expect_i(fibonacci_iterative(1), 1);
    check_expect_i(fibonacci_iterative(2), 1);
	check_expect_i(fibonacci_iterative(3), 2);
	check_expect_i(fibonacci_iterative(4), 3);
	check_expect_i(fibonacci_iterative(5), 5);

}

	
//Aufgabe b)

int fibonacci_recursive(int n){ 
	if (n == 0){
		return 0;
	} 
	
	if (n == 1){
			
	return 1;
	
	} 
		
	if (n >= 2){
				
	return fibonacci_recursive (n-1) + fibonacci_recursive (n-2); 
	}
		
			
return 0;	
}


//Aufgabe c

int fibonacci_iterative(int n) {
int k; // auxiliary variable
int i; // auxiliary variable
int j; // auxiliary variable
int l; // auxiliary variable
		
i = 0; // value to begin from i
j = 1; // value to begin from j	

	if (n == 0){
		return 0;
	} 
	
	if (n == 1){
			
	return 1;
	
	} 

	if (n >= 2){

		for(k=1; k<=n; ++k){
		
		l =	j;
		j = i;   // value from i is the new value from j (j is the last fibonaccinumber)
		
		i = j + l;		// i is the Fibonaccinumber
	}
	return i;
}
		
return 0;
}


// Aufgabe d 

void timing(void) {
	
for(n=0; n<=45; n = n+5)	
int fibonacci_recursive(int n){ 
	if (n == 0){
		return 0;
	} 
	
	if (n == 1){
			
	return 1;
	
	} 
		
	if (n >= 2){
				
	return fibonacci_recursive (n-1) + fibonacci_recursive (n-2); 
	}
		
			
return 0;	
}




int fibonacci_iterative(int n) {
int k; // auxiliary variable
int i; // auxiliary variable
int j; // auxiliary variable
int l; // auxiliary variable
		
i = 0; // value to begin from i
j = 1; // value to begin from j	

	if (n == 0){
		return 0;
	} 
	
	if (n == 1){
			
	return 1;
	
	} 

	if (n >= 2){

		for(k=1; k<=n; ++k){
		
		l =	j;
		j = i;   // value from i is the new value from j (j is the last fibonaccinumber)
		
		i = j + l;		// i is the Fibonaccinumber
	}
	return i;
}
 printf(i, );	
return 0;
}
}
/*
d)
i   fib(i)  time_iter [ms]  time_rek [ms]
0...
5...
...
45...
*/

int main(void) {
    fibonacci_recursive_test();
    fibonacci_iterative_test();
	timing();
 return 0;
}
