/*
 * librairie param.h
 */

#define __PARAM_H__

/*
Derniere modification : 2018-12-09 10:45:11
Par : Valentin
*/


//Structure des parametres
typedef struct Param_Lorenz * Param_Lorenz;
typedef struct Param_VanDerPol * Param_VanDerPol;
typedef struct Param_Rossler * Param_Rossler;
typedef union Param * Param;

//Set des parametres
Param setLorenz(Param_Lorenz L, Param P);
Param setVanDerPol(Param_VanDerPol V, Param P);
Param setRossler(Param_Rossler R, Param P);

Param setParamLorenz(Param param, double B, double S, double P);
Param setParamVanDerPol(Param param, double K, double M, double B, double S, double P, double Q);
Param setParamRossler(Param param, double A, double B, double C);

//Recupere les parametres stockés
void get_Param_Lorenz(Param param, double *B, double *P, double *S);
void get_Param_VanDerPol(Param param, double *K, double *M, double *B, double *S, double *P, double *Q);
void get_Param_Rossler(Param param, double *A, double *B, double *C);

//Choix des parametres
Param choix_param(int mode, char * LOG);