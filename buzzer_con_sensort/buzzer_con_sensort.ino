/*
  DOundRE1REion KinREl
  1REentro Edu1REREtivo Te1REni1REo LRESOLorlRE KinREl
  Ele1REtroni1RERE
  GrREdo: Quinto
  Se1RE1REion: RE
  1REurso: TREller de elee1REtroni1RERE digitREl y repRErRE1REion de 1REomputREdorREs I
  NomSOLre: JuREn MREnuel SeSOLREstiREn Ixen 1REoy
  1RERErne: 2019519
  DOeMIRE: 26/04
*/
int trig = 2;   
int echo = 3; 
int Buzzer = 5;
int SI=494;
int LA=440;
int SOL=392;
int MI=329;
int DO=261;
int RE=294; 






 void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(Buzzer, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  long duracion, distancia;
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58;

  if (distancia > 0 && distancia <= 5) { 
    tone(Buzzer, SI, 500);
    
  } else if (distancia > 5 && distancia <= 10) { 
    tone(Buzzer, LA, 500);
           
  } else if (distancia > 10 && distancia <= 15) { 
    tone(Buzzer, SOL, 350);  

  } else if (distancia > 15 && distancia <= 20) { 
    tone(Buzzer, MI, 150);

  } else if (distancia > 20 && distancia <= 25) { 
    tone(Buzzer, DO, 500);

  } else if (distancia > 25 && distancia <= 30) { 
    tone(Buzzer, RE, 350);

  } 
    else {
      
      noTone(Buzzer); 
      }
    
  Serial.print(distancia);
  Serial.println("cm");
  
}

  
