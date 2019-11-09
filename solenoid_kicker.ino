#define skick 1  //ソレノイド
#define Lsen 2 //センサ
void setup() {
 Serial.begin(9600);
 pinMode(skick,OUTPUT);
 pinMode(Lsen,INPUT);

}

void loop() {  
  int val = analogRead(Lsen);
  Serial.println(val);

 if(val == 100) //後で調整{
  digitalWrite(skick,HIGH);
 }
}
