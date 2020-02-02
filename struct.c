# include <stdio.h>
# include <string.h>


struct _INFO
{
    int num;
    char str[256];
};

int main(){
    struct _INFO A;
    A.num = 2014;
    strcpy(A.str, "Welcome to dotcpp.com\n");
    printf("This year is %d \n%s \n", A.num, A.str);
    return 0;
}
