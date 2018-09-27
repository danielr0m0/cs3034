#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

int pId=0;

struct pokemon* createP(){

     pokemon *p = ( pokemon *) malloc(sizeof( pokemon));
    if(p == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }

    p->id= ++pId;
    printf("Enter Pokemon Name:  ");
    
    for(int i = 0; i < 2; i++)
    {
        fgets(p->name, 30,stdin);
    }    
  
    printf("Enter level of Pokemon:  ");
    scanf("%d", &p->level); 

    return p;
}

 void printP(void *data){
     if(data !=NULL){
          pokemon *p = ( pokemon *) data;
        printf("id:%d  %s level %d \n",p->id, p->name, p->level);
     }
}
