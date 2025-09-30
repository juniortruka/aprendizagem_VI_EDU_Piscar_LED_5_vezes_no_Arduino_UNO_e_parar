// Piscar 5 vezes o LED e depois parar 


  int led = 13; 

  void setup () {
 
   pinMode (led, OUTPUT); 

  }

  void loop () {

   for (int i=0; i<5; i++) {

digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
   }

   delay(1000);
}
