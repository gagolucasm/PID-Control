
# Report PID-Control

## Lucas Gago

### PID Parameters

The effect of P is proportional to the error. As the error gets bigger, the car turn faster, and it occilates.

The effect of I is propotional to the error and the sum of the previous ones. This is helpfull when the car is in a steady position not exactly on the center of the lane, as the error is to small for the P and D parameters, over time will be big enough for the I to act.

The effect of D is proportional to the rate of change of the error. It could help the sistem stability.

All the parameters were tuned by hand, following this algorithm:

* Increase P, with I and D at 0, until it goes to the required point fast enough (wiht a lot of overshooting)
* Increase D until the overshooting dissapears. 
* Increase P and D as much as you can mantaining the good behaviour.
* Increase I to prevent the stationary error (constant distance away from center of lane)

### Speed Control

Another PID was tuned for the speed control
