#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void input();
void inputp();
void pointerstruct();

struct Settings{
    char name[25];
    int  app[4];
    int windows[4];
}; struct Settings joeseph, mary, sue, *point;

struct Sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;


int main(void) {
    for (int i = 0; i < 1; i++) {
        sigline.signum = 5;
        strcpy(sigline.signame, "SIGNITURE");
        strcpy(sigline.sigdesc, "Interrupt");
        printf("%d\t", sigline.signum);
        printf("%s\t", sigline.signame);
        printf("%s\t\n", sigline.sigdesc);
    }
    sigline_p = &sigline;
    sigline_p->signum = 6;
    printf("%d\t", sigline.signum);

    // for (int i = 0; i < 20; i++) {
    //     sigline_p->signum = 6;
    //     strcpy(sigline_p.signame, "SIGNITURE");
    //     strcpy(sigline_p.sigdesc, "Interrupt");
    //     printf("%d\t", sigline_p.signum);
    //     printf("%s\t", sigline_p.signame);
    //     printf("%s\t\n", sigline_p.sigdesc);
    // }
    return 0;
}


void input(struct Settings person, int q) {
    srand(time(NULL));
    printf("inputp\n");
    for (int i = 0; i < 4; i++) {
        *(person.name + i) = '9';
        *(person.app + i) = rand();
        *(person.windows + i) = 2 * q * i;
        printf("App[i]: %d\t\tAd: %d\n", *(person.app + i), (person.app + i));
    }
    printf("\n");
}

void inputp(struct Settings person, struct Settings refer, int q) {
    printf("inputp\n");
    for (int i = 0; i < 4; i++) {
        *(person.name + i) = '9';
        *(person.app + i) = *(refer.app + i);
        *(person.windows + i) = 2 * q * i;
        printf("Name[i]: %d\t\tAd: %d\n", *(person.app + i), (person.app + i));
    }
    printf("\n");
}
