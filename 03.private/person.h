//
// Created by benny on 2022/4/28.
//

#ifndef HELLOC_03_PRIVATE_PERSON_H_
#define HELLOC_03_PRIVATE_PERSON_H_

typedef struct {

} Person;

Person *PersonNew(char const *name, int age, char const *intro);

char const *PersonGetName(Person const *p);

int PersonGetAge(Person const *p);

void PersonToString(Person const *p);

void PersonDestroy(Person **ptr);

void PersonSetIntro(Person **ptr, char const *intro);

#endif //HELLOC_03_PRIVATE_PERSON_H_
