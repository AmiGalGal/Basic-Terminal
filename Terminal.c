#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int command;
    int stop = 0;
    char name[20];
    char content[255];
    int line;
    while (stop == 0){
        printf("System command(0 - help): ");
        scanf("%d", &command);
        switch(command){
        case 0:
           printf("0- help\n1- exit\n2- create a file\n3- append to a file\n4- read file\n");
           break;
        case 1:
            stop = 1;
            printf("Exiting...");
            break;
        case 2:
            printf("Creating TXT file\n");
            printf("Choose name: ");
            scanf("%s", name);
            FILE * P = fopen(name, "w");
            break;
        case 3:
            printf("appending\n");
            printf("Choose name: ");
            scanf("%s", name);
            FILE * P1 = fopen(name, "a");
            printf("write: ");
            scanf("%s", content);
            fprintf(P1, "%s\n", content);
            break;
        case 4:
            printf("reading\n");
            printf("Choose file: ");
            scanf("%s", name);
            FILE * P2 = fopen(name, "r");
            char cont[255];
            fgets(cont, 255, P2);
            printf("%s\n", cont);

        break;
        default:
            printf("Invalid command\n");
            break;
        }


    }
    return 0;
}
