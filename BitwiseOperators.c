#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int mayor_y=0,mayor_o=0,mayor_x=0,a,b;
  for(a=1; a<=n;a++){
  	for(b=a+1; b<=n; b++){
  		if((a&b)>mayor_y && (a&b)<k)
  			mayor_y=(a&b);
		if((a|b)>mayor_o && (a|b)<k)
  			mayor_o=(a|b);
		if((a^b)>mayor_x && (a^b)<k)
  			mayor_x=(a^b);
  	}
  }
  printf("%d\n%d\n%d",mayor_y,mayor_o,mayor_x);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
    return 0;
}

/*
int a,b,c=0,d=0,e=0;

for (a=1;a<n;a++)
{
  for (b=n;b>a;b--)
  {
      if ((a&b)<k && (a&b)>c) {c = a&b;}
      if ((a|b)<k && (a|b)>d) {d = a|b;}
      if ((a^b)<k && (a^b)>e) {e = a^b;}
  }
}
printf ("%d\n%d\n%d", c,d,e);
}
We initialize c,d,e i.e, (a&b), (a|b), (a^b) the result of three operations to zero intially so that we can later on compare it with the output.
We meet the condition of a < b with the use of loops.
The conditions inside if ensure that the outputs of the operations are less than k as it is stated in the question and if they are greater than 0 then they get assigned to c,d and e in their respective cases.

*/
