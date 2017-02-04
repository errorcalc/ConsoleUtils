// ErrorSoft 2013
#ifndef _CONSOLEUTILS_H
#define _CONSOLEUTILS_H

enum COLORS
{
  clBlack,        
  clBlue,
  clGreen,
  clCyan,
  clRed,
  clMagenta,
  clBrown,
  clLightGray,
  clDarkGray, //-
  clLightBlue,
  clLightGreen,
  clLightCyan,
  clLightRed,
  clLightMagenta,
  clYellow,
  clWhite,
  clNone = -1
};

void SetColor(char Paper, char Ink);

void SetPaper(char Color);
void SetInk(char Color);

void Cls(void);

#endif