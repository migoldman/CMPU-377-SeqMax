
/* Program: seqmax.c
* Author: Michael Goldman *
* Description:
* Write a program that finds the max of N numbers.
* The program will prompt the user for a list of
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
* dynamic memory allocation. */

/*
* initialize n elements of numbers array to -1 */
void init_numbers(int n, int* numbers) { 
	printf("Please enter %d numbers\n", n);

	int *p = numbers;
	int *end = p+n;
	
	while(p < end) {
		scanf("%d", p);
		printf("Got it!");
		p++;
	}
	printf("\n");
}


void print_numbers(int n, int* numbers) { 
	printf("You entered %d numbers and they are...\n", n);
	int *p = numbers;
	int *end = p + n;

	while(p < end) {
		printf("%d\n", *p);
		p++;
	}
}
/*
* find max from first n numbers in given array */
int find_max(int n, int* numbers) { 
	printf("Now to find the max\n");
	int *p = numbers;
	int *end = p + n;
	int max = *p;

	while(p < end) {
		if(*p > max) {
			max = *p;
		}
		p++;
	}
	printf("The max is %d\n", max);
	return max;
}

int main() {
	int n, *p;
	
	printf("You get to decide how much memory we use!\n");
	printf("How long do you want your array to be?\n");
		scanf("%d", &n);
	p = (int*)malloc(n*sizeof(int));
	init_numbers(n,p);
	print_numbers(n,p);
	find_max(n,p);
	free(p);
	printf("Let my memory go!\n");

	printf("Jobs done!\n");

	
}

