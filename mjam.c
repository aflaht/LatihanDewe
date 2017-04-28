/*File      : mjam.c */
/*Nama      : Aflah Tazakka/24010316120037*/
/*Dibuat    : 04 Maret 2017*/
/*Deskripsi : memanfaatkan primitif jam */
#include "jam.h"
int
main ()
{/* KAMUS */
jam J1;
jam J2;
int dt=1000;
/* PROGRAM */
printf ("hello\n");
ResetJam (&J1);
TulisJam (J1);
printf("Konversi jam ke detik: %d\n",JamToDetik(J1));
J2=DetikToJam(dt);
TulisJam(J2);
return 0;
}
