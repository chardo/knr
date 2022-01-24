#include <stdio.h>

// convert a hexadecimal string (optionally starting with "0x" or "0X") to its decimal int value
int htoi(char s[]) {
  int index = 0;
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    index = 2;
  }

  int result = 0;
  char c;
  while ((c = s[index]) && (c != '\0')) {
    int nextVal;
    if (c >= '0' && c <= '9') {
      nextVal = c - '0';
    } else if (c >= 'a' && c <= 'f') {
      nextVal = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
      nextVal = c - 'A' + 10;
    } else {
      printf("Error! Received invalid character: %c\n", c);
      return -1;
    }

    result *= 16;
    result += nextVal;

    ++index;
  }
  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Please provide exactly one argument\n");
    return 1;
  } else {
    printf("%d\n", htoi(argv[1]));
    return 0;
  }
}
