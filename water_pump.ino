const int eko=8;        
const int trig=7;        
int mesafe;
int sure;

void setup() {
  pinMode(trig,OUTPUT);        
  pinMode(eko,INPUT);
  pinMode(9,OUTPUT); 
  
  Serial.begin(9600);         
}

void loop() {
 
  digitalWrite(trig, LOW);         
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);       
  delayMicroseconds(20);
  digitalWrite(trig, LOW);         
  sure = pulseIn(eko, HIGH);      
  mesafe= (sure/29.1)/2; 
  Serial.println(mesafe);
  

  if(mesafe<=5){

      digitalWrite(9,HIGH);
      
      Serial.println("START");
     
     
   
  }
  
else{

  
     digitalWrite(9,LOW);

      Serial.println("STOP");
}

 delay(100);
}
