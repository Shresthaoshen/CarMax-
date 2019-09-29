#include <Wire.h>
#include "rgb_lcd.h"

//Cost of grove lcd rgb $13.90 + $13.40 + $4.45 = $31.75 per individial consumer but prices vary for bulk prices

rgb_lcd lcd;

 int colorR = 0;
 int colorG = 0;
 int colorB = 0;
 int x = 2;
 int indx = 0;
String sold = "No";
String message="Default";
String line2 = "Scan QR Code";

void setup() 
{
  if(sold.equals("Yes")){
  indx = 6;
  line2 = "";
  message = "Sold";
}
if(sold.equals("Maybe")){
  colorR = 255;
  colorG = 255;
  colorR = 255;
  colorG = 0;
  colorB = 0;
  colorB = 0;
  indx=2;
  message = "Being Viewed";

  
}
if(sold.equals("No")){
   colorR = 0;
  colorG = 255;
  colorB = 0;
  indx = 4;
  message = "For Sale";
  
}
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
  lcd.setCursor(indx,0);
    lcd.setRGB(colorR, colorG, colorB);

    // Print a message to the LCD.
    lcd.print(message);
  
    lcd.setCursor(x,1);
    lcd.print(line2);


    delay(1000);
}

void loop() 
{
  
  
  
}
