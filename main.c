#include <stdio.h>

// Problem description: https://cs50.harvard.edu/x/2022/psets/1/mario/less/

int main() {
    int is_valid_number();
    void prompt();
    int given_height;
    char symbol [] = "#";
    int get_integer_from_console();
    char point [] = ".";
    char space [] = " ";
    int point_counter;

    // Keep asking the user to enter a new number
    // until it meets the requirements

    do {
        prompt();
        given_height = get_integer_from_console();
    } while (is_valid_number(given_height) == 0);
    // vs 1.0 (easier version) -->
//    for(int i=0; i < given_height; i++){
//        for(int j = 0; j < i + 1; j++){
//        printf(symbol);}
//        // new line after each iteration
//        printf("\n");
//    }
    // vs 1.1 (harder version) -->
        for(int i=0; i < given_height; i++){
        point_counter = given_height - i - 1;
        while(point_counter > 0){
//            printf(point);
            printf(space);
            point_counter--;}
        for(int j = 0; j < i + 1; j++){printf(symbol);}
        // new line after each iteration
        printf("\n");
    }}


//checks if the entered number is between 1-8
int is_valid_number(int user_input) {
    // 1 stands for true and 0 represents false
//    vs 1.0
//    if (user_input > 0 && user_input < 9) return 1;
//    else return 0;

// vs 1.1 - Ternary operator
    int result = (user_input > 0 && user_input < 9) ? 1 : 0;
    return result;
}

// Implementation separated from the main code by declaring
// additional function
void prompt(){printf("%s\n%s","How high should the pyramid be?", "Please enter a number between 1-8:");}

// Implementation wrapped in a function
int get_integer_from_console(){
    int num_entered;
    scanf("%i", &num_entered);
    return num_entered;}
