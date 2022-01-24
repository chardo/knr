#include <stdio.h>

// returns the first index at which any character from "right" is found in "left"
int any(char left[], char right[]) {
  int index = -1;
  for (int i = 0; right[i] != '\0'; i++) {
    for (int j = 0; left[j] != '\0'; j++) {
      if ((index == -1 || j < index) && left[j] == right[i]) {
        index = j;
        
        // can't get lower than this!
        if (index == 0) return index;
      }
    }
  }
  return index;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Must provide 3 args\n");
    return -1;
  }

  printf("%d\n", any(argv[1], argv[2]));
  return 0;
}
