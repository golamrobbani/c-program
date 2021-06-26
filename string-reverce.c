//c program to string reverse without strrev() or Using any library function
#include<stdio.h>
#include <string.h>
void main(){

    int i=0,slength=0;
    char temp;
    char name[100]= "Golam";

    //gets(name);
    //strrev(name);

    while(name[slength]!='\0')
        slength++;
    slength -=1;

    //slength = strlen(name) - 1;

    while (i < slength) {
      temp = name[i];
      name[i] = name[slength];
      name[slength] = temp;
      i++;
      slength--;
    }

    printf("%s",name);

}
