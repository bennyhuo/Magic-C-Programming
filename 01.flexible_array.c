// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int age;
  char const *name;
  char intro[];
} Person;

Person *PersonNew(char const *name, int age, char const *intro) {
  size_t intro_len = (intro ? strlen(intro) : 0) + 1;
  Person *p = (Person *) malloc(sizeof(Person) + intro_len);
  p->age = age;
  p->name = name;
  if (intro) {
    strcpy(p->intro, intro);
  } else {
    p->intro[0] = 0;
  }
  return p;
}

void PersonToString(Person const *const p) {
  printf("Person{name=%s, age=%d, intro=%s}\n", p->name, p->age, p->intro);
}

void PersonDestroy(Person **ptr) {
  if (ptr && *ptr) {
    free(*ptr);
    *ptr = NULL;
  }
}

void PersonSetIntro(Person **ptr, char const *intro) {
  if (ptr && *ptr) {
    Person *person = *ptr;
    Person *new_person = PersonNew(person->name, person->age, intro);
    PersonDestroy(ptr);
    *ptr = new_person;
  }
}

int main() {
  Person *p = PersonNew("bennyhuo", 10, NULL);
  PersonToString(p);
  PersonSetIntro(&p, "Kotlin GDE");
  PersonToString(p);
  PersonDestroy(&p);
  return 0;
}