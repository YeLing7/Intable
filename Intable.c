// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

InternetButton b = InternetButton();
uint8_t button1,button2,button3,button4;
int state = 1;






void setup() {
    
    b.begin();
    //Particle.variable("answer", answer);
}

void loop() {
      
    button1 = b.buttonOn(1);
    button2 = b.buttonOn(2);
    button3 = b.buttonOn(3);
    button4 = b.buttonOn(4);
    
   
    if (button1 && state==1)
    {
         
        b.allLedsOn(255,255,255);
        Particle.publish("Ling Ye","done",1,PRIVATE);
        delay(500);
        b.allLedsOff();
        delay(1500);
    }
    
 
    if (state == 2 && button1)
    {
        b.allLedsOn(255,0,0);
        Particle.publish("Choice","A",1,PRIVATE);
        delay(500);
        b.allLedsOff();
    }
    else if (state == 2 && button2)
    {
        b.allLedsOn(255,0,0);
        Particle.publish("Choice1","B",1,PRIVATE);
        delay(500);
        b.allLedsOff();
    }
    else if (state == 2 && button3)
    {
        b.allLedsOn(255,0,0);
        Particle.publish("Choice2","C",1,PRIVATE);
        delay(500);
        b.allLedsOff();
    }
    else if(state == 2 && button4)
    {
        b.allLedsOn(255,0,0);
        Particle.publish("Choice3","D",1,PRIVATE);
        delay(500);
        b.allLedsOff();
    }
    
    if (button1 && state ==1)
    {
        state =2;
    }

    
}