//
//  main.c
//  testprogram
//
//  Created by Nathaniel Corona  on 10/21/22.
//

#include <stdio.h>
#include <stdbool.h>
//this method here checks if the login is correct
bool checkLogin(char[],char[]);
bool checkLogin(char a[], char b[]){
    int flag=0, i = 0;
    while(a[i]!='\0' &&b[i]!= '\0'){//comparing if the strings match
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(a[i]!= '\0'|| b[i]!= '\0')
        return false;
    if(flag == 0)
        return true;
    else
        return false;
    }
float calulateTax(float beforeTax);
float calulateTax(float beforeTax){//this calculates the tax of all the items
    float tax = .85;
    float afterTax = 0;
    float extra = beforeTax * tax;
    afterTax = extra + beforeTax;
    return afterTax; //Returns the total with tax
}
int main()
{
    //welcome screen
    printf("Hello, welcome to the petstore\n");
    printf("Create a login!\n");
    printf("Please enter a user name[max: 15 letters]\n");
    //takes input for the username
    char userName[15];
    printf("Username:");
    scanf("%s", userName);
    printf("Hello %s, enter a password![max: 15 letters]\n", userName);
    printf("Password: ");
    char password[15];
    scanf("%s", password);
    printf("Alright now log in!\n");
    bool correct = false;
    while(correct == false){//checks if the username is correct and password
        printf("Username:\n");
        char enteredName[15];
        scanf("%s", enteredName);
        printf("Password:\n");
        char enteredPassword[15];
        scanf("%s", enteredPassword);
        if(checkLogin(enteredName, userName) == true && checkLogin(enteredPassword, password)){//calls the fucntion to check
            correct = true;
        }else{
            printf("Incorrect login, try again\n"); //loops if wrong
        }
    }
    printf("Logging in...\n");
    printf("Welcome to the online shop\n");
    printf("What is the name of your pet?[max: 20 letters]\n"); //ask for the pets name
    char petName[20];
    scanf("%s", petName);
    printf("%s is a cute name!\n", petName);
    printf("What type of animal is %s ?\n",petName);
    printf("We offer food to cats and dogs\n");
    //declaring varibles
    float totalPrice = 0;
    float price;
    int amount;
    bool goodInput = false;
    bool dog = false;
    bool hasCat = false;
    int userChoice;
    bool doneShopping = false;
    while(goodInput == false){ //ask for the type of pet
        printf("Enter 1 for dog, 2 for cat\n");
        scanf("%d", &userChoice);
        if(userChoice == 1){ //if its a dog
            dog = true;
            goodInput = true;
        }else if(userChoice == 2){
            hasCat = true;// if its a cat
            goodInput = true;
        }else{
            printf("Bad input\n");//usercase
        }
    }
    while(hasCat == true){
        printf("We have three different cat foods\n"); //displays the type of food for cats
        printf("1. Fishy cat, 12$\n");
        printf("2. Caty dreams, 14.23$\n");
        printf("3. Pizza for cats, 10$\n");
        userChoice = 0;
        scanf("%d", &userChoice);
        if(userChoice == 1){//if user chooses the 12$ option
            printf("How many do you want\n");
            scanf("%d", &amount); //ask for the amount of food they want
            price = 12 * amount;
            totalPrice = totalPrice + price; //store the total of the whole bill
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n"); //ask user if they want more food
                scanf("%d", &choice2);
                if(choice2 == 1){
                    hasCat = false; //if they are done shopping
                    doneShopping = true;
                }else{
                    hasCat = true;// if they want more food
                }
            }

        }
        else if(userChoice == 2){//if user chooses the 14.23 opition
            printf("How many do you want\n");
            scanf("%d", &amount); // ask for the amount of food
            price = 14.23 * amount;
            totalPrice = totalPrice + price; //stores whole bill
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n"); //ask if user if they want more food
                scanf("%d", &choice2);
                if(choice2 == 1){
                    hasCat = false; // if they are done shopping
                    doneShopping = true;
                }else{
                    hasCat = true; //if they want more food
                }
            }
        }
        else if(userChoice == 3){
            printf("How many do you want\n");// if user chooses $10 option
            scanf("%d", &amount);// asks for the amount of food they want
            price = 10 * amount;
            totalPrice = totalPrice + price; //stores total bill
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n");// ask if the user wants more food
                scanf("%d", &choice2);
                if(choice2 == 1){
                    hasCat = false; //if the user is done shopping
                    doneShopping = true;
                }else{
                    hasCat = true; //if the user wants more food
                }
            }

        }else{
            printf("invalid input\n");//usercase
        }
    }
    while(dog == true){
        printf("We have three different dog foods\n");//displays the different types of dog food
        printf("1. Doggy bacon, 8$\n");
        printf("2. Steak bits, 16.93$\n");
        printf("3. Hot doggies, 14.22$\n");
        userChoice = 0;
        scanf("%d", &userChoice);
        if(userChoice == 1){//if user chooses the $8 opiton
            printf("How many do you want\n");//asks for the amount of food
            scanf("%d", &amount);
            price = 8 * amount;
            totalPrice = totalPrice + price;//stores total bill
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n");//ask the user if they want more food
                scanf("%d", &choice2);
                if(choice2 == 1){
                    dog = false;//if the user is done with food
                    doneShopping = true;
                }else{
                    dog = true;//if the user wants more food
                }
            }
        }
        else if(userChoice == 2){//if user chooses $16.93 opition
            printf("How many do you want\n");//ask for the amount of food
            scanf("%d", &amount);
            price = 16.93 * amount;
            totalPrice = totalPrice + price;//stores total amount
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n");//ask if they want more food
                scanf("%d", &choice2);
                if(choice2 == 1){
                    dog = false;//if they are done shopping
                    doneShopping = true;
                }else{
                    dog = true;// if they want more food
                }
            }
        }
        else if(userChoice == 3){
            printf("How many do you want\n");// if user chooses the $14.22 option
            scanf("%d", &amount);
            price = 14.22 * amount;
            totalPrice = totalPrice + price;//stores whole bill
            int choice2 = 0;
            while(choice2 == 0){
                printf("Do you want more food? 1 for no or any other number for yes\n");//ask for the amount of food they want
                scanf("%d", &choice2);
                if(choice2 == 1){
                    dog = false;//if the user done with shopping
                    doneShopping = true;
                }else{
                    dog = true;// if they want more food
                }
            }

        }else{
            printf("invalid input\n");//usercases
        }
    }
    while(doneShopping == true){
        float finalTotal = calulateTax(totalPrice); //calls function to calulate tax
        printf("Your total today with tax will be $%.02f\n", finalTotal); //prints the whole bill with tax included
        printf("Thank you for shopping with us today!\n");
        return 0;
    }
}


