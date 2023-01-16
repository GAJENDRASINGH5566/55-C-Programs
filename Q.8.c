#include<stdio.h>
void main()
{
    int a, b, c ;
    clrscr() ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &a, &b) ;
    printf("\nBefore swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;
    c = a ;
    a = b ;
    b = c ;
    printf("\n\nAfter swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;
    getch();
}
