
int val=135;
int data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
   pinMode(5,OUTPUT);
}
void down(){
  analogWrite(5,val+70);
  analogWrite(6,0);
  analogWrite(9,val+100);
  analogWrite(10,0);
  
}
void up(){
  analogWrite(5,0);
  analogWrite(6,val+100);
  analogWrite(9,0);
  analogWrite(10,val+70);
  
}
void left(){
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,val+100);
  
}
void right(){
  analogWrite(5,0);
  analogWrite(6,val+100);
  analogWrite(9,0);
  analogWrite(10,0);
  
}
void stopAll(){
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
  {
    data=Serial.read();
    Serial.println(data);
    if(data==1)
    {
       Serial.println("*");
      up();
      
    }
     if(data==3)
    {
      down();
       Serial.println("#");
    
    }
     if(data==2)
    {
        Serial.println("#");
      stopAll();
    }
    if(data==4)
    {
        Serial.println("#");
      left();
    }
     if(data==5)
    {
        Serial.println("#");
      right();
    }
     
  }




  



  

}
