#include <stdio.h>
int main()
{

    const int frnd_marks = 99;
    int *teacher_sheet = &frnd_marks;
    *teacher_sheet = 79;

    printf("%d", frnd_marks);

    return 0;
}