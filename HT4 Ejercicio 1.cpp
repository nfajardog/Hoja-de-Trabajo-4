#include <stdio.h> 
#include <conio.h> 
#include <iostream>




Int main ();
{clrscr (); 
char nom [50];
 int tip = 0, nh = 0;
 flotante pre = 0, des = 0, pt = 0; 
printf ("Nombre del agricultor:"); ges (nom);
 hacer}
{printf ("Ingrese el numero de hectareas a fumigar: \ n"); 
scanf ("% d", & nh); 
} while (nh <1); 
printf ("La Compañía ¡cuenta con los siguientes servicios: \ n"); 
printf ("1.Fumigacion contra las malas hierbas; $ 10 por hectarea. \ n"); 
printf ("2.Fumigacion contra langostas; $ 20 por hectárea. \ n");
 printf ("3.Fumigacion contra gusanos; $ 30 por hectárea. \ n"); 
printf ("4.Fumigacion contra todo lo anterior; $ 50 por hectárea. \ n"); 
printf ("Elija una opción del 1-4. \ n"); 
scanf ("% d", & tip);
 interruptor (punta)
 {caso 1: pre = 10; descanso; 
caso 2: pre = 20; descanso; 
caso 3: pre = 30; descanso; 
caso 4: pre = 50; descanso; 
defecto: 
printf ("No ingreso una opción del 1-4 \ n"); 
}
pt = nh * pre; 
if (nh> 500)
 pt = pt - pt * 0.05;
 if (pt> 1500) 
{des = (pt - 1500) * 0.10; 
pt = pt - des;
 } 
printf ("El señor% s debera cancelar% .2f \ n", nom, pt); 
getch ();
 }
Return 0;

