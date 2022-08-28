//Write a C program  to calculate grades of students based on their marks. [Follow the grading system of GUB]
//https://gpacalculatorbd.net/green-university-grading-system/

#include <stdio.h>

int main(){
    float mark;
    printf("Enter your mark: ");
    scanf("%f", &mark);

    if(mark >= 80 && mark <= 100) printf("A+(4.00) Excellent.\n");
    else if(mark >= 75 && mark < 80) printf("A(3.75) Excellent.\n");
    else if(mark >= 70 && mark < 75) printf("A-(3.50) Very Good.\n");
    else if(mark >= 65 && mark < 70) printf("B+(3.25) Good.\n");
    else if(mark >= 60 && mark < 65) printf("B(3.00) Good.\n");
    else if(mark >= 55 && mark < 60) printf("B-(2.75) Good.\n");
    else if(mark >= 50 && mark < 55) printf("C+(2.50) Average.\n");
    else if(mark >= 45 && mark < 50) printf("C(2.25) Average.\n");
    else if(mark >= 40 && mark < 45) printf("D(2.00) Below Average.\n");
    else if(mark >= 0 && mark < 40) printf("F(0.00) Failing.\n");
    else printf("Wrong Input.\n");

    return 0;
}