/*
//===ROTORY ENCODER
//===TIMELAPSE CONTROLLER
//===SETUP
  display.begin(SSD1306_SWITCHCAPVCC);
 if(!B_SIG)pulse++;//forward
 if(!A_SIG)pulse--;//forward
//Initiate All Menu Variables
		amount of times after a specified delay.
	//INITIALISATION
	//---User Input Variables
                        d_setCur(0,0);
                           }
			//---Timelapse control functions
					shutter = true;
	Diehard's DSLR Remote

#define TIMELAPSE_MODE 20
//Initiate Serial Communication for debugging
  d_clear();
 Serial.println(pulse);
 Serial.println(pulse);
//Enter While loop
*/
	//---Display Variables
	int input;
                        d_textSize(1);
                           if(pulse < 0){
			
					//TODO: SET SHUTTER PIN HIGH
	-Timelapse + Remote Function
//===OLED DISPLAY
#define SETTINGS_MODE 21
//Initiate Rotory Encoder Hardware Interrupts
  d_setCur(0,0); 
 attachInterrupt(0, A_FALL, FALLING);
 attachInterrupt(1, B_FALL, FALLING);
//---Display

	int mode=SETTINGS_MODE;
	//---Timelapse Variables
			for(int i=0;i<sizeof(menu_options)/sizeof(String);i++){
                              pulse = 0;
			if(!paused) elapsed = millis() - start;//Dont increment the elapsed if the current state is paused
					interval = false;

#define OLED_MOSI   9
#define EXPOSURE_SETTING 0
//Initiate Display
  s_println("OLED SSD1306 Display Initiated");
}
}
//---Get User Input

	int setting=0; // Current focussed setting
	unsigned long start = 0; //Millis when the timelapsing started
                            if(setting == i){
                              setting--;
			
				}
*/
#define OLED_CLK   10
#define INTERVAL_SETTING 1
void setup(){
  //TODO:add logo
void A_FALL(){
void B_FALL(){
//---Process User Input
//===TIMELAPSE CONTROLLER
	boolean paused = false; // Time paused
	unsigned long elapsed =0, pause_t = 0; //Total Elapsed Time and Time when the paused began
                              d_textColor(BLACK, WHITE);
                           } 
			if(shutter){ //Shutter control code
			}
//=======INCLUDES
#define OLED_DC    11
#define SHOTS_SETTING 2
  initiateSerialCommunication();
}
 detachInterrupt(0); 
 detachInterrupt(1); 
/*
//Initialise All Timelapse Variables

	int shots=0; //Total Number of shots taken
                              d_println(menu_options[i]);
                           if(setting > 3){
				if(elapsed >= settings_values[EXPOSURE_SETTING]){
			
#include <SPI.h>
#define OLED_CS    12

  initiateOLEDDisplay();
//===ROTORY ENCODER
 A_SIG=0;
 B_SIG=0;
	Menu Options
//Enter While Loop
	String menu_options[] = {
	boolean interval = false; //To check if its going through interval time
                            }else{
                              setting = 0; 
					elapsed = 0;
			//SHOTS LIMITER
#include <Wire.h>
#define OLED_RESET 13

  initiateRotoryEncoder();
void initiateRotoryEncoder(){
 if(B_SIG)pulse++;//forward
 if(A_SIG)pulse--;//forward
	-Timelapse Controller : 
//---Display Timelapse Menus
		"Exposure : ",
	boolean shutter = false;  //To check if its going through shutter time
                              d_textColor(WHITE);
                           }
					start = millis();
			//If Shots reaches the shot limit. return
#include <Adafruit_GFX.h>

//=======DECLARE THE DISPLAY
}
  attachInterrupt(0, A_RISE, RISING);
 if(!B_SIG)pulse--;//reverse
 if(!A_SIG)pulse++;//reverse
		Do timelapse for a certain number 
//---Get User Input
		"Interval : ",
	
                              d_println(menu_options[i]);
                           if(setting < 0){
					shutter = false;
			if( shots == settings_values[SHOTS_SETTING]) return;	
#include <Adafruit_SSD1306.h>
#define d_clear display.clearDisplay
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
//=======INITIATION FUNCTIONS
  attachInterrupt(1, B_RISE, RISING);
 Serial.println(pulse);
 Serial.println(pulse);
		of pictures at the specified amount 
//---Process User Input
		"Shots : ",
        //RESET PULSE
                            }
                              setting = 3; 
					//TODO: SET SHUTTER PIN LOW
		}	

#define d_print display.print

//===SERIAL COMMUNICATION
  s_println("Rotory Encoder Attached and initiated");
 attachInterrupt(0, A_RISE, RISING);
 attachInterrupt(1, B_RISE, RISING);
		of interval time at the specified 

		"START TIMELAPSE"
        pulse = 0;
                        }
                           }
					interval = true;
	}
//=======DEFINITIONS
#define d_println display.println
//=======DECLARE VARIABLES FOR ENCODER
void initiateSerialCommunication(){
}
}
}
		amount of shutter time
//---Enter Timelapsing Mode
	};
        
                        d_show();
                        }
					shots++;

//===SERIAL COMMUNICATION
#define d_textSize display.setTextSize
int pulse=0;
   Serial.begin(BAUDRATE);
//ROTORY ENCONDER INPUT HANDLER FUNCTIONS

//===LOOP
	
//------Display Timelapsing Data
	unsigned long settings_values[]{
	while(1){ 
			//---Process User input if any
		}else if(mode == TIMELAPSE_MODE){	
				}				
	
