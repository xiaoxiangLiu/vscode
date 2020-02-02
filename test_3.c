# include <stdio.h>

int fun(){
    printf("Hello world!\n");
    return 0;
}

int main(){
    int i=0;
    int sum=0;
    fun();
    while (i++<3)
    {
        /* code */
        sum+=1;
    }
    printf("1+2+3+.........100 = %d\n", sum);

    return 0;
}

