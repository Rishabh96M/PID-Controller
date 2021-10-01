/**
 * @file pid.cpp
 * @author Siddharth Telang (stelang@umd.edu)
 * @author Dani Lerner (dalerner@umd.edu)
 * @brief implementation file for PID Controller
 * @version 0.1
 * @date 2021-09-30
 * 
 * Copyright (c) 2021 Pair A
 * 
 */

#include <pid.hpp>

PID::PID(double Kp, double Ki, double Kd, double dt, double min,
        double max) :_Kp{Kp}, _Ki{Ki}, _Kd{Kd}, _dt{dt},
                _min{min}, _max{max} {
    // TODO(Pair_B) : If dt <=0 - throw domain error
    // TODO(Pair_B) : If gains <=0 - throw domain error
    // TODO(Pair_B) : add check parameters
    checkParameters();
}

double PID::getKp() {return _Kp;}

double PID::getKi() {return _Ki;}

double PID::getKd() {return _Kd;}

double PID::calculateErrorIntegral(double initial_state, double final_state) {
    return 0.0;
}

double PID::calculateErrorDerivative(double initial_state, double final_state) {
    return 0.0;
}

void PID::checkParameters() {
}

double PID::computeOutput(double initial_state, double final_state) {
    // TODO(Pair_B): calculate the derivative, integral and proportioanl error
    // and update the integral sum and previous error
    // TODO(Pair_B): clip output to min / max if less than / greater than
    return -1;
}
