#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//RAN OUT OF FUNS FOR AWS 

struct monsterAttk {
    int id;
    char name[15];
    char location[30];
    int nVictims;
};

void inputMonsterAttk( struct monsterAttk *attks, int n);
void printAttks(struct monsterAttk *attks, int n);
void totalVictums(struct monsterAttk *attks, int n);

int main()
{
    int size;
    printf("How many monster attacks occured? \n:");
    scanf("%d", &size);

    struct monsterAttk *attks = (struct monsterAttk *) malloc(sizeof(struct monsterAttk));
   
    inputMonsterAttk(attks, size);
    printAttks(attks,size);
    totalVictums(attks,size);
    return 0;
}

void inputMonsterAttk(struct monsterAttk *attks, int n){
    struct monsterAttk *curr_attk;
    char temp;
    
    for(int i = 0; i < n; i++)
    {
        curr_attk= attks + i;
        curr_attk->id = i+1;
        printf("Enter name of the monster %d:", i+1);
        scanf("%c", temp);
        printf("%s", temp);
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
