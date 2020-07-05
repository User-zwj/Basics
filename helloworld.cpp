// #include <iostream>
// using namespace std;
//
// int main(){
//    cout << "Hello World" << endl;
//    return 0;
// }



// // passing parameters by value
// #include <iostream>
// using namespace std;
//
// void duplicate (int a, int b, int c)
// {
//   a*=2;
//   b*=2;
//   c*=2;
// }
//
// int main ()
// {
//   int x=1, y=3, z=7;
//   duplicate (x, y, z);
//   cout << "x=" << x << ", y=" << y << ", z=" << z<<endl;
//   return 0;
// }



// // passing parameters by reference
// #include <iostream>
// using namespace std;
//
// void duplicate (int& a, int& b, int& c)
// {
//   a*=2;
//   b*=2;
//   c*=2;
// }
//
// int main ()
// {
//   int x=1, y=3, z=7;
//   duplicate (x, y, z);
//   cout << "x=" << x << ", y=" << y << ", z=" << z<<endl;
//   return 0;
// }



// // more than one returning value
// #include <iostream>
// using namespace std;
//
// void prevnext (int x, int& prev, int& next)
// {
//   prev = x-1;
//   next = x+1;
// }
//
// int main ()
// {
//   int x=1, y=10, z=3;
//   prevnext (x, y, z);
//   cout << "Previous=" << y << ", Next=" << z << endl;
//   return 0;
// }



// // default values in functions
// #include <iostream>
// using namespace std;
//
// int divide (int a, int b=2)
// {
//   int r;
//   r=a/b;
//   return (r);
// }
//
// int main ()
// {
//   cout << divide (12);
//   cout << endl;
//   cout << divide (20,4) << endl;
//   return 0;
// }



// // overloaded function
// #include <iostream>
// using namespace std;
//
// int operate (int a, int b)
// {
//   return (a/b);
// }
//
// float operate (float a, float b)
// {
//   return (a/b);
// }
//
// int main ()
// {
//   int x=5,y=2;
//   float n=5.0,m=2.0;
//   cout << operate (x,y);
//   cout << "\n";
//   cout << operate (n,m);
//   cout << "\n";
//   return 0;
// }



// // factorial calculator
// #include <iostream>
// using namespace std;
//
// long factorial (long a)
// {
//   if (a > 1)
//    return (a * factorial (a-1));
//   else
//    return (1);
// }
//
// int main ()
// {
//   long number;
//   cout << "Please type a number: ";
//   cin >> number;
//   cout << number << "! = " << factorial (number) << endl;
//   return 0;
// }



// // declaring functions prototypes
// #include <iostream>
// using namespace std;
//
// void odd (int a);
// void even (int a);
//
// int main ()
// {
//   int i;
//   do {
//     cout << "Type a number (0 to exit): ";
//     cin >> i;
//     odd (i);
//   } while (i!=0);
//   return 0;
// }
//
// void odd (int a)
// {
//   if ((a%2)!=0) cout << "Number is odd.\n";
//   else even (a);
// }
//
// void even (int a)
// {
//   if ((a%2)==0) cout << "Number is even.\n";
//   else odd (a);
// }



// #include <iostream>
// #include <cstdio>
//
// using namespace std;
//
// int main()
// {
//     int count = 10;
//     char str[10];
//     FILE* fp;
//
//     fp = fopen("file.txt","w+");
//     fputs("An example file\n", fp);
//     fputs("Filename is file.txt\n", fp);
//
//     rewind(fp);
//
//     while(feof(fp) == 0)
//     {
//         fgets(str,count,fp);
//         cout << str << endl;
//     }
//
//     fclose(fp);
//     return 0;
// }



#include <cstdio>
#include <cstring>

int main()
{
    char str[] = "Hello programmers";
    FILE *fp;

    fp = fopen("file.txt","w");

    if (fp)
    {
        for(int i=0; i<strlen(str); i++)
        {
            fputc(str[i],fp);
        }
    }
    else
        perror("File opening failed");

    fclose(fp);
    return 0;
}
