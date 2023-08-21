#include <stdio.h>
#define INF 9999
#define MAX_NODES 10
void floyd(int graph[MAX_NODES][MAX_NODES], int n) {
    int distance[MAX_NODES][MAX_NODES];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            distance[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (distance[i][k] + distance[k][j] < distance[i][j]) {
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }
    printf("Shortest paths between all pairs of nodes:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (distance[i][j] == INF) {
                printf("INF\t");
            } else {
                printf("%d\t", distance[i][j]);
            }
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &n);
    int graph[MAX_NODES][MAX_NODES];
    printf("Enter the adjacency matrix (use INF for no direct edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == -1) {
                graph[i][j] = INF;
            }
        }
    }
    floyd(graph, n);
    return 0;
}

