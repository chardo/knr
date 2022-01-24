#include <stdio.h>

// deletes all characters in s2 from s1
// not optimal but don't wanna build an ascii-table-sized array
void squeeze(char s1[], char s2[]) {
  int k;
  for (int i = 0; s2[i] != '\0'; i++) {
    char badChar = s2[i];
    k = 0;
    for (int j = 0; s1[j] != '\0'; j++) {
      if (s1[j] != badChar) {
        s1[k++] = s1[j];
      }
    }
    s1[k] = '\0';
  }
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Please provide exactly 2 arguments\n");
    return -1;
  }

  squeeze(argv[1], argv[2]);
  printf("%s\n", argv[1]);
}
