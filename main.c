#include <stdio.h>
#include <string.h>
int main(){
char name[30];

printf("what is your name?\n");
scanf("%s",name);
printf("Hello %s\n", strcat(name, "!"));

return 0;
};
