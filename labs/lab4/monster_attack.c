#include <stdio.h>
#include <stdlib.h>
#include "monster_attack.h" 


void inputMonsterAttk(struct monsterAttk *attks, int n){
    struct monsterAttk *curr_attk;
    
    for(int i = 0; i < n; i++)
    {
        curr_attk= attks + i;
        curr_attk->id = i+1;
        printf("Enter name of the monster %d:", i+1);
        scanf("%15s", curr_attk -> name);
        printf("Enter location of Attack:");
        scanf("%30s", curr_attk -> location);
        printf("Number of victums:");
        scanf("%d", &curr_attk -> nVictims);
    }
}

void printAttks(struct monsterAttk *attks, int n){
    
    for(int i = 0; i < n; i++)
    {
        printf("%s attacked %s with %d victums.\n", (attks+i)->name, (attks+i)->location, (attks+i)->nVictims);
    }
    
}

void totalVictums(struct monsterAttk *attks, int n){
    int tVictims = 0;

    for(int i = 0; i < n; i++)
    {
        tVictims += (attks+i)->nVictims;
    }
    
    printf("Total victims from all attacks: %d \n" ,tVictims);
}
