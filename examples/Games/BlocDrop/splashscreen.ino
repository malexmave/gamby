// The 'Splash Screen' -- the title page that appears when the game starts.
// For clarity's sake, it has been converted into a set of 8 'icons', each
// the width of the screen. This isn't the most efficient way to do it, but
// it uses the standard Gamby library without doing too many tricks.

PROGMEM prog_uchar splash_0[] = {96, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 131, 131, 3, 3, 3, 3, 3, 3, 3, 131, 131, 131, 3, 3, 3, 3, 3, 7, 15, 255, 255, 131, 131, 3, 3, 3, 3, 3, 3, 3, 131, 131, 255, 255, 255, 255, 255, 255, 255, 31, 7, 3, 3, 3, 3, 3, 131, 131, 131, 3, 3, 3, 3, 3, 7, 15, 255, 255, 15, 7, 3, 3, 3, 3, 3, 131, 131, 131, 3, 3, 3, 3, 3, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
PROGMEM prog_uchar splash_1[] = {96, 255, 223, 123, 255, 222, 119, 255, 223, 118, 255, 223, 119, 255, 255, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 32, 32, 112, 255, 255, 223, 255, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 175, 253, 255, 183, 255, 255, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 216, 248, 184, 248, 216, 255, 255, 95, 246, 255, 95, 247, 254, 95, 247, 255};
PROGMEM prog_uchar splash_2[] = {96, 254, 171, 255, 170, 255, 171, 254, 171, 255, 170, 255, 253, 15, 15, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 0, 0, 0, 0, 0, 0, 128, 255, 250, 15, 15, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 0, 0, 0, 0, 0, 255, 128, 0, 0, 0, 0, 0, 0, 15, 15, 15, 0, 0, 0, 0, 0, 0, 128, 255, 255, 128, 0, 0, 0, 0, 0, 0, 15, 15, 15, 0, 0, 0, 0, 0, 255, 171, 255, 170, 255, 171, 254, 171, 255, 170, 255};
PROGMEM prog_uchar splash_3[] = {96, 123, 134, 125, 146, 111, 148, 123, 134, 125, 2, 251, 251, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 242, 246, 226, 15, 187, 5, 231, 242, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 3, 199, 242, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 243, 230, 3, 249, 251, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 250, 243, 196, 15, 114, 157, 102, 155, 108, 183};
PROGMEM prog_uchar splash_4[] = {96, 85, 170, 85, 170, 85, 170, 85, 170, 85, 170, 84, 0, 255, 255, 255, 255, 255, 255, 255, 0, 170, 0, 255, 255, 255, 255, 255, 255, 255, 0, 42, 64, 31, 191, 191, 255, 255, 255, 255, 240, 242, 240, 255, 255, 255, 255, 255, 255, 255, 0, 170, 0, 255, 255, 255, 255, 255, 255, 255, 0, 170, 0, 255, 255, 255, 255, 255, 255, 255, 0, 170, 0, 255, 255, 255, 255, 255, 255, 255, 240, 242, 240, 255, 255, 255, 255, 255, 255, 63, 0, 213, 42, 213, 42, 213, 42};
PROGMEM prog_uchar splash_5[] = {96, 1, 170, 84, 1, 170, 84, 1, 170, 20, 1, 234, 224, 255, 255, 255, 255, 255, 255, 255, 224, 224, 224, 255, 255, 255, 255, 255, 255, 255, 0, 225, 224, 255, 255, 255, 255, 255, 255, 1, 85, 1, 1, 255, 255, 255, 255, 255, 255, 255, 224, 224, 0, 255, 255, 255, 255, 255, 255, 255, 224, 224, 224, 255, 255, 255, 255, 255, 255, 255, 0, 224, 224, 255, 255, 255, 255, 255, 255, 255, 225, 225, 9, 5, 81, 9, 165, 80, 4, 170, 1, 84, 11, 160, 10, 85, 0};
PROGMEM prog_uchar splash_6[] = {96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 0, 0, 3, 3, 3, 3, 3, 3, 3, 1, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
/*
PROGMEM prog_uchar splash_0[] =  {96, 255, 255, 255, 255, 255, 127, 255, 255, 255, 255, 127, 255, 255, 255, 255, 3, 3, 3, 3, 195, 195, 195, 195, 195, 131, 7, 7, 15, 63, 255, 255, 255, 3, 3, 3, 3, 255, 255, 255, 255, 255, 255, 255, 127, 63, 31, 15, 7, 7, 131, 131, 195, 195, 195, 195, 131, 131, 7, 7, 15, 31, 63, 127, 255, 255, 255, 255, 127, 63, 31, 15, 7, 7, 131, 131, 195, 195, 195, 195, 131, 3, 7, 135, 207, 255, 255, 255, 255, 255, 255, 127, 255, 255, 255, 255, 255};
PROGMEM prog_uchar splash_1[] =  {96, 127, 239, 90, 191, 235, 95, 189, 247, 174, 127, 171, 127, 213, 191, 255, 0, 0, 0, 0, 195, 195, 195, 67, 195, 129, 0, 0, 0, 60, 255, 183, 255, 0, 0, 0, 0, 255, 191, 107, 254, 87, 255, 1, 0, 0, 0, 56, 254, 175, 255, 171, 127, 213, 191, 235, 63, 247, 175, 254, 60, 0, 0, 0, 1, 255, 255, 1, 0, 0, 0, 124, 254, 215, 191, 235, 191, 109, 223, 123, 215, 191, 235, 63, 247, 173, 127, 182, 239, 93, 247, 175, 125, 215, 190, 235, 191};
PROGMEM prog_uchar splash_2[] =  {96, 37, 221, 35, 94, 161, 31, 100, 155, 102, 153, 39, 89, 182, 69, 255, 128, 128, 128, 128, 135, 134, 133, 135, 134, 131, 192, 64, 224, 48, 223, 21, 255, 128, 128, 128, 128, 135, 135, 132, 135, 133, 135, 135, 252, 88, 176, 96, 64, 193, 131, 130, 135, 134, 133, 134, 131, 131, 193, 64, 224, 48, 88, 172, 87, 45, 211, 47, 92, 176, 96, 64, 192, 129, 131, 130, 135, 134, 133, 135, 131, 193, 65, 67, 230, 61, 75, 182, 73, 55, 200, 55, 73, 182, 77, 50, 77};
PROGMEM prog_uchar splash_3[] =  {96, 2, 36, 9, 34, 4, 169, 2, 8, 82, 5, 8, 1, 252, 252, 252, 253, 60, 60, 61, 60, 60, 125, 124, 248, 250, 241, 242, 228, 128, 5, 42, 0, 1, 252, 252, 253, 252, 60, 61, 60, 60, 125, 124, 248, 250, 240, 225, 2, 4, 41, 130, 196, 225, 242, 248, 249, 124, 124, 60, 60, 61, 60, 124, 125, 248, 248, 243, 228, 192, 139, 16, 34, 5, 0, 252, 253, 252, 252, 61, 60, 60, 61, 60, 124, 249, 250, 240, 193, 18, 4, 41, 2, 164, 9, 66, 9};
PROGMEM prog_uchar splash_4[] =  {96, 0, 0, 1, 0, 0, 0, 0, 2, 0, 1, 0, 0, 255, 255, 255, 255, 0, 0, 0, 4, 0, 0, 0, 0, 1, 131, 255, 255, 255, 254, 0, 0, 0, 255, 255, 255, 255, 24, 120, 248, 248, 252, 252, 255, 31, 15, 7, 0, 0, 254, 255, 255, 255, 199, 1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 195, 255, 255, 255, 254, 0, 0, 0, 255, 255, 255, 255, 120, 120, 120, 120, 124, 124, 63, 63, 31, 15, 0, 0, 0, 0, 8, 0, 0, 0};
PROGMEM prog_uchar splash_5[] =  {96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 127, 127, 127, 120, 120, 120, 120, 120, 124, 124, 62, 63, 31, 31, 15, 3, 0, 0, 0, 0, 127, 127, 127, 127, 0, 0, 0, 1, 7, 15, 31, 127, 126, 124, 56, 0, 0, 3, 7, 15, 31, 63, 62, 124, 124, 120, 120, 120, 120, 124, 124, 62, 63, 31, 15, 7, 3, 0, 0, 0, 0, 127, 127, 127, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
PROGMEM prog_uchar splash_6[] =  {96, 0, 0, 0, 0, 0, 128, 128, 128, 128, 0, 0, 128, 128, 128, 128, 0, 0, 128, 128, 128, 128, 0, 0, 128, 128, 128, 128, 0, 0, 128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 192, 192, 96, 96, 96, 224, 192, 192, 0, 0, 0, 0, 0, 128, 128, 128, 128, 0, 0, 128, 128, 128, 0, 0, 0, 0, 0, 0, 128, 128, 128, 128, 0, 128, 128, 128, 128, 0, 128, 128, 128, 0, 0, 128, 128, 128, 128, 0, 128, 128, 128, 128, 0, 0, 0, 0, 0};
*/
PROGMEM prog_uchar splash_7[] =  {96, 0, 0, 0, 0, 0, 15, 15, 2, 3, 1, 0, 15, 15, 6, 15, 9, 0, 15, 15, 10, 10, 0, 9, 11, 10, 14, 4, 0, 9, 11, 10, 14, 4, 0, 0, 0, 0, 0, 15, 63, 63, 119, 112, 112, 119, 63, 63, 15, 0, 0, 0, 0, 0, 15, 15, 0, 0, 7, 15, 8, 15, 7, 0, 0, 0, 0, 9, 11, 10, 14, 4, 0, 0, 15, 15, 0, 15, 15, 2, 15, 15, 0, 15, 15, 6, 15, 9, 0, 15, 15, 0, 0, 0, 0, 0, 0};

// The 'Game Over' message. Like the splash screen, it is a set of 'icons',
// except these don't fill the entire screen. Instead, they will be drawn
// only over the 'well.'
PROGMEM prog_uchar gameover_0[] = {48, 255, 7, 171, 19, 235, 227, 107, 83, 75, 67, 255, 255, 255, 15, 163, 83, 171, 147, 43, 83, 15, 255, 255, 255, 227, 19, 171, 83, 143, 63, 127, 63, 143, 83, 171, 19, 227, 255, 227, 19, 171, 19, 107, 99, 203, 211, 195, 255};
PROGMEM prog_uchar gameover_1[] = {48, 255, 192, 170, 144, 175, 143, 172, 145, 170, 128, 255, 143, 161, 148, 170, 148, 235, 227, 136, 149, 170, 145, 143, 255, 143, 144, 170, 129, 252, 241, 234, 241, 252, 129, 170, 144, 143, 255, 143, 144, 170, 145, 172, 140, 167, 151, 135, 255};
PROGMEM prog_uchar gameover_2[] = {48, 255, 3, 169, 5, 241, 245, 241, 5, 169, 3, 255, 241, 233, 21, 169, 5, 113, 255, 113, 5, 169, 21, 233, 241, 255, 241, 9, 85, 137, 53, 177, 53, 233, 229, 225, 255, 199, 147, 169, 69, 177, 53, 177, 69, 169, 5, 241, 255};
PROGMEM prog_uchar gameover_3[] = {48, 255, 224, 202, 208, 199, 215, 199, 208, 202, 224, 255, 255, 255, 254, 240, 197, 202, 212, 202, 197, 240, 254, 255, 255, 255, 199, 200, 213, 200, 214, 198, 214, 203, 211, 195, 255, 199, 208, 202, 193, 252, 254, 254, 193, 202, 208, 199, 255};


// Display the splash screen and wait for the user to press a button.
void showSplashScreen() {
  gamby.clearDisplay();
  gamby.setPos(0,0);
  gamby.drawIcon(splash_0);
  gamby.setPos(0,1);
  gamby.drawIcon(splash_1);
  gamby.setPos(0,2);
  gamby.drawIcon(splash_2);
  gamby.setPos(0,3);
  gamby.drawIcon(splash_3);
  gamby.setPos(0,4);
  gamby.drawIcon(splash_4);
  gamby.setPos(0,5);
  gamby.drawIcon(splash_5);
  gamby.setPos(0,6);
  gamby.drawIcon(splash_6);
  gamby.setPos(0,7);
  gamby.drawIcon(splash_7);

  // Wait for a button to be pressed before continuing
  gamby.readInputs();
  byte initialInputs = gamby.inputs;
  while (gamby.inputs == initialInputs) {
    delay(100);
    gamby.readInputs();
  }
}


// Display the "Game Over" screen. 
void showGameOver() {
  // Fill in the 'well' from both top and bottom.
  for (byte i=0; i<8; i++) {
    for (byte j=1; j<WELL_WIDTH; j++) {
      gamby.drawBlock(j,i,15);
      gamby.drawBlock(WELL_WIDTH-j,15-i,15);
      delay(5);
    }
  }
  gamby.setPos(0,2);
  gamby.drawIcon(gameover_0);
  gamby.setPos(0,3);
  gamby.drawIcon(gameover_1);
  gamby.setPos(0,4);
  gamby.drawIcon(gameover_2);
  gamby.setPos(0,5);
  gamby.drawIcon(gameover_3);
}