/* Program: seqmax.c
 Author: Michael Goldman 
 Description:
 Write a program that finds the max of N numbers.
 The program will prompt the user for a list of
* numbers, which will be read from stdin using
* the C library function, scanf().
*
* This is a first program in C. While the problem
* is simple, many core features of the language
* will be mastered along the way. *
* This program will use arrays, which in C are
* just pointers. You will write three versions of
* the program, one using array notation ( []'s ),
* a second using pointers ( * ), and a third using
* dynamic memory allocation. 
* Assigned: Thu, 1/29/2015 Due: Thu, 2/05/2015
*


* initialize n elements of numbers array to -1 */


void init_numbers(int n, int* numbers) { 
	printf("Please enter %d numbers\n", n);

	int *p = numbers;
	int *end = p + n;

	while(p < end) {
		scanf("%d", p);
		printf("Got it! Next one: ");
		p++;
	}
	printf("\n");
	printf("Enough! I am done with the numbers\n");
}

void print_numbers(int n, int* numbers) {
	printf("You are %d numbers and they are...\n", n);
	int *p = numbers;
	int *end = p + n;
	while(p < end) {
		printf("%d\n", *p);
		p++;
	}
}

int find_max(int n, int* numbers) { 
	printf("How about we find the max, eh?\n");
	int *p = numbers;
	int *end = p + n;
	int max = *p;

	while(p < end) {
		if(*p > max) {
			max = *p;
			p++;
		}
		p++;
	}
	printf("The max is %d\n", max);
	return max;
}

int main() {
	int array[50], n;
	int *p = array;

	printf("Lets get some pointers up in here\n");
	printf("How long do you want your array to be? (Can handle up to 50)\n");
	scanf("%d", &n);

	init_numbers(n, p);
	print_numbers(n,p);
	find_max(n,p);

}
