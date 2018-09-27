#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monster_attack.h" 
int mId = 1;

struct monsterAttk* createM(){
     struct monsterAttk *attk = (struct monsterAttk *) malloc(sizeof(struct monsterAttk));
    if(attk == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }

    attk->id= mId++;
    printf("Enter Monster Name:  ");
    
    for(int i = 0; i < 2; i++)
    {
        fgets(attk->name, 30,stdin);
    }    
    printf("Enter Monster Attack location:  ");
    for(int i = 0; i < 1; i++)
    {
        fgets(attk->location, 30,stdin);
    }
    printf("Enter number of victum(s):  ");
    scanf("%d", &attk->nVictims); 

    return attk;
};

void printM(void* data){
    if(data !=NULL){
        monsterAttk *attk = (monsterAttk *) data;
         printf("id:%d  %s attacked %s with %d victums.\n",attk->id, attk->name, attk->location, attk->nVictims);
    }
    else
        printf("null");
}

// void totalVictums(struct monsterAttk *attks, int n){
//     int tVictims = 0;

//     for(int i = 0; i < n; i++)
//     {
//         tVictims += (attks+i)->nVictims;
//     }
    
//     printf("Total victims from all attacks: %d \n" ,tVictims);
// }
