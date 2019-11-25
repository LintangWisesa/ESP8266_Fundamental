# **Workshop IoT with ESP8266**

![simplinnovation](https://4.bp.blogspot.com/-f7YxPyqHAzY/WJ6VnkvE0SI/AAAAAAAADTQ/0tDQPTrVrtMAFT-q-1-3ktUQT5Il9FGdQCLcB/s350/simpLINnovation1a.png)

# *__2. Digital & Analog Output__*

## **2a. Digital Output :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**
      
      Assemble your parts as the schematics below.
      
      ![Digital_Output](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/2_Digital_Analog_Output/2_Digital_Out.png)

  2. **Sketch :clipboard:**
      
      Open Arduino IDE, type & upload the sketch below.

      - Blinking an LED

        ```c++
        void setup(){
          pinMode(D5, OUTPUT);
        }

        void loop(){
          digitalWrite(D5, HIGH);
          delay(1000);
          digitalWrite(D5, LOW);
          delay(1000);  
        }
        ```

      - Blinking an LED with LED's status on Serial Monitor

        ```c++
        void setup(){
          Serial.begin(115200);
          pinMode(D5, OUTPUT);
        }

        void loop(){
          digitalWrite(D5, HIGH);
          Serial.println('Lampu Nyala');
          delay(1000);
          digitalWrite(D5, LOW);
          Serial.println('Lampu Mati');
          delay(1000);  
        }
        ```

  - __Done!__ :ballot_box_with_check:

#

## **2b. Analog Output :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**

      Assemble your parts as the schematics below.

      ![Analog_Output](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/2_Digital_Analog_Output/2_Analog_Out.png)

  2. **Sketch :clipboard:**
      
      Open Arduino IDE, type & upload the sketch below.

      - Dimming an LED

        ```c++
        void setup(){
          pinMode(D5, OUTPUT);
        }

        void loop(){
          analogWrite(D5, 0);
          delay(10);
          analogWrite(D5, 25);
          delay(10);
          analogWrite(D5, 50);
          delay(10);
          analogWrite(D5, 75);
          delay(10);
          analogWrite(D5, 100);
          delay(10);
          analogWrite(D5, 125);
          delay(10);
          analogWrite(D5, 150);
          delay(10);
          analogWrite(D5, 175);
          delay(10);
          analogWrite(D5, 200);
          delay(10);
          analogWrite(D5, 225);
          delay(10);
          analogWrite(D5, 255);
          delay(10);
          }
        }
        ```

      - Dimming an LED with for loop

        ```c++
        void setup(){
          pinMode(D5, OUTPUT);
        }

        void loop(){
          for(int i=0; i<256; i++){
            analogWrite(D5, i);
            delay(10);
          }
        }
        ```
      
      - Dimming an LED with LED's status on Serial Monitor

        ```c++
        void setup(){
          Serial.begin(115200);
          pinMode(D5, OUTPUT);
        }

        void loop(){
          Serial.println('');
          for(int i=0; i<256; i++){
            analogWrite(D5, i);
            Serial.print('#');
            delay(10);
          }
        }
        ```

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Digital & Analog Input](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
  2.|Digital & Analog Output|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)**_
  3.|Digital & Analog Input|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)**_
  4.|Analog & Digital I/O|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)**_
  5.|ESP8266 & LDR Sensor|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/5_ESP8266_LDR)**_
  6.|ESP8266 WiFi Scanner|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/6_ESP8266_WiFi_Scanner)**_
  7.|Connecting ESP8266 to A WiFi Network|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/7_Connect_to_A_WiFi)**_
  8.|ESP8266 & Blynk|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/8_ESP8266_Blynk)**_
  9.|ESP8266 & Thinger.io|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/9_ESP8266_Thinger)**_

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
