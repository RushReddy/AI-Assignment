#include <stdio.h>

#define MAX 100

int jug1 = 4;
int jug2 = 3;
int target = 2;

int visited[5][5];

/* ---------------- BFS ---------------- */

typedef struct {
    int x, y;
} State;

State queue[MAX];
int front = 0, rear = 0;

void enqueue(int x, int y) {
    queue[rear].x = x;
    queue[rear].y = y;
    rear++;
}

State dequeue() {
    return queue[front++];
}

int isEmpty() {
    return front == rear;
}

void bfs() {

    enqueue(0,0);
    visited[0][0] = 1;

    while(!isEmpty()) {

        State curr = dequeue();
        int x = curr.x;
        int y = curr.y;

        printf("(%d,%d)\n",x,y);

        if(x == target || y == target) {
            printf("Target achieved!\n");
            return;
        }

        if(!visited[jug1][y]) {
            enqueue(jug1,y);
            visited[jug1][y] = 1;
        }

        if(!visited[x][jug2]) {
            enqueue(x,jug2);
            visited[x][jug2] = 1;
        }

        if(!visited[0][y]) {
            enqueue(0,y);
            visited[0][y] = 1;
        }

        if(!visited[x][0]) {
            enqueue(x,0);
            visited[x][0] = 1;
        }

        int pour;

        pour = (x+y > jug2) ? jug2-y : x;
        if(!visited[x-pour][y+pour]) {
            enqueue(x-pour, y+pour);
            visited[x-pour][y+pour] = 1;
        }

        pour = (x+y > jug1) ? jug1-x : y;
        if(!visited[x+pour][y-pour]) {
            enqueue(x+pour, y-pour);
            visited[x+pour][y-pour] = 1;
        }
    }
}

/* ---------------- DFS ---------------- */

void dfs(int x,int y) {

    if(visited[x][y])
        return;

    visited[x][y] = 1;

    printf("(%d,%d)\n",x,y);

    if(x == target || y == target) {
        printf("Target achieved!\n");
        return;
    }

    if(x < jug1)
        dfs(jug1,y);

    if(y < jug2)
        dfs(x,jug2);

    if(x > 0)
        dfs(0,y);

    if(y > 0)
        dfs(x,0);

    int pour;

    pour = (x+y > jug2) ? jug2-y : x;
    dfs(x-pour,y+pour);

    pour = (x+y > jug1) ? jug1-x : y;
    dfs(x+pour,y-pour);
}

/* ---------------- MAIN ---------------- */

int main() {

    int choice;

    printf("Water Jug Problem\n");
    printf("1. BFS\n");
    printf("2. DFS\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice == 1) {
        bfs();
    }

    else if(choice == 2) {
        dfs(0,0);
    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}
