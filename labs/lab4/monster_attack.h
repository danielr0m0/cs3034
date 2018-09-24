#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

struct monsterAttk {
    int id;
    char name[15];
    char location[30];
    int nVictims;
};

void inputMonsterAttk( struct monsterAttk *attks, int n);

void printAttks(struct monsterAttk *attks, int n);

void totalVictums(struct monsterAttk *attks, int n);

#endif
