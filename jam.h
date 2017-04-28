/*File      : jam.h */
/*Nama      : Aflah Tazakka/24010316120037*/
/*Dibuat    : 04 Maret 2017*/
/*Deskripsi : deklarasi TYPE dan prototype type jam */
#ifndef jam_H
#define jam_H
typedef struct
{
int HH;
int MM;
int SS;
}
jam;
/* prototype */
void ResetJam (jam * J);
/* Mengisi sebuah jam J dengan 00:00:00 */
void TulisJam (jam J);
/* menulis sebuah jam */
int JamToDetik (jam J);
/* konversi jam ke detik */
jam DetikToJam (int d);
/* konversi dari detik menjadi jam */
#endif
