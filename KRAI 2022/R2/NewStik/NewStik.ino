#include <PS2X_lib.h>
#define Master Serial
PS2X ps2x;

byte vibrate = 0;
int LY, LX, RY, RX, LYold, LXold, RYold, RXold;

struct
{
  int Ctrl = 0;
  bool Push = false;
} Triangle, Circle, Square, Cross, R3, L2, Start, RL1;


void setup()
{
  Master.begin(9600);
  delay(300);
  ps2x.config_gamepad(13, 11, 10, 12, false, false);
}

void loop()
{
  SendData();
  // Monitor();
}

void SendData() {
  ps2x.read_gamepad(false, vibrate);

  /** R Dan L */
  if (ps2x.ButtonPressed(PSB_R1)) {
    Master.print('A');
  } else if (ps2x.ButtonReleased(PSB_R1)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_L1)) {
    Master.print('B');
  } else if (ps2x.ButtonReleased(PSB_L1)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_R2)) {
    Master.print('C');
  } else if (ps2x.ButtonReleased(PSB_R2)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_L2)) {
    Master.print('D');
  } else if (ps2x.ButtonReleased(PSB_L2)) {
    Master.print('Z');
  }

  /* TOMBOL ARAH */
  if (ps2x.ButtonPressed(PSB_PAD_UP)) {
    Master.print('E');
  } else if (ps2x.ButtonReleased(PSB_PAD_UP)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_PAD_DOWN)) {
    Master.print('F');
  } else if (ps2x.ButtonReleased(PSB_PAD_DOWN)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_PAD_RIGHT)) {
    Master.print('G');
  } else if (ps2x.ButtonReleased(PSB_PAD_RIGHT)) {
    Master.print('Z');
  }
  if (ps2x.ButtonPressed(PSB_PAD_LEFT)) {
    Master.print('H');
  } else if (ps2x.ButtonReleased(PSB_PAD_LEFT)) {
    Master.print('Z');
  }

  /* SEGITIGA DAN KAWAN KAWAN */
  if (ps2x.ButtonPressed(PSB_CIRCLE)) {
    Circle.Ctrl++;
    if (Circle.Ctrl == 1) {
      Master.print('I');
    } if (Circle.Ctrl == 2) {
      Master.print('J');
      Circle.Ctrl = 0;
    }
  } else if (ps2x.ButtonReleased(PSB_CIRCLE)) {
    Master.print('Z');
  }

  if (ps2x.ButtonPressed(PSB_TRIANGLE)) {
    Triangle.Ctrl++;
    if (Triangle.Ctrl == 1) {
      Master.print('K');
    } if (Triangle.Ctrl == 2) {
      Master.print('L');
      Triangle.Ctrl = 0;
    }
  } else if (ps2x.ButtonReleased(PSB_TRIANGLE)) {
    Master.print('Z');
  }

  if (ps2x.ButtonPressed(PSB_SQUARE)) {
    Square.Ctrl++;
    if (Square.Ctrl == 1) {
      Master.print('M');
    } if (Square.Ctrl == 2) {
      Master.print('N');
      Square.Ctrl = 0;
    }
  } else if (ps2x.ButtonReleased(PSB_SQUARE)) {
    Master.print('Z');
  }

  if (ps2x.ButtonPressed(PSB_CROSS)) {
    Master.print('O');
  } else if (ps2x.ButtonReleased(PSB_CROSS)) {
    Master.print('Z');
  }
  LY = (int)ps2x.Analog(PSS_LY);
  LX = (int)ps2x.Analog(PSS_LX);
  RY = (int)ps2x.Analog(PSS_RY);
  RX = (int)ps2x.Analog(PSS_RX);

  if (RX != RXold || RY != RYold)
  {
    if (RY == 0 && RX == 128) // POWER WINDOW MAJU
    {
      Master.print('P');
    }
    if (RY == 255 && RX == 128) // POWER WINDOWS MUNDUR
    {
      Master.print('Q');
    }
    if (RY == 127 && RX == 128)
    {
      Master.print('Z');
    }
  }
  LYold = LY;
  LXold = LX;
  RYold = RY;
  RXold = RX;

  delay(20);
}




void Monitor()
{

  ps2x.read_gamepad(false, vibrate);

  LY = (int)ps2x.Analog(PSS_LY);
  LX = (int)ps2x.Analog(PSS_LX);
  RY = (int)ps2x.Analog(PSS_RY);
  RX = (int)ps2x.Analog(PSS_RX);

  Master.print(" L : ");
  Master.print(LY, DEC);
  Master.print(',');
  Master.print(LX, DEC);
  Master.print('\t');
  Master.print("R : ");
  Master.print(RY, DEC);
  Master.print(',');
  Master.println(RX, DEC);

  LYold = LY;
  LXold = LX;
  RYold = RY;
  RXold = RX;
}
