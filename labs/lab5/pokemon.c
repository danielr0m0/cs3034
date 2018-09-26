#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

int id=0;

struct pokemon* createP(){

    struct pokemon *pokemon = (struct pokemon *) malloc(sizeof(struct pokemon));
    if(pokemon == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }

    pokemon->id= ++id;
    printf("Enter Pokemon Name:  ");
    
    for(int i = 0; i < 2; i++)
    {
        fgets(pokemon->name, 30,stdin);
    }    
  
    printf("Enter level of Pokemon):  ");
    scanf("%d", &pokemon->level); 

    return pokemon;
}
