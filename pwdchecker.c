#include <stdio.h>

#include <string.h>

// function declaration
void get_input(char password[]);
int check_length(char password[]);
void print_char(char password[]);
int has_num(char password[]);
int has_letter(char password[]);
int has_sp(char password[]);
void print_address(char password []);

void pwdchecker(){
char password[50];

//function for input
get_input(password);

//printf("enter your password:");
//scanf("%s", password);


//function to check length
if (check_length(password) == 1){
printf("Password has 8 or more characters\n");
} else {
printf("Password has LESS than 8 characters\n");
}


//function to print characters
//print_char(password);

//function to chcek if has number
if (has_num(password)== 1){
printf("Password has number\n");
}else {
printf("Password contains NO number\n");
}

//function to check if it has letters
if (has_letter(password) == 1){
printf("Password has Letter\n");
} else {
printf("Password has NO letter\n");
}

//function to check if it has Special characters

if (has_sp(password) == 1){
printf("Password has special characters\n");
}else {
printf("Password has NO special character\n");
}

// strong password?

if ((check_length(password) == 1) && (has_num(password) == 1) && (has_letter(password) == 1) && (has_sp(password) == 1)){
printf("'Password looks Strong'\n");
} else {
printf("'Password looks Weak'\n");
}

//printing addresses

//print_address(password);

}


//function defintion

void get_input(char password[]){
printf("Enter your password: ");
scanf("%s", password);
}

int check_length(char password[]){
int length;
length = strlen(password);
if (length >= 8){
return 1;
}
return 0;
}

void print_char(char password[]){
for (int i = 0; password[i] != '\0'; i++){
printf("%c\n",password[i]);
}
}


int has_num(char password[]){
for (int i = 0; password[i] != '\0'; i++){
if (password[i] >= '0' && password[i] <= '9'){
return 1;
}
}
return 0;
}

int has_letter(char password[]){
for (int i=0; password[i] != '\0'; i++){
if( (password[i] >= 'a' && password[i] <= 'z') ||
(password[i] >= 'A' && password[i] <= 'Z')){
return 1;
}
}
return 0;
}


int has_sp(char password[]){
for (int i=0; password[i] != '\0'; i++){
if (! ( (password[i] >= 'a' && password[i] <= 'z') ||
(password[i] >= 'A' && password[i] <= 'Z') || 
(password[i] >= '0' && password[i] <= '9') )){
return 1;
}
}
return 0;
}


void print_address(char password[]){
int length = strlen(password);

printf("Password is %s\n", password);
printf("Length is %d\n", length);

printf("Address of password is %p\n", password);
printf("Address of length is %p\n", &length);
printf("Address of password2 is %p\n", password);
printf("Address of length2 is %p\n", &length);
}
