#include <stdio.h>

int main(void) {
  FILE *fp;
  int numIncreasing = 0;
  int value, prev, i = 0;

  fp = fopen("input.txt", "r");
  while (!feof(fp) && (fscanf(fp, "%d", &value) == 1)) {
    if (i > 0) {
      if (value > prev)
        numIncreasing++;
    }

    i++;
    prev = value;
  }

  printf("Tot increasing: %d", numIncreasing);
}