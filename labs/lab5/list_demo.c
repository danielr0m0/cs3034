#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.h"
#include "monster_attack.h"
#include "pokemon.h"

void show_menu()
{
    printf("\n--- C Linked List Demonstration --- \n\n");
    printf("0.quit\n");
    printf("1.prepend an element\n");
    printf("2.append an element\n");
    printf("3.search for an element\n");
    printf("4.insert after an element\n");
    printf("5.insert before an element\n");
    printf("6.remove front node\n");
    printf("7.remove back node\n");
    printf("8.remove any node\n");
    printf("9.sort the list\n");
    printf("10.Reverse the linked list\n");
}

int main()
{
    int command;
    int id;

    node* head = NULL;
    node* tmp = NULL;
    void* data = NULL;

    char input[15];
    void* (*create)();
    void (*print)();

    while(1){
        printf("which type would u like to use 1) monster_attk 2) pokemon\n");
    
           scanf("%15s",input);
        if(strcmp(input, "monster_attk")==0 || strcmp(input, "1")==0 ){
            puts("You chose monster_attak\n\n");
            create=createM;
            print = printM;
            break;
        }else if(strcmp(input, "pokemon")==0 || strcmp(input, "2")==0 ) {
             puts("You chose pokemon\n\n");
            create=createP;
            print= printP;
            break;
        }
        puts("error please try number value.... \n\n\n");
    }
   

    do {    
        show_menu();
        printf("\nEnter a command(0-10,0 to quit): ");
        scanf("%d",&command);
        switch(command)
        {
        case 1:

            printf("ready to prepend...\n");
            data=create();
            head = prepend(head,data);
            traverse(head,print);
            break;
        case 2:
            printf("ready to append...\n");
            data=create();
            head = append(head,data);
            traverse(head,print);
            break;
        case 3:
            printf("Please enter a id to search: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                printf("Element with id %d found.\n",id);
                 display(tmp,print);
               
            }
            else
            {
                printf("Element with id %d not found.",id);
            }
            break;
        case 4:
            printf("Enter the id after which you would like to insert the new Monster Attack: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {

                data=create();
                head = insert_after(head,data,tmp);
                if(head != NULL)
                    traverse(head,print);
            }
            else
            {
                printf("Element with value %d not found.",data);
            }
            break;
        case 5:
            printf("Enter the id before which you would like to insert a new Monster Attack: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                data=create();
                head = insert_before(head,data,tmp);
 
                if(head != NULL)
                    traverse(head,print);
            }
            else
            {
                printf("Element with value %d not found.",data);
            }
            break;
        case 6:
            head = remove_front(head);
            if(head != NULL)
                traverse(head,print);
            break;
        case 7:
            head = remove_back(head);
            if(head != NULL)
                traverse(head,print);
            break;
        case 8:
            printf("Enter the element id to remove: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                remove_any(head,tmp);
                if(head != NULL)
                    traverse(head,print);
            }
            else
            {
                printf("Element with value %d not found.",id);
            }
            break;
        case 9:
            head = insertion_sort(head);
            if(head != NULL)
                traverse(head,print);
            break;
        case 10:
            head = reverse(head);
            if(head != NULL)
                traverse(head,print);
            break;
        }
 
    } while(command != 0);
    clears(head);
    return 0;
}

