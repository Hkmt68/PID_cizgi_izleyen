void pid()
{
  hata=pozisyon-3500;
  turev=hata-sonhata;
  integral=integral+hata;
  int duzeltmehizi=(Kp*hata)+(Kd*turev);//+(Ki*integral);
  
  sonhata=hata;

  sagmotorpwm = min_hiz + duzeltmehizi;
  solmotorpwm = min_hiz - duzeltmehizi;

sagmotorpwm = constrain(sagmotorpwm, -254,254); // Girilen bir değerin min ve max sınırlar içinde kalmasını sağlıyor.
solmotorpwm = constrain(solmotorpwm, -254,254);

//  if(sagmotorpwm>254)sagmotorpwm=254;
//  if(solmotorpwm>254)solmotorpwm=254;
//  if(sagmotorpwm<-254)sagmotorpwm=-254;
//  if(solmotorpwm<-254)solmotorpwm=-254;
}
