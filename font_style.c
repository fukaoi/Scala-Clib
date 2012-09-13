#include <stdio.h>
#include <stdlib.h>

void font_color(char* cname) {
  int cnumber = 0;
  
  if (strcmp(cname, "black") == 0) {
    cnumber = 30;
  } else if (strcmp(cname, "red") == 0) {
    cnumber = 31;
  } else if (strcmp(cname, "green") == 0) {
    cnumber = 32;
  } else if (strcmp(cname, "yellow") == 0) {
    cnumber = 33;
  } else if (strcmp(cname, "blue") == 0) {
    cnumber = 34;
  } else if (strcmp(cname, "magenta") == 0) {
    cnumber = 35;
  } else if (strcmp(cname, "cyan") == 0) {
    cnumber = 36;
  } else if (strcmp(cname, "gray") == 0) {
    cnumber = 37;
  } else if (strcmp(cname, "default") == 0) {
    cnumber = 39;
  } else {
    return;
  }

  fprintf(stderr, "\x1B[%dm", cnumber);
}
