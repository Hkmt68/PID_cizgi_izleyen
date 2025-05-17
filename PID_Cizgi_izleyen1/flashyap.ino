void flashyap()
{
   for(int i=0;i<20;i++)
   {
      digitalWrite(LED, HIGH);
      delay(50);
      digitalWrite(LED, LOW);
      delay(50);
   }
}
