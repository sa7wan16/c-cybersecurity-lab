#include <stdio.h>

void bufferoverflow(){
char password[5];
char secret[15] = "nevertell";

printf("password address: %p\n", (void *)password);
printf("secret address: %p\n", (void *)secret);

printf("enter your password:");
scanf("%s",password); 
printf("password is %s", password);
printf("Secret is %s", secret);

}
