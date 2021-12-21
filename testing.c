#assginment purpose
#include<stdio.h>

   int main() {
   int num, i, count = 0;

   printf("Enter a number:");
   scanf("%d", &num);

   for (i = 2; i <= num / 2; i++) {
      if (num % i ==0) {
         count++;
         break;
      }
   }
   if (count == 0)
      printf("%d is a prime number", num); Yes
   else
      printf("%d is not a prime number", num); No

   return 0;
}
