//
// Created by benny on 2022/4/28.
//
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "person.h"

typedef struct {
  union {
    Person public_person;
    char const *name;
  };
  int age;
  char intro[];
} PersonInternal;

Person *PersonNew(char const *name, int age, char const *intro) {
  size_t intro_len = (intro ? strlen(intro) : 0) + 1;
  PersonInternal *p = (PersonInternal *) malloc(sizeof(PersonInternal) + intro_len);
  p->age = age;
  p->name = name;
  if (intro) {
    strcpy(p->intro, intro);
  } else {
    p->intro[0] = 0;
  }
  return &p->public_person;
}

char const *PersonGetName(Person const *p) {
  return ((PersonInternal *) p)->name;
}

int PersonGetAge(Person const *p) {
  return ((PersonInternal *) p)->age;
}

void PersonToString(Person const *const p) {
  PersonInternal *person_internal = (PersonInternal *) p;
  printf("Person{name=%s, age=%d, intro=%s}\n", person_internal->name, person_internal->age, person_internal->intro);
}

void PersonDestroy(Person **ptr) {
  if (ptr && *ptr) {
    free(*ptr);
    *ptr = NULL;
  }
}

void PersonSetIntro(Person **ptr, char const *intro) {
  if (ptr && *ptr) {
    PersonInternal *person = (PersonInternal *) *ptr;
    Person *new_person = PersonNew(person->name, person->age, intro);
    PersonDestroy(ptr);
    *ptr = new_person;
  }
}