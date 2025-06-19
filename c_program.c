// #include <stdio.h>
// int main(){
//     char star;
//     printf("what is star");
//     scanf("%c",&star);
//     printf("star is %c", star);
//     return 0;
// }


//simple addition code 

// #include <stdio.h>
// int main (){
//     int a = 45;
//     int b = 55;
//     int sum;
//     sum = a+b;
//     printf("%d",sum);
//     return 0;
// }

//simple addition code 
// #include <stdio.h>
// int main(){
//     int a = 7;
//     int b = 3;
//     int c = a+b;
//     printf("%d",c);
//     return 0;
// }

//type declaration instructions
// #include <stdio.h>
// int main (){
//     int a = 5;
//     int b = a;
//     int c = b+1;
//     printf("%d",c);
//     return 0;
// }

// //arithmetic instructions
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a = 6;
//     int b = 6;
//     int c = 10;
//     int d = a+b-c;
//     printf("%d",d);
//     return 0;
// }

//type conversion (forcefully transferring 4 biits in 2 bits);
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a = (int)1.999999;
//     printf("%d",a);
//     return 0;
// }

//associativity for same precedence;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a = 5*(2/2)*3;
//     printf("%d",a);
//     return 0;
// }

//relational operators;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",4>3);
//     return 0;
// }

//logical operators && both variables need to be true;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",4>3 && 5>2);
//     return 0;
// }

//logical operators || 2 var need to be false ;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",4>3 || 5<2);
//     return 0;
// }

//logical operators !;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",!4>3 || 5>10);
//     return 0;
// }

//assignment operators a = a+b a+=b;
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a = 2;
//     int b = 9;
//     a+=b;
//     printf("%d",a);
//     return 0;
// }

#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);


    return 0;
}