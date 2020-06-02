// hello.c
// #include <stdio.h>
//
// int main(){
// 	printf("Hello, world!\n");
// 	return 0;
// }



// C program to demonstrate typedef
// #include <stdio.h>
//
// // After this line BYTE can be used
// // in place of unsigned char
// typedef unsigned char BYTE;
//
// int main()
// {
// 	BYTE b1, b2;
// 	b1 = 'f';
// 	printf("%c ", b1);
// 	return 0;
// }



// C/C++ program to demonstrate return value
// of printf()
// #include <stdio.h>
//
// int main()
// {
// 	char st[] = "CODING";
//
// 	printf("While printing ");
// 	printf(", the value returned by printf() is : %d",
// 									printf("%s", st));
//
// 	return 0;
// }



// C/C++ program to demonstrate return value
// of printf()
//
// #include <stdio.h>
// int main()
// {
// 	int n = 123456789;
// 	char st[] = "CODING";
//
// 	// printf("While printing ");
// 	// printf(", the value returned by printf() is : %d",
// 	// 								printf("%d", n));
//
// 	printf("%d\n", n);
// 	printf("%s\n", st);
// 	printf(" %d, djeo",printf("%s", st));
// 	return 0;
// }



// C/C++ program to demonstrate return value
// of printf()
//
// #include <stdio.h>
// int main()
// {
// 	char a[100], b[100], c[100];
//
// 	// scanf() with one input
// 	printf("\n First scanf() returns : %d",
// 							scanf("%s", a));
//
// 	// scanf() with two inputs
// 	printf("\n Second scanf() returns : %d",
// 					scanf("%s%s", a, b));
//
// 	// scanf() with three inputs
// 	printf("\n Third scanf() returns : %d",
// 				scanf("%s%s%s", a, b, c));
//
// 	return 0;
// }



/* printf example */
// #include <stdio.h>
//
// int main()
// {
//    printf ("Characters: %c %c \n", 'a', 65);
//    printf ("Decimals: %d %ld\n", 1977, 650000L);
//    printf ("Preceding with blanks: %5d \n", 1977);
//    printf ("Preceding with zeros: %07d \n", 1977);
//    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
//    printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
//    printf ("Width trick: %*d \n", 3, 10);
//    printf ("Width trick: %0*d \n", 3, 10);
//    printf ("%s \n", "A string");
//    return 0;
// }



//////////////////////////////////////
///////////Pointer////////////////////
// #include <stdio.h>
//
// int main () {
//
//    int  var1;
//    char var2[10];
//
//    printf("Address of var1 variable: %p\n", &var1  );
//    printf("Address of var2 variable: %p\n", &var2  );
//
//    return 0;
// }



// #include <stdio.h>
// int main(void)
// {
// 	// declare variables
// 	int a;
// 	float b;
// 	char c;
//
// 	//Declare and Initialize pointers
// 	int *ptr_a = &a;
// 	float *ptr_b = &b;
// 	char *ptr_c = &c;
//
// 	//Printing address by using pointers
// 	printf("Address of a: %p\n", ptr_a);
// 	printf("Address of b: %p\n", ptr_b);
// 	printf("Address of c: %p\n", ptr_c);
// 	printf("Address of c: %p\n", &c);
//
// 	return 0;
// }



// #include <stdio.h>
// int main () {
//
//    int  var = 20;   /* actual variable declaration */
//    int  *ip;        /* pointer variable declaration */
//
//    ip = &var;  /* store address of var in pointer variable*/
//
//    printf("Address of var variable: %p\n", &var  );
//
//    /* address stored in pointer variable */
//    printf("Address stored in ip variable: %p\n", ip );
//
//    /* access the value using the pointer */
//    printf("Value of *ip variable: %d\n", *ip );
//
//    //printf("Value of *ip variable: %d\n", ip );
//
//    return 0;
// }



// #include <stdio.h>
// int main () {
//
//    	int  *ptr = NULL;
//    	printf("The address of ptr is : %p\n", ptr  );
// 	printf("The value of ptr is : %d\n", *ptr  );    //there is problem
//
//    	return 0;
// }



// #include <stdio.h>
// int main () {
//
// 	int* pc, c;
// 	c = 5;
// 	pc = &c;
// 	// printf("%d", *pc);
// 	printf("Address of c is %p \n", &c);
// 	printf("Address of c is %p\n", pc);
// 	printf("Value of c is %d\n", *pc);
// 	printf("Value of c is %d\n", c);
//
//    	return 0;
// }



// #include <stdio.h>
// int main () {
//
// 	int* pc, c;
// 	c = 5;
// 	pc = &c;
// 	printf("Address of c is %p \n", &c);
// 	c = 4;
// 	// printf("%d", *pc);
// 	printf("Address of c is %p \n", &c);
// 	printf("Address of c is %p\n", pc);
// 	printf("Value of c is %d\n", *pc);
// 	printf("Value of c is %d\n", c);
//
//    	return 0;
// }



// #include <stdio.h>
// int main () {
//
// 	int* pc, c;
// 	c = 5;
// 	pc = &c;
// 	printf("Address of c is %p \n", &c);
// 	*pc = 1;
// 	// printf("%d", *pc);
// 	printf("Address of c is %p \n", &c);
// 	printf("Address of c is %p\n", pc);
// 	printf("Value of c is %d\n", *pc);
// 	printf("Value of c is %d\n", c);
//
//    	return 0;
// }



// #include <stdio.h>
// int main () {
//
// 	int* pc, c, d;
// 	c = 5;
// 	d = -15;
// 	pc = &c; printf("%d\n", *pc); // Output: 5
// 	pc = &d; printf("%d", *pc); // Output: -15
//
//    	return 0;
// }



// #include <stdio.h>
// int main()
// {
//    int* pc, c;
//
//    c = 22;
//    printf("Address of c: %p\n", &c);
//    printf("Value of c: %d\n\n", c);  // 22
//
//    pc = &c;
//    printf("Address of pointer pc: %p\n", pc);
//    printf("Content of pointer pc: %d\n\n", *pc); // 22
//
//    c = 11;
//    printf("Address of pointer pc: %p\n", pc);
//    printf("Content of pointer pc: %d\n\n", *pc); // 11
//
//    *pc = 2;
//    printf("Address of c: %p\n", &c);
//    printf("Value of c: %d\n\n", c); // 2
//    return 0;
// }



#include <stdio.h>
int main()
{
   int* pc, c, d;
   // char* filename;

   c = 22;
   // *filename = 'a';
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   printf("%p",&pc);
   // printf("%s\n", filename);

   return 0;
}
