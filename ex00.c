#include <stdio.h>
#include<stdlib.h>
int strl(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

char *ft_strdup(char *str){
	int i=strl(str)+1;
	int a=0;
    char *cp;
    cp=(char*)malloc((i*sizeof(char))+1);
    while(a<=i){
        cp[a]=str[a];
        a++;
    }
    cp[i]='\0';
    return cp;
	}
int main() {
    char a[]="test";
    printf("%s",ft_strdup(a));

    return 0;
}
