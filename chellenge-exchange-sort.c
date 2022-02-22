#include <stdio.h>
void swap(int *a, int *b);
void exchange_sort(int array[], int size);
int main() {
  // data acak
  int data[] = {-23, 65, 30, 8, 33, 24, 76, 7};
  // menentukkan ukuran atau jumlah array, { sizeof(data)=32, sizeof(int)=4, jadi 32/4=8 }
  int size = sizeof(data) / sizeof(int);

  // cetak data
  puts("CHELLENGE EXCHENGE SORT");
  // cetak sebelum diurutkan
  puts("data sebelum diurutkan: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);

  // urutkan data
  exchange_sort(data, size);
  // ceteak setelah diurutkan
  puts("\n\ndata setelah diurutkan secara ascending: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void exchange_sort(int array[], int size) {
  for (int i = 0; i < size; i++)
    for (int j = i + 1; j < size; j++)
      // array[i] merupakan privot
      if (array[i] > array[j])
        swap(&array[i], &array[j]);
}