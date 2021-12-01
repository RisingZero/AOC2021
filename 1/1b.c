#include <stdio.h>

int main(void) {
  FILE *fp;
  int numIncreasing = 0;
  int vRead;
  int value, prev, prevprev, prevprevprev, i = 0;

  fp = fopen("input.txt", "r");
  while (!feof(fp) && (fscanf(fp, "%d", &value) == 1)) {
    if (i > 2) {
      if (value+prev+prevprev > prev+prevprev+prevprevprev)
        numIncreasing++;
    }

    i++;
    prevprevprev = prevprev;
    prevprev = prev;
    prev = value;
  }

  printf("Tot increasing: %d\n", numIncreasing);
  
  return 0;
}