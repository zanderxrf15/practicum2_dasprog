#include <stdio.h>

int main(){
int n, maxCounts=0, number[100000], out;
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        scanf("%i", &number[i]);
    }

    for (int i = 0; i < n; i++) {
int counts = 0;

      for (int j = 0; j < n; j++) {
         if (number[j] == number[i])
         counts++;
      }

      if (counts > maxCounts) {
         maxCounts = counts;
      }
   }
   out= n-maxCounts;
   printf("%i", out);

}
