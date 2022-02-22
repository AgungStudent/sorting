#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void bubble_sort(int array[], int size);

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
	puts("BUBBLE SORT");
	//  cetak ketika data masih acak
  puts("Ini data ketika masih acak: ");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);

  // urutkan data secara ascending
  bubble_sort(data, size);
	// cetak data yang telah diurutkan
  puts("\n\nIni data ketika sudah diurutkan secara ascending:");
  for (int i = 0; i < size; i++)
    printf("%d ", data[i]);
}

// fungsi swap untuk menukar data
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// fungsi bubble_sort untuk mengurutkan data secara bubble_sort
void bubble_sort(int array[], int size) {
  for (int i = 0; i < size; i++)
    for (int k = size - 1; k > i; k--)
		  // jika array[k] < array[k - 1], maka akan ditukar datanya 
      if (array[k] < array[k - 1])
        swap(&array[k], &array[k - 1]);
}