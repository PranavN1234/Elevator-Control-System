#include <stdio.h>
#include "header1.h"

int main()
{
    int error = 0;
    setupGPIO();

    // Floors represented A represents floor 1, B represents floor 2, C represents floor 3

    int A = 1; // floor 1
    int B = 0; // floor 2
    int C = 0; // floor 3

    while (!error)
    {
        // while staying Floor 1
        while (A && !error)
        {
            setLED(Floor1, ON);
            delay(DELAY3);

            // button click on floor 1--->2
            if (!checkBot(floor2_b))
            {
                setLED(Floor2, ON);
                setLED(Floor1, OFF);
                delay(DELAY3);
                // On click of Go button
                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3);
                    setLED(MovingLED, OFF);
                    // We start the open State and remain till the user clicks the open button
                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }
                    // we start the close State and remain till the user clicks the close button
                    while (1)
                    {
                        if (!checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                B = 1;
                A = 0;
            }
            // button click on floor 1--->3
            if (!checkBot(floor3_b))
            {
                setLED(Floor3, ON);
                setLED(Floor1, OFF);
                delay(DELAY3);

                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3 + DELAY3);
                    setLED(MovingLED, OFF);
                    // We start the open State and remain till the user clicks the open button
                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }
                    // we start the close State and remain till the user clicks the close button
                    while (1)
                    {
                        if (!checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                C = 1;
                A = 0;
            }
        }
        // while staying Floor 2
        while (B && !error)
        {
            setLED(Floor2, ON);
            setLED(Floor1, OFF);
            delay(DELAY3);
            // button click on floor 2--->1
            if (!checkBot(floor1_b))
            {
                setLED(Floor1, ON);
                delay(DELAY3);

                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3);
                    setLED(MovingLED, OFF);

                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }

                    while (1)
                    {
                        if (!checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                B = 0;
                A = 1;
            }
            // button click on floor 2--->3
            if (!checkBot(floor3_b))
            {
                setLED(Floor3, ON);
                setLED(Floor2, OFF);
                delay(DELAY3);

                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3 + DELAY3);
                    setLED(MovingLED, OFF);

                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }

                    while (1)
                    {
                        if (!checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                C = 1;
                B = 0;
            }
        }

        // while staying Floor 3
        while (C && !error)
        {
            setLED(Floor3, ON);
            delay(DELAY3);

            if (!checkBot(floor1_b))
            {
                setLED(Floor1, ON);
                setLED(Floor3, OFF);
                delay(DELAY3);
                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3 + DELAY3);
                    setLED(MovingLED, OFF);

                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }

                    while (1)
                    {
                        if (checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                C = 0;
                A = 1;
            }

            if (!checkBot(floor2_b))
            {
                setLED(Floor2, ON);
                setLED(Floor3, OFF);
                delay(DELAY3);
                if (!checkBot(GO_button))
                {
                    setLED(MovingLED, ON);

                    delay(DELAY3);
                    setLED(MovingLED, OFF);

                    while (1)
                    {
                        if (!checkBot(Open_button))
                        {
                            setLED(OpenLED, ON);
                            delay(DELAY6);
                            setLED(OpenLED, OFF);
                            break;
                        }
                    }

                    while (1)
                    {
                        if (!checkBot(Close_button))
                        {
                            setLED(CloseLED, ON);
                            delay(DELAY6);
                            setLED(CloseLED, OFF);
                            break;
                        }
                    }
                }

                C = 0;
                B = 1;
            }
        }
    }

    return 0;
}
