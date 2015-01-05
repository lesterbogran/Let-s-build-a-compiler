#ifndef _CRADLE_H
#define _CRADLE_H
#include <stdbool.h>

#define MAX_BUF 100
extern char tmp[MAX_BUF];
extern char ST[];
char Look;

void GetChar();

void Error(char *s);
void Abort(char *s);
void Expected(char *s);
void Match(char x);

void Newline();

int IsAlpha(char c);
int IsDigit(char c);
int IsAddop(char c);
int IsMulop(char c);

char GetName();
int GetNum();

void Emit(char *s);
void EmitLn(char *s);

void Init();
void InitTable();
bool InTable(char name);

char *NewLabel();
void PostLabel(char *label);

/* re-targetable routines */
void Clear();
void Negate();
void LoadConst(int n);
void LoadVar(char name);
void Push();
void PopAdd();
void PopSub();
void PopMul();
void PopDiv();
void Store(char name);
void Undefined(char *name);


#endif
