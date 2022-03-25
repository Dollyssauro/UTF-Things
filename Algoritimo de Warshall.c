#include <stdio.h>

void matrizuga(int n, int matriz[n][n])
{

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elemento [%d. %d]: ", i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }
}

void mostramatriz1(int n, int matriz[n][n])
{

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

void algoritimo(int n, int matriz[n][n])
{

    int i, j, k;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (matriz[i][j] == 1 || (matriz[i][k] == 1 && matriz[k][j] == 1))
                {
                    matriz[i][j] = 1;
                }
                else
                {
                    matriz[i][j] = matriz[i][j];
                }
            }
        }
    }
}

int main()
{

    int n;
    printf("\nDigite o numero de elementos da matriz: ");
    scanf(" %d", &n);
    int matriz[n][n];
    printf("\nPreencha ai:\n\n");
    matrizuga(n, matriz);
    printf("\nMatriz de adjacencia:\n\n");
    mostramatriz1(n, matriz);
    algoritimo(n, matriz);
    printf("\nMatriz de alcancabilidade:\n\n");
    mostramatriz1(n, matriz);

    return 0;
}