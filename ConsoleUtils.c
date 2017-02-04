// ErrorSoft 2013
#include "stdafx.h"
#include "conio.h"
#include "windows.h"
#include "ConsoleUtils.h"

void SetColor(char Paper, char Ink)
{
  // XXYYBBTT
  CONSOLE_SCREEN_BUFFER_INFO Attribute;
  HANDLE Handle;

  Handle = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(Handle, &Attribute);
  if(Paper == -1)
    Paper = (Attribute.wAttributes >> 4) & 0x0F;
  if(Ink == -1)
    Ink = Attribute.wAttributes & 0x0F;
  SetConsoleTextAttribute(Handle,
    (Ink & 0x0F) | ((Paper << 4) & 0xF0));
}

void SetPaper(char Color){ SetColor(Color, clNone); }
void SetInk(char Color){ SetColor(clNone, Color); }

void Cls(void)
{
  system("cls");
}