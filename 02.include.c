//
// Created by benny on 2022/4/17.
//
#include <stdio.h>
#define COLOR_BLUE "#0000FF"

int main() {
  char *color = COLOR_BLUE;
  int array[] = {
#include "predefined.h"
  };

  //region hide
  for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
    printf("%d\n", array[i]);
  }
  //endregion
  return 0;
}