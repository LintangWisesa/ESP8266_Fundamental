# **Workshop IoT with ESP8266**

![simplinnovation](https://4.bp.blogspot.com/-f7YxPyqHAzY/WJ6VnkvE0SI/AAAAAAAADTQ/0tDQPTrVrtMAFT-q-1-3ktUQT5Il9FGdQCLcB/s350/simpLINnovation1a.png)

# *__0. Initial Setup__*

  There are several development environments that can be used to program the ESP8266. The ESP8266 community created an add-on for the Arduino IDE (_Integrated Development Environment_) that allows you to program the ESP8266 using Arduino IDE and its programming language. So, please follow these steps before the workshop is being held:
  - Installing __Arduino IDE__.
  - Installing __ESP8266 board package__ on Arduino IDE.
  - Installing __CP210x USB driver__ for NodeMCU.

#

## **Installing Arduino IDE :heavy_check_mark:**

  - Simply go to [https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software) and download the Arduino IDE. Make sure you choose the right one, which appropriates with your laptop's _Operating System_.
  
    ![Lintang_Download_Arduino_IDE](https://4.bp.blogspot.com/-fpdi-XdPPWM/Wvzi_zday9I/AAAAAAAAEI0/T4ZnaTQ9h_kpatuTXBheiH3qWTwaxwrlgCLcBGAs/s640/z1.png)
  
  - Install and open it, you will see:

    ![Lintang_Open_Arduino_IDE](https://1.bp.blogspot.com/-KE7fmp4abDc/Wvzi_6Ys6gI/AAAAAAAAEI4/DZ8Gv52z1uME2-Dtuy2XLtdvxfhnFZpDwCLcBGAs/s640/z2.png)

  - __Done!__ :ballot_box_with_check:

#

## **Installing ESP8266 Package on Arduino IDE :heavy_check_mark:**

  - On Arduino IDE, go to **_File - Preferences_** then enter ```http://arduino.esp8266.com/stable/package_esp8266com_index.json``` into the _**Additional Board Manager URLs**_ field as shown in the picture below. Then, click **_OK_** button.  

    ![Lintang_URL_Arduino_IDE](https://2.bp.blogspot.com/-wl6eR6rHvlo/Wv0gt-uuSkI/AAAAAAAAEJI/2KnkbEz0Th4Zc0K3dl3TTDf8oSypObamwCLcBGAs/s640/z3.png)

  - After that, go to **_Tools - Board - Boards Manager_** then search for _ESP8266 package by ESP8266 Community_. Click __*Install*__ button & wait until done. It will take several minutes, depends on your internet speed.

    ![Lintang_ESP8266_Arduino_IDE](https://4.bp.blogspot.com/-1-vEy4i7QnE/Wv0gv24Qg0I/AAAAAAAAEJM/kuxF_7XM2JsKsmO2ChN_ZL75qmWLpMbhACLcBGAs/s640/z4.png)
  
  - If everything goes well, after installation you will see extra ESP8266 board options under __*Tools - Board*__ menu.
  
    ![Lintang_ESP8266_Arduino_Done](https://3.bp.blogspot.com/-kx3Er6qiSzA/Wv0kZWTjd9I/AAAAAAAAEJc/Qx6j0F3pQqUIuODRObD1j7KHwP6qp3lDwCLcBGAs/s640/z5.png)

  - __Done!__ :ballot_box_with_check:

#

## **Installing CP210x USB Driver for NodeMCU :heavy_check_mark:**

  - The CP210x USB to UART Bridge Virtual COM Port (_VCP_) drivers are required for device operation as a Virtual COM Port to facilitate host communication with CP210x products. In this workshop, we'll use NodeMCU ESP8266 which has CP2102 USB-TTL. So we have to download CP210x USB driver first, to communicate with our laptop.

  - Simply go to [https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers) and download the CP210x VCP driver. Make sure you choose the right one, which appropriates with your laptop's _Operating System_.

  - __Done & you're ready to hack with ESP8266!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Hello World!](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)*__ 

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
