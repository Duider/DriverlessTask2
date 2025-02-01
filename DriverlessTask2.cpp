#include <iostream>

// Definition of the possible states of the Autonomous System
enum class AS_State {
    OFF,
    READY,
    DRIVING,
    FINISHED,
    EMERGENCY
};

class AutonomousSystem {
private:
    AS_State state = AS_State::OFF;
    //Conditions of the Sytem
    bool ebsActivated = false; //Emergency Brake System
    bool missionSelected = false;
    bool asmsOn = false; //Autonomous System Master Switch
    bool asbOk = false;  //Autonomous System Brake
    bool tsActive = false; //Tractive System
    bool r2d = false;  //Ready to drive
    bool brakesEngaged = false;
    bool missionFinished = false;
    bool vehicleStandstill = false;
    bool sdcOpen = false;  //Shut Down Circuit
};
