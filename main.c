#include <stdio.h>
#include <stdlib.h>


int menu(){
int action;
printf("Select an option below\n\n ");
printf("1.Add new Patron\n ");
printf("2.View all Patrons\n ");
printf("3.View all Books\n ");
printf("4. Add new Books\n ");
scanf("%d", action);
return action;


}
int main()
{
    printf("County Library System\n");
    printf("Welcome Mr John\n ");
    printf("You selected action%d", menu());

    return 0;
}
