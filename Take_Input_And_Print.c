#include<stdio.h>
int main()
{
    char name[124];
    scanf("%[^
]",name);
    printf("%s",name);
    return 0;
}