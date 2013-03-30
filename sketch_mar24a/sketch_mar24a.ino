float temp = 20.1;
int motor_speed[] = {200, 124, 233, 55, 23, 53};
boolean motor_dir[]= {1, 0, 1, 1, 0, 1}; // 1 forward, 0 rev
uint8_t camera_tilt[] = {125, 200};
uint8_t camera_pan[] = {30, 122};
uint8_t imu[] = {125, 125, 125}; // roll, yaw, pitch

float depth = 2.5;
float psi = 14.5;
int8_t humidity = 50;
float voltage = 12.53;
float current = 10.5;

void setup() {
 Serial.begin(9600); 
}

void loop() {
  Serial.print(temp);
  Serial.print(',');
  for(int x = 0; x < 6; x++) { Serial.print(motor_speed[x]); Serial.print(','); }
  for(int x = 0; x < 6; x++) { Serial.print(motor_dir[x]); Serial.print(','); }
  for(int x = 0; x < 2; x++) { Serial.print(camera_tilt[x]); Serial.print(','); }
  for(int x = 0; x < 2; x++) { Serial.print(camera_pan[x]); Serial.print(','); }
  for(int x = 0; x < 3; x++) { Serial.print(imu[x]); Serial.print(','); }
  Serial.print(depth);
  Serial.print(',');
  Serial.print(psi);
  Serial.print(',');  
  Serial.print(humidity);
  Serial.print(',');  
  Serial.print(voltage);
  Serial.print(',');    
  Serial.print(current);
  Serial.print(',');    
  
  delay(500);

  
}
