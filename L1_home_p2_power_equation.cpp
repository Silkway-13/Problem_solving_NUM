#include <stdio.h>
#include <math.h>

int main() { 
   int a, b, c, d;
      float x1, x2;
      scanf("%d%d%d", &a, &b, &c);
      d = b * b + 4 * a * c;
      if(d > 0) { 
            x1 = (- b + sqrt(b * b - 4 * a * c)) / ((float)2 * a);
            printf("x1 = %.f\n", x1);
            x2 = (- b - sqrt(b * b - 4 * a * c)) / ((float)2 * a);
            printf("x2 = %.f", x2);
      } else if (d == 0) {
            x1 = -b / (float) 2 * a;
            printf("%.f\n", x1);
      } else printf("no decide.");
}