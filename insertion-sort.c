#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int size);
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
	puts("INSERTION SORT");
  //  cetak ketika data masih acak
  puts("Ini data ketika masih acak: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);

  // urutkan data secara ascending menggunakan selection_sort
  insertion_sort(data, size);
  // cetak data setelah diurutkan
  puts("\n\nIni data ketika sudah diurutkan secara ascending:");
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
}

void insertion_sort(int array[], int size) {
	// deklarasi variable
  int temp,j;
  for (int i = 1; i < size; i++) {
    temp = array[i];
		// perulangan untuk mengeser nilai sesuai kondisi yang ditentukkan
    for (j = i - 1; j >= 0 && array[j] > temp; j--) {
      array[j + 1] = array[j];
    }
    array[j + 1] = temp;
  }
}