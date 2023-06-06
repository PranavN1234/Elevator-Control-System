# Elevator-Control-System
This hands-on project pushes students to transfer their lab knowledge into practice by building an automated elevator system that incorporates buttons, LEDs, and a state machine, enabling both automatic and manual operation while showcasing their expertise in system design and implementation.

State Machine: The state machine for this project will have four states:
• Idle state: The elevator is not moving and waiting for a button input from the user to
select a floor. The LED for only one of the floors is ON. The default is Floor 1 in case of
first time or Emergency Stop.
• Moving state: The elevator is moving towards the selected floor based on the direction
(up or down) chosen by the user.
• Door Open state: The elevator has reached the selected floor and the doors are open,
allowing passengers to enter or exit.
• Door Close state: The doors are closing after receiving a command from the user.

