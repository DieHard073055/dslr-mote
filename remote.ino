/*
//=======MAIN PROGRAM
//---Process User Input
//===TIMELAPSE CONTROLLER
	boolean paused = false; // Time paused
	unsigned long elapsed =0; pause_t = 0; //Total Elapsed Time and Time when the paused began

					start = millis();
	Diehard's DSLR Remote
//===SETUP
/*
//Initialise All Timelapse Variables

	int shots=0; //Total Number of shots taken
			//---Timelapse control functions
					shutter = true;
	-Timelapse + Remote Function
//Initiate Serial Communication for debugging
	Menu Options
//Enter While Loop
	String menu_options[] = {
	boolean interval = false; //To check if its going through interval time
			
					//TODO: SET SHUTTER PIN HIGH

//Initiate Rotory Encoder Hardware Interrupts
	-Timelapse Controller : 
//---Display Timelapse Menus
		"Exposure : ",
	boolean shutter = false;  //To check if its going through shutter time
			if(!paused) elapsed = millis() - start;//Dont increment the elapsed if the current state is paused
					interval = false;
*/
//Initiate Display
		Do timelapse for a certain number 
//---Get User Input
		"Interval : ",
	
			
				}
//=======INCLUDES

		of pictures at the specified amount 
//---Process User Input
		"Shots : ",

			if(shutter){ //Shutter control code
			}
//=======DEFINITIONS

		of interval time at the specified 

		"START TIMELAPSE"
	while(1){ 
				if(elapsed >= settings_values[EXPOSURE_SETTING]){
			
//===SERIAL COMMUNICATION

		amount of shutter time
//---Enter Timelapsing Mode
	};
	
					elapsed = 0;
			//SHOTS LIMITER
//===ROTORY ENCODER
//===LOOP
	
//------Display Timelapsing Data
	unsigned long settings_values[]{
		if(mode == SETTINGS_MODE){
					start = millis();
			//If Shots reaches the shot limit. return
