/* This is a program that computes for the final velocity of a realistic situation of an atom travelling at a certain velocity. */

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string>
int main ()
{
char T, *TT, p, e, ans;  
int n;

float vi, va, vb, m,mp,me; 
/*
vi= Initial Velocity
va= Electric Potential at point A
vb= Electric Potential at point B
m= mass
mp= mass of proton
me= mass of electron
vf= final valocity
q= charge
a= acceleration
k&k2=9*10^9
*/
float vf,q, a;
long double k ,k2;
float r;
menu:
     printf("\tAn atom with a certain charge and mass travelling with an initial \nvelocity enters an electric field, travelling from point A, at a given \npotential, to point B, at another potential. Find the velocity of the particle\nat point B.\n\n\n");
     printf("Input the atom's information below\n");
     
     printf("Atom: proton or electron? (p/e): ");
     scanf("\n%s", &T);
     switch(T) 
     {
  default:
          {
    system("cls");
    printf("\n*****************************\nwrong input, please follow instructions.\n\n\n\n\n");
    goto menu;

system("PAUSE");
    
}
     case 'p':
          q=1.6*pow(10,-19);
          m=1.67262178*pow(10,-27);
          break;
     case 'e':
          q=-1.6*pow(10,-19);
          m=9.10938291*pow(10,-31);
          break;
          
                  }

     {
         

     printf("\t %s's tinitial velocity?: ", &T);
     scanf("\n%f", &vi);
     printf("\t %s's telectric potential at point A?: ",&T );
     scanf("\n%f", &va);
     printf("\t %s's telectric potential at point B?: ", &T );
     scanf("\n%f", &vb);
     if (((vb+va)*q)<0)
     {
                   printf("Unrealistic input. Enter higher negative value of VA or VB.\n");
                   system("PAUSE");
                   system("cls");
                   goto menu;
                   }
     }
     k=9000;
     k2=1000000;
     r =((float)k*q*(float)k2)/(va+vb);
     a =((q)*(vb-va))/(m*r);
     
     vf=((2*((q)*(vb-va))/m)+(vi*vi));
     if (vf<0) 
     {
     vf=vf*-1;
     }
     vf=sqrt(vf);
   
     
     
                              
                              
     //

          printf("**************DATA**************\n\n"); 

char str[5];
{
 str[2]=T;
}
 

     float x1[8];
     {
     x1[0]=printf("type: %c\n", T);
     x1[1]=printf("charge: %.3e\n", q);
     x1[2]=printf("mass: %.3e\n", m);
     x1[3]=printf("initial velocity: %.3f\n", vi);
     x1[4]=printf("potential at point A: %.3f\n", va);
     x1[5]=printf("potential at point B: %.3f\n", vb);
     x1[6]=printf("electric field: %.3f\n\n\n", ef);
     x1[7]=printf("final velocity: %.20f\n", vf);
     }





printf("Do you wish to solve for another velocity? (y/n): ");
scanf("\n%c", &ans);
if (ans=='y')
{
             system("cls");
             printf("\n*****************************\nYou have chosen to solve again. Your wish is my command\n\n\n");
             goto menu;
             }
             else if (ans=='n')
             {
                  printf("Thank You!\n\n");
}
                                    
     system("PAUSE");
     return 0;
}

     //printf("type  \t" "charge\t" "    mass\t" "velocity\t" "V at a\t" "V at b\t\n");
     //if (T == 'p')
     
                        //  printf("proton\n");
                          
                         // else 
                          
                         // printf("electron\n");
                         
                    
     
