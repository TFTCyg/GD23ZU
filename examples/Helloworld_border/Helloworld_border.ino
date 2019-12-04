#include <GD23ZU.h>

int MCUID;

void setup()
{
  GD.begin(GD_STORAGE);
  //GD.cmd_setrotate(0);
  IDEMCU();
}

void loop()
{
GD.Clear();
  GD.cmd_text(GD.w / 2, GD.h / 2, 31, OPT_CENTER, "Hello world");

GD.Begin(LINES);
  GD.ColorRGB(255,255,255);
  GD.Vertex2f(0*16, 0*16);    GD.Vertex2f((GD.w)*16, 0*16);  //Superior
  GD.Vertex2f(0*16, (GD.h-1)*16);  GD.Vertex2f((GD.w)*16, (GD.h-1)*16); //inferior
  GD.Vertex2f(0*16, 0*16);  GD.Vertex2f(0*16, (GD.h-1)*16); //izquierda
  GD.Vertex2f((GD.w-1)*16, 0*16);  GD.Vertex2f((GD.w-1)*16, (GD.h-1)*16); //derecha  
  
Parametros();
  
GD.swap();
} 