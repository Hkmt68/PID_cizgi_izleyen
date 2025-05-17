void t_yol()
{
  /***********siyah zeminde****************************/
  
  if(zemin==1 && sensors[0]<300 && sensors[1]<300 && sensors[2]<300 && sensors[3]<300 && sensors[4]<300 && sensors[5]<300 && sensors[6]<300 && sensors[7]<300)
  {
    t_say++;
    while(1)
    {
      sensoroku();
      motorkontrol(min_hiz+ekhiz, min_hiz+ekhiz);
      if(!(sensors[0]<300 && sensors[1]<300 && sensors[2]<300 && sensors[3]<300 && sensors[4]<300 && sensors[5]<300 && sensors[6]<300 && sensors[7]<300))
      {
        break;
      }
    }
  }
/***********beyaz zeminde****************************/
  if(zemin==0 && sensors[0]>700 && sensors[1]>700 && sensors[2]>700 && sensors[3]>700 && sensors[4]>700 && sensors[5]>700 && sensors[6]>700 && sensors[7]>700)
  {
     t_say++;
      while(1)
        {
          sensoroku();
          motorkontrol(min_hiz+ekhiz, min_hiz+ekhiz);
          if(!(sensors[0]>700 && sensors[1]>700 && sensors[2]>700 && sensors[3]>700 && sensors[4]>700 && sensors[5]>700 && sensors[6]>700 && sensors[7]>700))
          {
            break;
          }
        }
  }
}
