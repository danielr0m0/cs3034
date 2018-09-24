#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.h"
#include "monster_attack.h"

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
    char mname [30];
    char mlocation [30];
    int mvictums;
 
    struct monsterAttk* data= NULL;
    node* head = NULL;
    node* tmp = NULL;
    
    do {
		show_menu();
        printf("\nEnter a command(0-10,0 to quit): ");
        scanf("%d",&command);
        switch(command)
        {
        case 1:

            printf("ready to prepend...\n");
            printf("Enter Monster Name with no space:  ");
            scanf("%30s", mname);  
            printf("Enter Monster Attack location with no space:  ");
            scanf("%30s", mlocation); 
            printf("Enter number of victums:  ");
            scanf("%d", &mvictums); 
            
            strcpy(data->name, mname);
            strcpy(data->location, mlocation);
            data->nVictims=mvictums;
            
            head = prepend(head,data);
            traverse(head);
            break;
        case 2:
            printf("Please enter a Monster Attack to append: ");
            // scanf("%d",&data);
            head = append(head,data);
            traverse(head);
            break;
        case 3:
            printf("Please enter a id to search: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                printf("Element with id %d found.",id);
            }
            else
            {
                printf("Element with id %d not found.",id);
            }
            break;
        case 4:
            printf("Enter the element id after which you would like to insert the new Monster Attack: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {

                printf("Enter the monster Name: ");
                head = insert_after(head,data,tmp);
                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Element with value %d not found.",data);
            }
            break;
        case 5:
            printf("Enter the element id before which you would like to insert a new Monster Attack: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                printf("Enter the value to insert: ");
                // scanf("%d",&data);
                head = insert_before(head,data,tmp);
 
                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Element with value %d not found.",data);
            }
            break;
        case 6:
            head = remove_front(head);
            if(head != NULL)
                traverse(head);
            break;
        case 7:
            head = remove_back(head);
            if(head != NULL)
                traverse(head);
            break;
        case 8:
            printf("Enter the element value to remove: ");
            scanf("%d",&id);
            tmp = search(head,id);
            if(tmp != NULL)
            {
                remove_any(head,tmp);
                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Element with value %d not found.",data->id);
            }
            break;
        case 9:
            head = insertion_sort(head);
            if(head != NULL)
                traverse(head);
            break;
        case 10:
            head = reverse(head);
            if(head != NULL)
                traverse(head);
            break;
        }
 
    } while(command != 0);
    clear(head);
    return 0;
}

