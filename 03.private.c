//
// Created by benny on 2022/4/17.
//
#include <stdlib.h>
#include <stdio.h>

#include "03.private/person.h"

int main() {
  Person *p = PersonNew("bennyhuo", 10, NULL);
  printf("name: %s\n", PersonGetName(p));
  printf("age: %d\n", PersonGetAge(p));
  PersonToString(p);
  PersonSetIntro(&p, "Kotlin GDE");
  PersonToString(p);
  PersonDestroy(&p);

  return 0;
}