#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup(); 
}
int c = random(14);
void loop()
{
 for(int i = 1; i < 15; i++)
 {
  for(int z = 0; z < 8; z++)
  {
   for(int c = 0; c < 15; c++)
  {
    
    DrawPx(c,z,i);
    
    DisplaySlate();
    delay(1);
   } 
   } 
 } 
}
