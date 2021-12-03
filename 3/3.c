#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp;
  char buff[512+1];
  int occ[2][512] = {0};
  int i, j, len;

  char mcb[512+1], lcb[512+1];

  fp = fopen("input.txt", "r");
  while (!feof(fp) && (fscanf(fp, "%s", buff) == 1)) {
    for (j = 0; j < strlen(buff); j++) {
        len = strlen(buff);
        if (buff[j] == '0') {
            occ[0][j]++;
        } else if (buff[j] == '1') {
            occ[1][j]++;
        }
    }
  }

  for (i = 0; i >= 0; i--) {
      if (occ[0][i] > occ[1][i]) {
          mc
      } 
  }

  return 0;
}