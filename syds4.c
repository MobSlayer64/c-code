#include <stdio.h>

#define MAX 20  

struct job
{
    int job_id;       
    int priority;     
    char jobname[20]; 
};

struct job q[MAX];
int front = -1, rear = -1;

void lidisplay()
{
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("----------------------------------------\n");
    printf("| Job ID | Priority | Job Name         |\n");
    printf("----------------------------------------\n");
    for (int i = front; i <= rear; i++) {
        printf("| %-6d | %-8d | %-16s |\n", q[i].job_id, q[i].priority, q[i].jobname);
    }
    printf("----------------------------------------\n");
}

void liinsert(struct job j)
{
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    q[rear] = j;
    printf("Job inserted successfully\n");
}

void lidelete_job() 
{
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleting job ID: %d\n", q[front].job_id);
    front++;
    if (front > rear) {
        front = rear = -1; // Reset queue
    }
}

int count = 0; // Keep track of number of elements

void cidisplay(struct job q[MAX])
{
    if (count == 0) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("----------------------------------------\n");
    printf("| Job ID | Priority | Job Name         |\n");
    printf("----------------------------------------\n");
    
    int i = front;
    for (int j = 0; j < count; j++) {
        printf("| %-6d | %-8d | %-16s |\n", q[i].job_id, q[i].priority, q[i].jobname);
        i = (i + 1) % MAX; // Circular increment
    }
    printf("----------------------------------------\n");
    printf("Total jobs: %d\n", count);
}

void ciinsert(struct job j)
{
    if (count == MAX) {
        printf("Queue is full\n");
        return;
    }
    
    if (count == 0) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX; // Circular increment
    }
    
    q[rear] = j;
    count++;
    printf("Job inserted successfully\n");
}

void cidelete_job() 
{
    if (count == 0) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Deleting job ID: %d\n", q[front].job_id);
    front = (front + 1) % MAX; // Circular increment
    count--;
    
    if (count == 0) {
        front = rear = -1; // Reset when queue becomes empty
    }
}

void queue_status() 
{
    printf("\nQueue Status:\n");
    printf("Front index: %d\n", front);
    printf("Rear index: %d\n", rear);
    printf("Number of jobs: %d\n", count);
    printf("Available space: %d\n", MAX - count);
}

int main()
{
    int c1,c2;
    
    printf("Job Queue Management System\n");
    printf("============================\n");

    while (1) {
        printf("\nWhich queue do you wanna use :\n");
        printf("1.Linear OR 2.Cicular : \n");
        scanf("%d", &c1);

        if(c1 == 1) {
            printf("\nLinear Job Queue Management System\n");
            printf("==================================\n");

            while (1) {
                printf("\nEnter your choice:\n");
                printf("1. Insert a job\n");
                printf("2. Display jobs\n");
                printf("3. Delete a job\n");
                printf("4. Exit\n");
                printf("Choice: ");
                
                scanf("%d", &c2);
                
                switch (c2) {
                    case 1: {
                        struct job j;
                        printf("Enter job ID: ");
                        scanf("%d", &j.job_id);
                        printf("Enter priority: ");
                        scanf("%d", &j.priority);
                        printf("Enter job name: ");
                        scanf("%s", j.jobname);
                        liinsert(j);
                        break;
                    }
                    case 2: {
                        lidisplay();
                        break;
                    }
                    case 3: {
                        lidelete_job();
                        break;
                    }
                    case 4:
                        printf("Exiting program. Goodbye! (～￣▽￣)～\n");
                        return 0;
                    default:
                        printf("Invalid choice. ಠ╭╮ಠ\n");
                }
            }
        } 
        else if(c1 == 2) {
            printf("\nCircular Job Queue Management System\n");
            printf("====================================\n");

            while (1) {
                printf("\nEnter your choice:\n");
                printf("1. Insert a job\n");
                printf("2. Display jobs\n");
                printf("3. Delete a job\n");
                printf("4. Queue status\n");
                printf("5. Exit\n");
                printf("Choice: ");
                
                scanf("%d", &c2);
                
                switch (c2) {
                    case 1: {
                        struct job j;
                        printf("Enter job ID: ");
                        scanf("%d", &j.job_id);
                        printf("Enter priority: ");
                        scanf("%d", &j.priority);
                        printf("Enter job name: ");
                        scanf("%s", j.jobname); // Safer input
                        ciinsert(j);
                        break;
                    }
                    case 2: {
                        cidisplay(q);
                        break;
                    }
                    case 3: {
                        cidelete_job();
                        break;
                    }
                    case 4: {
                queue_status();
                break;
            }
            case 5:
                printf("Exiting program. Goodbye! (～￣▽￣)～\n");
                return 0;
            default:
                printf("Invalid choice. ಠ╭╮ಠ\n");
        
                }
            }
        } 
        else {
            printf("Invalid choice. ಠ╭╮ಠ\n");
        }
        
    }
}