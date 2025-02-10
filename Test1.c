#include<stdio.h>
#include<string.h>
struct Student{
    char Name[20];
    int class;
    char section;
    int total_marks;
} ;
int main(){
    struct Student S1;
    strcpy(S1.Name,"Don");
    S1.class = 10;
    S1.section = 'A';
    S1.total_marks = 476;
    printf("%s\n %d\n %c\n %d",S1.Name,S1.class,S1.section,S1.total_marks);
    return 0;
}