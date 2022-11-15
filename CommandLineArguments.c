#include <stdio.h>

int main (int argc, char *argv[])
{
    if (argc==1){
        printf("The argument suppllied is %s\n", argv[1]);
            }

            else if(argc>2){
                printf("Too many arguemtns supplied.\n");

            }
            else {
                printf("One argument expected. \n");

            };
}
