// Program to find the average of n numbers using arrays

#include <stdio.h>
int main() {

  int marks[10], i, n, sum = 0;
  float average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    scanf("%d", &marks[i]);
          
    // adding integers entered by the user to the sum variable
    sum += marks[i];
    // sum = sum + marks[i];
  }

  average = (float) sum / n;
  printf("Average = %.2f", average);

  return 0;
}
