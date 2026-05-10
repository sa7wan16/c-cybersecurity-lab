#include <stdio.h>

void pwdchecker();
void menu();
void bufferoverflow();

void menu() {

int choice = 0;

while (choice !=3){

printf("\n\n==== Cyber Password Lab ====\n");
printf("1. Password Checker\n");
printf("2. Buffer Overflow Demo\n");
printf("3. Exit\n");

printf("Choose an option: ");
scanf("%d", &choice);

switch(choice) {

case 1:
 pwdchecker();
 break;

case 2:
 bufferoverflow();
 break;

case 3:
 printf("Exiting program...\n");
 break;

default:
printf("Invalid choice\n");
}
}
}

int main(){
menu();
return 0;
}
