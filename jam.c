<<<<<<< HEAD
/*  Nama file   : jam.c
    Deskripsi   : Program dalam beberapa modul
    Pembuat     : Hamiem Suny Agung Laksono
    tanggal     : 1 Maret 2017
*/


/* Body prototype type jam */
=======
/*File      : jam.c */
/*Nama      : Aflah Tazakka/24010316120037*/
/*Dibuat    : 04 Maret 2017*/
/*Deskripsi : Body prototype type jam */
>>>>>>> origin/master
#include "jam.h"
/* BODY prototype */
void
ResetJam (jam * J)
/* Mengisi sebuah jam J dengan 00:00:00 */
{ /* KAMUS LOKAL */
/* ALGORITMA */
(*J).HH = 0;
(*J).MM = 0;
(*J).SS = 0;
}
void TulisJam (jam J)
<<<<<<< HEAD
/* menulis sebuah jam */
{ /* KAMUS LOKAL */
/* ALGORITMA */
printf ("Jam : %2d:%2d:%2d\n", J.HH, J.MM, J.SS);
}
int JamToDetik (jam J)
/* konversi jam ke detik */
{ /* KAMUS LOKAL */
    /* ALGORITMA */
    return (J.HH * 3600 + J.MM * 60 + J.SS);
=======
/* menulis sebuah jam */{ /* KAMUS LOKAL */
/* ALGORITMA */
printf ("Jam : %2d:%2d:%2d\n", J.HH, J.MM, J.SS);
}
int
JamToDetik (jam J)
/* konversi jam ke detik */
{ /* KAMUS LOKAL */
/* ALGORITMA */
return (J.HH * 3600 + J.MM * 60 + J.SS);
>>>>>>> origin/master
}
jam
DetikToJam (int d)
/* konversi dari detik ke struktur jam */
{ /* KAMUS LOKAL */
<<<<<<< HEAD
    jam J;
    int sisa;
/* ALGORITMA */
    J.HH = d / 3600;
    sisa = d % 3600;
    J.MM = sisa / 60;
    J.SS = sisa % 60;
=======
jam J;
int sisa;
/* ALGORITMA */
J.HH = d / 3600;
sisa = d % 3600;
J.MM = sisa / 60;
J.SS = sisa % 60;
>>>>>>> origin/master
return J;
}
