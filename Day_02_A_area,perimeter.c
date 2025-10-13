//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int length,breadth,perimeter,area;
    printf("Enter the value of length and breadth");
    scanf("%d %d", &length,&breadth);
    perimeter = (2*length+2*breadth);
     area = (length*breadth);
     printf("The value of perimeter is :");
     printf("%d\n", perimeter);
     printf("The value of area of the rectangle is: ");
     printf("%d", area);
     return 0;
}
