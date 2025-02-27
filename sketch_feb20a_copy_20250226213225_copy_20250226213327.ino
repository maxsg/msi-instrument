
//1st Frenquency Valeus
int c3Scale[] = {130.8, 146.85, 164.8, 174.6, 196, 220, 246.95, 261.6};
int c3xScale[] = {138.55, 155.55, 174.6, 185, 207.65, 233.1, 261.65, 277.2};
int d3Scale[] = {146.85, 164.8, 185, 196, 220, 246.95, 277.2, 293.65};
int e3Scale[] = {164.8, 185, 207.5, 220, 246.95, 277.2, 311.15, 329.65};
int f3xScale[] = {185, 207.65, 233.1, 246.95, 277.2, 311.1, 349.25, 370};
int g3Scale[] = {196, 220, 246.95, 261.6, 293.65, 329.65, 370, 392};
int a3Scale[] = {220, 246.95, 277.2, 293.65, 329.65, 370, 415.05, 440};
int b3Scale[] = {246.95, 277.2, 311.15, 329.65, 370, 415.05, 466.15, 493.9};


//2nd Frequency Values
int c4Scale[] = {261.6, 293.7, 329.6, 349.2, 392, 440, 493.9, 523.2};
int c4xScale[] = {277.1, 311.1, 349.2, 370, 415.3, 466.2, 523.3, 554.4};
int d4Scale[] = {293.7, 329.6, 370, 392, 440, 493.9, 554.4, 587.3};
int e4Scale[] = {329.6, 370, 415, 440, 493.9, 554.4, 622.3, 659.3};
int f4xScale[] = {370, 415.3, 466.2, 493.9, 554.4, 622.3, 698.5, 740};
int g4Scale[] = {392, 440, 493.9, 523.2, 587.3, 659.3, 740, 784};
int a4Scale[] = {440, 493.9, 554.4, 587.3, 659.3, 740, 830.1, 880};
int b4Scale[] = {493.9, 554.4, 622.3, 659.3, 740, 830.1, 932.3, 987.8};

//3rd Frenquency Values
int c5Scale[] = {523.2, 587.4, 659.2, 698.4, 784, 880, 987.8, 1046.4};
int c5xScale[] = {554.2, 622.2, 698.4, 740, 830.6, 932.4, 1046.6, 1108.8};
int d5Scale[] = {587.4, 659.2, 740, 784, 880, 987.8, 1108.8, 1174.6};
int e5Scale[] = {659.2, 740, 830, 880, 987.8, 1108.8, 1244.6, 1318.6};
int f5xScale[] = {740, 830.6, 932.4, 987.8, 1108.8, 1244.6, 1397, 1480};
int g5Scale[] = {784 ,880, 987.8, 1046.4, 1174.6, 1318.6, 1480, 1568};
int a5Scale[] = {880, 987.8, 1108.8, 1174.6, 1318.6, 1480, 1660.2, 1760};
int b5Scale[] = {987.8, 1108.8, 1244.6, 1318.6, 1480, 1660.2, 1864.6, 1975.6};

//speaker
int speaker =  7;

//distance values

int dOne = 3;
int dTwo = 6;
int dThree =  9;
int dFour = 12;
int dFive = 15;
int dSix = 18;
int dSeven = 21;
int dEight = 24;

int duration = 50;

//Magnet Sensor
int magnetPin[] = {3,2};
int state = 0; 

//Distance Sensor
const int trigPin[] = {3, 5, 9, 11};
const int echoPin[] = {4, 6, 10, 12};

int frequency;

void setup() 
{
  Serial.begin(9600);

  //Magnet Sensor

  for (int i = 0; i <= 1; i++) 
  {
  pinMode(magnetPin[i], INPUT); 
  }
  
  //Distance Sensor
  for (int i = 0; i <= 4; i++) 
  {
    pinMode(trigPin[i], OUTPUT); 
    pinMode(echoPin[i], INPUT); 
  }

 
}

void loop() 
{
  playingCandFxNotes();
  playingCxandGNotes();
  playingDandANotes();
  playingEandBNotes();
}


void playingCandFxNotes()
{

  //first magnet sensor
  state = digitalRead(magnetPin[0]);
  if (state == HIGH)
  {
    Serial.print("yes");
  }else{

  //second magnet sensor
  state = digitalRead(magnetPin[1]);
    if (state == LOW)
    {
        int sensorValue = analogRead(A0);
        delay(1);

      if (sensorValue <= 300)
      {
        void cThreeScale(); 
      }

      else if (sensorValue <= 600)
      {
        void cFourScale();
      }

      else
      {
        void cFiveScale();  
      }
      
    }

    else
    {
      int sensorValue = analogRead(A0);
      delay(1);

      if (sensorValue <= 300)
      {
        void fThreexScale();
      }

      else if (sensorValue <= 600)
      {
        void fFourxScale();
      }

      else
      {
        void fFivexScale();
      }
      
    }
  }
    
}

void playingCxandGNotes()
{


  //first magnet sensor
  state = digitalRead(magnetPin[0]);
  if (state == LOW)
  {}

  else 
  {
  //second magnet sensor
  state = digitalRead(magnetPin[1]);
    if (state == LOW)
    {
      int sensorValue = analogRead(A0);
      delay(1);

      if (sensorValue <= 300)
      {
        void cThreexScale();
      }

      else if (sensorValue <= 600)
      {
        void cFourxScale();
      }

      else
      {
        void cFivexScale();
      }
      
    }

    else
    {
      if (state == LOW)
      {
        int sensorValue = analogRead(A0);
        delay(1);

        if (sensorValue <= 300)
        {
          void gThreeScale();
        }

        else if (sensorValue <= 600)
        {
          void gFourScale();
        }

        else
        {
          void gFiveScale();
        }
      
      }
    }
  }
    
}

void playingDandANotes()
{


 //first magnet sensor
  state = digitalRead(magnetPin[0]);
  if (state == LOW)
  {}

  else 
  {
  //second magnet sensor
  state = digitalRead(magnetPin[1]);
    if (state == LOW)
    {
        int sensorValue = analogRead(A0);
        delay(1);

      if (sensorValue <= 300)
      {
        void dThreeScale();
      }

      else if (sensorValue <= 600)
      {
        void dFourScale();
      }

      else
      {
        void dFiveScale();
      }
      
    }

    else
    {
      if (state == LOW)
      {
        int sensorValue = analogRead(A0);
        delay(1);

        if (sensorValue <= 300)
        {
          void aThreeScale();
        }

        else if (sensorValue <= 600)
        {
          void aFourScale();
        }

        else
        {
          void aFiveScale();
        }
      
      }
    }
  }
}

void playingEandBNotes()
{

  //first magnet sensor
  state = digitalRead(magnetPin[0]);
  if (state == LOW)
  {}

  else 
  {
  //second magnet sensor
  state = digitalRead(magnetPin[1]);
    if (state == LOW)
    {
      int sensorValue = analogRead(A0);
      delay(1);

      if (sensorValue <= 300)
      {
        void eThreeScale();
      }

      else if (sensorValue <= 600)
      {
        void eFourScale();
      }

      else
      {
        void eFiveScale();
      }
      
    }

    else
    {
      if (state == LOW)
      {
        int sensorValue = analogRead(A0);
        delay(1);

        if (sensorValue <= 300)
        {
          void bThreeScale();
        }

        else if (sensorValue <= 600)
        {
          void bFourScale();
        }

        else
        {
          void bFiveScale();
        }
        
      }
    }
  }
}

//work
void potentiometer()
{
  int sensorValue = analogRead(A0);
  delay(1); 
}

void distanceSensor()
{
  int x = 1;
  digitalWrite(trigPin[x], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[x], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[x], LOW);
  int duration = pulseIn(echoPin[x], HIGH);
  int distance = duration * 0.034 / 2;
}

//1st Frequency Scales
void cThreeScale()
{
    //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;
 // Serial.println(distance);

  int c3Scale[] = {130.8, 146.85, 164.8, 174.6, 196, 220, 246.95, 261.6};
    
  if (distance < dOne) //1
  {
    frequency = c3Scale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c3Scale[1]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c3Scale[2]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c3Scale[3];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c3Scale[4];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c3Scale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c3Scale[6]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c3Scale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void cThreexScale()
{
  //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int c3xScale[] = {138.55, 155.55, 174.6, 185, 207.65, 233.1, 261.65, 277.2};
    
  if (distance < dOne) //1
  {
    frequency = c3xScale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c3xScale[1];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c3xScale[2];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c3xScale[3];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c3xScale[4]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c3xScale[5];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c3xScale[6];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c3xScale[7]; 
    tone(trigPin[1], frequency, duration);
  }
}

void dThreeScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int d3Scale[] = {146.85, 164.8, 185, 196, 220, 246.95, 277.2, 293.65};
    
  if (distance < dOne) //1
  {
    frequency = d3Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = d3Scale[1]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = d3Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = d3Scale[3];  
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = d3Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = d3Scale[5];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = d3Scale[6]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dEight) //8
  {
  	frequency = d3Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void eThreeScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int e3Scale[] = {164.8, 185, 207.5, 220, 246.95, 277.2, 311.15, 329.65};
    
  if (distance < dOne) //1
  {
    frequency = e3Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = e3Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = e3Scale[2]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = e3Scale[3]; 
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = e3Scale[4]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = e3Scale[5]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = e3Scale[6];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = e3Scale[7]; 
    tone(trigPin[3], frequency, duration);
  }
}

void fThreexScale()
{
    //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;

  int f3xScale[] = {185, 207.65, 233.1, 246.95, 277.2, 311.1, 349.25, 370};
    
  if (distance < dOne) //1
  {
    frequency = f3xScale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = f3xScale[1];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = f3xScale[2]; 
    tone(trigPin[0], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = f3xScale[3];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = f3xScale[4]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = f3xScale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = f3xScale[6];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = f3xScale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void gThreeScale()
{
  //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int g3Scale[] = {196, 220, 246.95, 261.6, 293.65, 329.65, 370, 392};
    
  if (distance < dOne) //1
  {
    frequency = g3Scale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = g3Scale[1];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = g3Scale[2]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = g3Scale[3]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = g3Scale[4];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = g3Scale[5]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = g3Scale[6]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = g3Scale[7];
    tone(trigPin[1], frequency, duration);
  } 
}

void aThreeScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int a3Scale[] = {220, 246.95, 277.2, 293.65, 329.65, 370, 415.05, 440};
    
  if (distance < dOne) //1
  {
    frequency = a3Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = a3Scale[1];
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = a3Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = a3Scale[3]; 
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = a3Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = a3Scale[5];
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = a3Scale[6];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = a3Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void bThreeScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int b3Scale[] = {246.95, 277.2, 311.15, 329.65, 370, 415.05, 466.15, 493.9};
    
  if (distance < dOne) //1
  {
    frequency = b3Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = b3Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = b3Scale[2];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFour) //4
  {
  	frequency = b3Scale[3];
    tone(trigPin[3], frequency, duration);   
  }
  
  else if (distance < dFive) //5
  {
  	frequency = b3Scale[4];
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSix) //6
  {
  	frequency = b3Scale[5];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = b3Scale[6];  
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = b3Scale[7];
    tone(trigPin[3], frequency, duration); 
  } 
}


//2nd Scale Frequency
void cFourScale()
{
    //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;
  Serial.println(distance);

  int c4Scale[] = {261.6, 293.7, 329.6, 349.2, 392, 440, 493.9, 523.2};
    
  if (distance < dOne) //1
  {
    frequency = c4Scale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c4Scale[1]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c4Scale[2]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c4Scale[3];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c4Scale[4];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c4Scale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c4Scale[6]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c4Scale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void cFourxScale()
{
    //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;
  
  int c4xScale[] = {277.1, 311.1, 349.2, 370, 415.3, 466.2, 523.3, 554.4};
    
  if (distance < dOne) //1
  {
    frequency = c4xScale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c4xScale[1];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c4xScale[2];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c4xScale[3];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c4xScale[4]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c4xScale[5];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c4xScale[6];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c4xScale[7]; 
    tone(trigPin[1], frequency, duration);
  }
}

void dFourScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int d4Scale[] = {293.7, 329.6, 370, 392, 440, 493.9, 554.4, 587.3};
    
  if (distance < dOne) //1
  {
    frequency = d4Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = d4Scale[1]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = d4Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = d4Scale[3];  
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = d4Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = d4Scale[5];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = d4Scale[6]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dEight) //8
  {
  	frequency = d4Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void eFourScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int e4Scale[] = {329.6, 370, 415, 440, 493.9, 554.4, 622.3, 659.3};
    
  if (distance < dOne) //1
  {
    frequency = e4Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = e4Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = e4Scale[2]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = e4Scale[3]; 
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = e4Scale[4]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = e4Scale[5]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = e4Scale[6];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = e4Scale[7]; 
    tone(trigPin[3], frequency, duration);
  }
}

void fFourxScale()
{
    //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;

  int f4xScale[] = {370, 415.3, 466.2, 493.9, 554.4, 622.3, 698.5, 740};
    
  if (distance < dOne) //1
  {
    frequency = f4xScale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = f4xScale[1];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = f4xScale[2]; 
    tone(trigPin[0], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = f4xScale[3];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = f4xScale[4]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = f4xScale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = f4xScale[6];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = f4xScale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void gFourScale()
{
    //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int g4Scale[] = {392, 440, 493.9, 523.2, 587.3, 659.3, 740, 784};
    
  if (distance < dOne) //1
  {
    frequency = g4Scale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = g4Scale[1];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = g4Scale[2]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = g4Scale[3]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = g4Scale[4];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = g4Scale[5]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = g4Scale[6]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = g4Scale[7];
    tone(trigPin[1], frequency, duration);
  } 
}

void aFourScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int a4Scale[] = {440, 493.9, 554.4, 587.3, 659.3, 740, 830.1, 880};
    
  if (distance < dOne) //1
  {
    frequency = a4Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = a4Scale[1];
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = a4Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = a4Scale[3]; 
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = a4Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = a4Scale[5];
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = a4Scale[6];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = a4Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void bFourScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int b4Scale[] = {493.9, 554.4, 622.3, 659.3, 740, 830.1, 932.3, 987.8};
    
  if (distance < dOne) //1
  {
    frequency = b4Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = b4Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = b4Scale[2];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFour) //4
  {
  	frequency = b4Scale[3];
    tone(trigPin[3], frequency, duration);   
  }
  
  else if (distance < dFive) //5
  {
  	frequency = b4Scale[4];
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSix) //6
  {
  	frequency = b4Scale[5];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = b4Scale[6];  
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = b4Scale[7];
    tone(trigPin[3], frequency, duration); 
  } 
}


//3rd Frequency Scales(add tone)
void cFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;

  int c5Scale[] = {523.2, 587.4, 659.2, 698.4, 784, 880, 987.8, 1046.4};
    
  if (distance < dOne) //1
  {
    frequency = c5Scale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c5Scale[1]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c5Scale[2]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c5Scale[3];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c5Scale[4];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c5Scale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c5Scale[6]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c5Scale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void cFivexScale()
{
    //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int c5xScale[] = {554.2, 622.2, 698.4, 740, 830.6, 932.4, 1046.6, 1108.8};
    
  if (distance < dOne) //1
  {
    frequency = c5xScale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = c5xScale[1];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = c5xScale[2];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dFour) //4
  {
  	frequency = c5xScale[3];
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = c5xScale[4]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = c5xScale[5];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = c5xScale[6];
    tone(trigPin[1], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = c5xScale[7]; 
    tone(trigPin[1], frequency, duration);
  }
}

void dFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int d5Scale[] = {587.4, 659.2, 740, 784, 880, 987.8, 1108.8, 1174.6};
    
  if (distance < dOne) //1
  {
    frequency = d5Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = d5Scale[1]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = d5Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = d5Scale[3];  
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = d5Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = d5Scale[5];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = d5Scale[6]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dEight) //8
  {
  	frequency = d5Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void eFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int e5Scale[] = {659.2, 740, 830, 880, 987.8, 1108.8, 1244.6, 1318.6};
    
  if (distance < dOne) //1
  {
    frequency = e5Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = e5Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = e5Scale[2]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = e5Scale[3]; 
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = e5Scale[4]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = e5Scale[5]; 
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = e5Scale[6];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dEight) //8
  {
  	frequency = e5Scale[7]; 
    tone(trigPin[3], frequency, duration);
  }
}

void fFivexScale()
{
  //setting up notes
  digitalWrite(trigPin[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[0], LOW);
  int duration = pulseIn(echoPin[0], HIGH);
  int distance = duration * 0.034 / 2;

  int f5xScale[] = {740, 830.6, 932.4, 987.8, 1108.8, 1244.6, 1397, 1480};
    
  if (distance < dOne) //1
  {
    frequency = f5xScale[0];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = f5xScale[1];
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = f5xScale[2]; 
    tone(trigPin[0], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = f5xScale[3];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dFive) //5
  {
  	frequency = f5xScale[4]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = f5xScale[5]; 
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = f5xScale[6];  
    tone(trigPin[0], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = f5xScale[7]; 
    tone(trigPin[0], frequency, duration);
  }
}

void gFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[1], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int g5Scale[] = {784 ,880, 987.8, 1046.4, 1174.6, 1318.6, 1480, 1568};
    
  if (distance < dOne) //1
  {
    frequency = g5Scale[0];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = g5Scale[1];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = g5Scale[2]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = g5Scale[3]; 
    tone(trigPin[1], frequency, duration); 
  }
  
  else if (distance < dFive) //5
  {
  	frequency = g5Scale[4];
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = g5Scale[5]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = g5Scale[6]; 
    tone(trigPin[1], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = g5Scale[7];
    tone(trigPin[1], frequency, duration);
  } 
}

void aFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[2], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int a5Scale[] = {880, 987.8, 1108.8, 1174.6, 1318.6, 1480, 1660.2, 1760};
    
  if (distance < dOne) //1
  {
    frequency = a5Scale[0];
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = a5Scale[1];
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dThree) //3
  {
  	frequency = a5Scale[2]; 
    tone(trigPin[2], frequency, duration); 
  }
  
  else if (distance < dFour) //4
  {
  	frequency = a5Scale[3]; 
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dFive) //5
  {
  	frequency = a5Scale[4]; 
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dSix) //6
  {
  	frequency = a5Scale[5];
    tone(trigPin[2], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = a5Scale[6];  
    tone(trigPin[2], frequency, duration);
  }
  
  else if (distance < dEight) //8
  {
  	frequency = a5Scale[7]; 
    tone(trigPin[2], frequency, duration);
  }
}

void bFiveScale()
{
    //setting up notes
  digitalWrite(trigPin[3], LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin[3], HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin[3], LOW);
  int duration = pulseIn(echoPin[1], HIGH);
  int distance = duration * 0.034 / 2;

  int b5Scale[] = {987.8, 1108.8, 1244.6, 1318.6, 1480, 1660.2, 1864.6, 1975.6};
    
  if (distance < dOne) //1
  {
    frequency = b5Scale[0];
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dTwo) //2
  {
  	frequency = b5Scale[1]; 
    tone(trigPin[3], frequency, duration);
  }
  
  else if (distance < dThree) //3
  {
  	frequency = b5Scale[2];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dFour) //4
  {
  	frequency = b5Scale[3];
    tone(trigPin[3], frequency, duration);   
  }
  
  else if (distance < dFive) //5
  {
  	frequency = b5Scale[4];
    tone(trigPin[3], frequency, duration); 
  }
  
  else if (distance < dSix) //6
  {
  	frequency = b5Scale[5];
    tone(trigPin[3], frequency, duration);  
  }
  
  else if (distance < dSeven) //7
  {
  	frequency = b5Scale[6];  
    tone(trigPin[3], frequency, duration);
  }

  else
  {
  	frequency = b5Scale[7];  
    tone(trigPin[3], frequency, duration);
  }}
  
