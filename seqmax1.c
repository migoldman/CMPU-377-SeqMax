/* Program: seqmax.c
* Author: Michael Goldman
*
* Description:
* Write a program that finds the max of N numbers.
* The program will prompt the user for a list of
* numbers, which will be read from stdin using
* the C library function, scanf().
*
* This is a first program in C. While the problem
* is simple, many core features of the language
* will be mastered along the way.
*
* This program will use arrays, which in C are
* just pointers. You will write three versions of
* the program, one using array notation ( []'s ),
* a second using pointers ( * ), and a third using
* dynamic memory allocation.
*/


/*
* Fill an array of int values, prompting the user from stdin;
* echo the list of numbers entered, then find the max and print it
*/

void init_number(int n, int numbers[]) {
	printf("Please enter %d numbers\n", n);

	for(int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}
	printf("\n");
}

void print_number(int n, int numbers[]) {
	printf("You have %d numbers in your array, and they are...\n", n, *numbers);
	for(int i = 0; i < n; i++) {
		printf("%d\n", numbers[i]);
	}
	printf("\n");
}

int find_max(int n, int numbers[]) {
	printf("How about we find the max, eh?\n");
	int max = numbers[0];
	for(int i = 1; i < n; i++) {
		if(numbers[i] > max) {
			max = numbers[i];
		}
	}
	printf("The max is %d\n", max);
	return max;
	//I don't understand why this doesn't return anything...

}

int main() {
	int array[50], n;
	
	printf("Using Arrays\n");
	printf("How long do you want your array to be? (Can handle up to 50 digits)\n");
		scanf("%d", &n);


	init_number(n, array);
	print_number(n, array);
	find_max(n,array);

	printf("Jobs done!\n");

	return 0;
}
