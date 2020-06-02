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
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %5d \n", 1977);
   printf ("Preceding with zeros: %07d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 3, 10);
   printf ("Width trick: %0*d \n", 3, 10);
   printf ("%s \n", "A string");
   return 0;
}
