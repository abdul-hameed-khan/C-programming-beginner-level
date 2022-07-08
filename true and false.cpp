#include <stdio.h>

int main ()
{ /* main */
    int project_due_soon;
    int been_putting_project_off;
    int start_working_on_project_today;

    printf("Is it true that you have a ");
    printf("programming project due soon?\n");
    scanf("%d", &project_due_soon);
    printf("Is it true that you have ");
    printf("been putting off working on it?\n");
    scanf("%d", &been_putting_project_off);
    start_working_on_project_today =
        project_due_soon && been_putting_project_off;
    printf("Is it true that you should start ");
    printf("working on it today?\n");
    printf("ANSWER: %d\n",
        start_working_on_project_today);
} /* main */

