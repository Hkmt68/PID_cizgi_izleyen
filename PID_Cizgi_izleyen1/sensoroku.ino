void sensoroku()
{
 pozisyon = qtr.readLineBlack(sensors); // for a white line, use readLineWhite() instead
  

  if(sensors[0]<300 && sensors[7]<300) zemin=0; // beyaz
  if(sensors[0]>700 && sensors[7]>700) zemin=1; // siyah
}
