#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    int age;
    char fname;
};
int main() {
    void *ptr = malloc(sizeof(struct Student));
    struct Student *sptr = (struct Student*)ptr;
    sptr->id = 0xd557788a;
    sptr->age = 0xedd98dfa;
    sptr->fname = 'B';

    FILE *fbandar = fopen("Student.ban", "wb");

    if (fbandar != NULL) {
        fwrite(sptr, sizeof(struct Student), 1, fbandar);
        fclose(fbandar);
    }

    
    printf("------------------\n");

    fbandar = fopen("Student.ban", "rb");
    if (fbandar != NULL) {
        fread(sptr, sizeof(struct Student), 1, fbandar);
        fclose(fbandar);
    }
    printf("id: %x\n", sptr->id);
    printf("Fname: %c\n", sptr->fname);
    printf("age: %x\n", sptr->age);
    
    free(sptr);
    
return 0;

}