# Sorting

## Daftar file
1. [Chellenge Bubble Sort](https://github.com/AgungStudent/sorting/blob/main/chellenge-bubble-sort.c)
2. [Chellenge Exchange Sort](https://github.com/AgungStudent/sorting/blob/main/chellenge-exchange-sort.c)
3. [Bubble Sort](https://github.com/AgungStudent/sorting/blob/main/bubble-sort.c)
4. [Insertion Sort](https://github.com/AgungStudent/sorting/blob/main/insertion-sort.c)
5. [Selection Sort](https://github.com/AgungStudent/sorting/blob/main/selection-sort.c)

## Sorting
Sorting adalah proses pengurutan data. *Ascending* adalah pengurutan data dari kecil ke besar. Sedangkan *descending* adalah pengurutan data dari besar ke kecil. Untuk visualisasi metode pengurutan bisa lihat di link berikut [visualisasi-sorting](https://visualgo.net/en/sorting).

## Metode Pengurutan
ada banyak sekali metode pengurutan, diantarannya sebagai berikut:
### Bubble Sort
![image](https://user-images.githubusercontent.com/99482764/155095410-0787c9d2-29ee-4a2e-a8a4-8d81186bcf93.png)
Burbble mengurutkan data dengan membandingkan data sekarang dengan data berikutnya. Jika yang dicari *ascanding*, maka ketika <br>`data sekarang > data berikutnya` akan ditukar. Begitu pula sebaliknya untuk *descending* hanya tinggal ubah dari `>` menjadi `<`. Metode ini seolah-olah mengeser data dari kiri ke kanan atau sebaliknya. Kita bisa memulai membandingkan data dari paling awal/paling akhir. Bubble akan berhenti jika semua data telah diurutkan dan tidak ada pertukaran data yang bisa dilakukan lagi.
### Selection Sort
![image](https://user-images.githubusercontent.com/99482764/155095944-3d6eb274-5cbb-4f47-ac55-b6977a03024b.png)
Selection Sort merupakan metode sorting yang mengkombinasikan *searching* dan *sorting*. Untuk setiap putaran akan dibandingkan data dari `min_index` dengan data index berikutnya. Jika `data min_index > data index berikutnya` maka akan diubah nilai dari `min_index` dengan index berikutnya(untuk *descending* ubah simbol `>`). Setelah pembandingan data sampai pada index terakhir/perulangan selesai, maka tukar data saat ini dengan data `min_index` yang berisi data paling kecil. Untuk lebih jelas silahkan liat visualisasi diatas tadi.
### Insertion Sort
![image](https://user-images.githubusercontent.com/99482764/155095864-44507a79-f2af-4995-bdd8-af8a35f65ffb.png)
Insertion Sort merupakan metode pengurutan data yang paling cepat diantara kedua metode diatas. Insorting sort bisa diibaratkan seperti pengurutan kartu, selembar demi selembar kartu diambil lalu ditempatkan/disisipkan pada tempat yang seharusnya. Begitu juga pada sorting, data akan diurutkan dimulai dari data kedua sampai akhir. Jika ditemukkan data yang lebih kecil, maka akan disisipkan di tempatnya. Pada proses ini data-data yang lain akan bergeser ke belakang.
