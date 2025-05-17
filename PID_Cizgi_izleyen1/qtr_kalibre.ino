void qtr_kalibrasyon()
{
  /******************************otomatik**************************************/
//  for(int i=0;i<150;i++) 
//    {
//        if(25<=i && i<35) motorkontrol(-15,15);
//        if(35<=i && i<40) motorkontrol(15,-15);
//        if(45<=i && i<50) motorkontrol(-15,15);
//        qtr.calibrate(); delay(1);
//      
//        if(i>=50){ motorkontrol(0,0); delay(3); }
//      }

  /******************************manuel**************************************/
        
          // analogRead() takes about 0.1 ms on an AVR.
          // 0.1 ms per sensor * 4 samples per sensor read (default) * 6 sensors
          // * 10 reads per calibrate() call = ~24 ms per calibrate() call.
          // Call calibrate() 400 times to make calibration take about 10 seconds.
          for (uint16_t i = 0; i < 200; i++)
          {
            qtr.calibrate();
          }
          
  
}
