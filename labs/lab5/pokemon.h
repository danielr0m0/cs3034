#ifndef POKEMON
#define POKEMON

typedef struct pokemon {
    int id;
    char name[30];
    int level;
}pokemon;

struct pokemon* createP();

void printP(void* data);

#endif
