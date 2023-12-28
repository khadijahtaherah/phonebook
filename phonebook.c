/*Phonebook that lets user to add, modify and delete phone numbers
workflow:
homepage - insert password -> password is correct - go to list:
1. add
2. edit
3. delete 
*/

#include <stdio.h>

void homepage(void);
int compare_password(int);

int main() {
    homepage();
    return 0;
}

void homepage(void) {
    int password = 0;
    int status = 0;
    printf("Enter password:"); //prompt user
    scanf("%d", &password);
    
    while(status != 1) {
        status = compare_password(password);
        if(status == 1) {
            printf("Choose your selection\n");
        
        } else {
            printf("Wrong password. Enter the correct password:");
            scanf(" %d", &password); //space in second scanf to ignore whitespace as input
        }   
    }
    
    
}

int compare_password(int password) {
    int passcode = 123;
    
    if(password == passcode) {
        return 1;
    } else {
        return 0; 
    }
}
