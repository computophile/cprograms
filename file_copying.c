#include <stdio.h>

// main(){
//     int c;
//     c = getchar();
//     while(c != EOF){
//         putchar(c);
//         c = getchar();
//     }
// }

// copy input output better version, 2nd version
main(){
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}