#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp;
  char buff[512];
  int depth = 0, horz = 0, val;

  fp = fopen("input.txt", "r");
  while (!feof(fp) && (fscanf(fp, "%s %d", buff, &val) == 2)) {
      if (strcmp(buff, "forward") == 0) {
          horz += val;
      } else if (strcmp(buff, "up") == 0) {
          depth -= val;
      } else if (strcmp(buff, "down") == 0) {
          depth += val;
      }
  }
  
    printf("Horz: %d, Depth: %d\n", horz, depth);
    printf("Multiplied: %d\n", horz*depth);

  return 0;
}