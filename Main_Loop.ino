void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  RGBSensorSetup();
  stateMachineSetup();
  motorSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
 if(!emergencystop){ 
  BTLoop();
  SensorLoop();
  stateMachineLoop();
  motorLoop();
 } else {
  end
 }
}
