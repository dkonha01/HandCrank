
int buttonPin = 1;
int sensorPin = A0; 
int sensorValue = 0; 
int klick = 0;

void setup() {
BeanHid.enable();
pinMode(buttonPin, INPUT_PULLUP);  
}
void loop() {

sensorValue = analogRead(A0);   
     if (sensorValue > 512) {   
          klick = random (1,9);
              if (klick == 1) {
                  BeanHid.sendKeys("s");                 
              } 
              else if (klick == 2){
                  BeanHid.sendKeys("x");         
              }    
              else if (klick == 3){
                  BeanHid.sendKeys("w");   
              }
              else if (klick == 4){
                  BeanHid.sendKeys("z");  
              }
              else if (klick == 5) {
                  BeanHid.sendKeys("d");                
              } 
              else if (klick == 6){
                  BeanHid.sendKeys("r");         
              }    
              else if (klick == 7){
                  BeanHid.sendKeys("a");   
              }
              else if (klick == 8){
                  BeanHid.sendKeys("t");  
              }
     
      else {
            klick == 0;           
          }
      }
}
