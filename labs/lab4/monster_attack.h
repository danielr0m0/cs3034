#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

struct monsterAttk {
    int id;
    char name[30];
    char location[30];
    int nVictims;
};

struct monsterAttk* createM();

#endif
