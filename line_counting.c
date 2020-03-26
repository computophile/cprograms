// to count the number of lines entered

#include<stdio.h>
main(){

    int c , number_of_lines;
    printf("%s", "Enter `~` to end you input!\n");
    // TODO: revision this portion in order to implemented the code better
    char tracker;
    number_of_lines = 0;
    while ( (c = getchar()) != EOF){
        if (c == '\n'){
            //print only if enter is pressed indicating a new line
            ++number_of_lines;
        }
        if (c == '~')
            break;
    }//end of while
            printf("%s%d\n" ,"The number of lines: ", number_of_lines);        

}//end of main
