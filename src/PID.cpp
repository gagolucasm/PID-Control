#include "PID.h"

using namespace std;

/*
 * TODO: Complete the PID class.
 */

PID::PID() {
}

PID::~PID() {
}

void PID::Init(double init_Kp, double init_Ki, double init_Kd) {
    Kp = init_Kp;
    Ki = init_Ki;
    Kd = init_Kd;
    p_error = 0;
    i_error = 0;

    d_error = 0;


}

void PID::UpdateError(double cte) {
    double dt = .1;
    i_error += cte*dt;   
    d_error = (cte  -p_error) / dt ;
    p_error = cte;

}

double PID::TotalError() {
    return (-Kp*p_error - Ki*i_error - Kd*d_error);
}

