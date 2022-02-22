#include <stdio.h>
void swap(int *a, int *b);
void bubble_sort(int array[], int size);
int main() {
  // data acak
  int data[] = {-23, 65, 30, 8, 33, 24, 76, 7};
  // menentukkan ukuran atau jumlah array, { sizeof(data)=32, sizeof(int)=4, jadi 32/4=8 }
  int size = sizeof(data) / sizeof(int);
  puts("CHELLENGE BULBBLE SORT");
  puts("data sebelum diurutkan: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);

  puts("\n\ndata setelah diurutkan secara ascending: ");
  bubble_sort(data, size);
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int array[], int size) {
  for (int i = 0; i < size; i++)
    for (int j = size - 1; j > i; j--)
      if (array[j] < array[j - 1])
        swap(&array[j], &array[j - 1]);
}