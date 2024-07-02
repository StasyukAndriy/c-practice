#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int age;
} Person;
void strongFree (Person** person){
    free(*person);
    *person = NULL;
}
Person* createNewPerson(int age){
    Person* pNewPerson = malloc(sizeof(Person));
    pNewPerson->age = age;
    return pNewPerson;
}
int main() {
    Person* Amy = createNewPerson(23);
    Person* Bob = createNewPerson(12);
    strongFree(&Amy);
    strongFree(&Bob);
    printf("%d", Amy->age);
    return 0;
}