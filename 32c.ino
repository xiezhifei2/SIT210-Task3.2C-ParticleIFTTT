// Define our pins
int photoresistor = A0; 
int power = A5; 

void setup() {
    
    // set our pins are inputs or outputs
    pinMode(photoresistor,INPUT);  
    pinMode(power,OUTPUT); 
    
    //turn the photoresistor on
    digitalWrite(power,HIGH);
    
}

void loop() {
    int curren_light = analogRead(photoresistor);
    
    //when light level is getting lower than 
    if (curren_light < 600){
        Particle.publish("light", "dark", PRIVATE);
        }
        
    if(curren_light>600){
        Particle.publish("light", "bright", PRIVATE);
        }
  
  delay(3600s);//1 hour
}

