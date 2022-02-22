#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void selection_sort(int array[], int size);

int main() {

  // tentukkan jumlah array
  int size;
  printf("Masukkan jumlah data array: ");
  scanf("%d", &size);
  // buat variable data, dengan size sesuai yang ditentukkan
  int data[size];
  // isi nilai variable data
  for (int i = 0; i < size; i++) {
    system("cls||clear");
    printf("Masukkan data ke-%d: ", i + 1);
    scanf("%d", &data[i]);
  }

  system("cls||clear");
	puts("SELECTION SORT");
  //  cetak ketika data masih acak
  puts("Ini data ketika masih acak: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);

  // urutkan data secara ascending menggunakan selection_sort
  selection_sort(data, size);
  // cetak data setelah diurutkan
  puts("\n\nIni data ketika sudah diurutkan secara ascending:");
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
}

// tukar data
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// urutkan data secara ascending menggunakan selection_sort
void selection_sort(int array[], int size) {
  for (int i = 0; i < size; i++) {
		// min_index untuk index awal pengurutan 
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
			// jika array[min_index] > array[j] maka ubah min_index
      if (array[min_index] > array[j])
        min_index = j;
    }
		// jika nim_index tidak sama dengan i, maka tukar nilainya
    if (min_index != i)
      swap(&array[min_index], &array[i]);
  }
}