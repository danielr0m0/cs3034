#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

typedef struct monsterAttk {
    int id;
    char name[30];
    char location[30];
    int nVictims;
}monsterAttk;

struct monsterAttk* createM();

#endif
