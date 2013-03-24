float temp = 20.1;
int8_t motor_speed[] = {200, 124, 233, 55, 23, 53};
boolean motor_dir[]= {1, 0, 1, 1, 0, 1};
int8_t camera_tilt[] = {125, 200};
int8_t camera_pan[] = {30, 122};
int8_t imu[] = {125, 125, 125}; // roll, yaw, pitch
float depth = 2.5;


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
  Serial.println(depth);
  delay(500);

  
}
