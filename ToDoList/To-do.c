#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

struct Task{
    char description[100];
    int completed;
}

void addTask( struct Task tasks[], int *taskCount){
    if(*taskCount >= MAX_TASKS)
    {
        printf("Task List is full/n");
        return;
    }
    printf("Enter task description:");
    getchar() // c;ear leftover newline from previous scanf

    //Remove newline at the end of the input
    task[*taskCount].description[strcspn(tasks[*taskCount].description, "\n")]='\0'
}
