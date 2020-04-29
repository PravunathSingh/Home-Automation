# Home-Automation
I have made a WiFi controlled light and fan connection using nodemcu and Blynk.

Requirements:
  1. Nodemcu
  2. A 2-channel relay module (you can also use 4-channel depending on the number of appliances
  3. Few jumper cables / normal wire
  4. Mini breadboard / soldering iron
  5. Double sided tape / any non-inflamable adhesive
  6. Laptop/desktop with ArduinoIDE installed

Blynk for NodeMCU – Introduction
  
  1. Introduction:
    Blynk is a Platform with IOS and Android apps to control Arduino, Raspberry Pi and the likes over the Internet. It’s a digital            dashboard where you can build a graphic interface for your project by simply dragging and dropping widgets.
    
    
    
    After downloading the app, create an account and log in. (If possible than log in with your real mail id for better connectivity          later.)
    
2. Create a Blynk Project
    Click the “Create New Project” in the app to create a new Blynk app. Give it any name.
       Blynk works with hundreds of hardware models and connection types. Select the Hardware type as Nodemcu. After this, select           connection type. In this project we have select WiFi connectivity.
        
       
       
        The Auth Token is very important – you’ll need to stick it into your ESP8266’s firmware. For now, copy it down or use the           “E-mail” button to send it to yourself.
        
3. Add Widgets To The Project
    Then you’ll be presented with a blank new project. To open the widget box, click in the project window to open.

    We are selecting a button to control Led connected with NodeMCU.

      i. Click on Button.
     ii. Give name to Button say led.                                    
    iii. Under OUTPUT tab- Click pin and select the pin to which apliances are connected to NodeMCU, here it is digital pin 0 and 1,            hence select digital and under pin D0. And Click continue. (Do the same for next button but change the pin to D1)
     iv. Under MODE tab- Select whether you want this button as “push button” or “Switch”.
      v. Also change the Output from 0->1 to 1->0 (do this for both the buttons)
      
      You have successfully created a GUI for Home Automation.
      
4. Upload The Firmware
     Now that your Blynk project is set-up, open Arduino and navigate to the ESP8266_Standalone example in the 
    File > Examples > Blynk > Boards_WiFi> ESP8266_Standalone menu.
    
    
5. Stand Alone Programming Code:
    Before uploading, make sure to paste your authorization token into the auth [] variable. Also make sure to load your Wifi              network settings into the Blynk.begin(auth, “ssid”, “pass”) function.   
    
    The code it uploaded in the repo as "ESP8266_Standalone_SSL_GitHub.ino"
