#include <wiringPi.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>

int main (void)
{
								int bright;

								printf ("Raspberry Pi wiringPi PWM test program\n");

								if (wiringPiSetup () == -1)
																exit (1);

								pinMode (1, PWM_OUTPUT);
								pinMode (23, PWM_OUTPUT);
								for(;;)
								{
																for (bright = 0; bright < 1024; ++bright)
																{
																								pwmWrite (1, bright);

																}

																for (bright = 1023; bright >= 0; --bright)
																{
																								pwmWrite (1, bright);

																}
																for (bright = 0; bright < 1024; ++bright)
																{
																								pwmWrite (23, bright);

																}

																for (bright = 1023; bright >= 0; --bright)
																{
																								pwmWrite (23, bright);

																}
																delay (1);
								}

								return 0;
}
