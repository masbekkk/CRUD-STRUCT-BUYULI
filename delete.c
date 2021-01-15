#include <stdio.h>
#include <time.h>
#define MAX_DATA 100

int main()
{
    int i, data = 10, indeks, arr[MAX_DATA];
    time_t t;

    srand((unsigned)time(&t));
    for (i = 0; i < data; i++)
    {
        arr[i] = rand() % 100;
        printf("%d  ", arr[i]);
    }

    printf("\nHapus pada indeks : ");
    scanf("%d", &indeks);
    if (data < 0 || indeks > data)
    {
        printf("\nIndeks invalid, masukkan indeks antara 1 sampai %d", data);
    }
    else
    {
        for (i = indeks; i < data; i++)
        {
            arr[i] = arr[i + 1];
        }
        data--;

        printf("Data setelah dihapus : ");
        for (i = 0; i < data; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}