#if !defined(irobot_H)
    #define irobot_H
        
    #include "irobot_options.h"
    
    unsigned long SerialReadChar();
    void SerialWriteChar(unsigned long ch);
    void SerialWriteString(const char str[]);

    void iRobot_Start() {
        SerialWriteChar(128);
    }

    void iRobot_Reset() {
        SerialWriteChar(7);
    }

    void iRobot_Stop() {
        SerialWriteChar(173);
    }

    void iRobot_SetBaud(unsigned short code) {
        char data[] = {129, code};
        SerialWriteString(data);
    }

    void iRobot_SafeMode() {
        SerialWriteChar(131);
    }

    void iRobot_FullMode() {
        SerialWriteChar(132);
    }

    void iRobot_DefaultClean() {
        SerialWriteChar(135);
    }

    void iRobot_MaxClean() {
        SerialWriteChar(136);
    }

    void iRobot_SpotClean() {
        SerialWriteChar(134);
    }

    void iRobot_Dock() {
        SerialWriteChar(143);
    }

    void iRobot_PowerDown() {
        SerialWriteChar(133);
    }

    void iRobot_SetSchedule(unsigned short days,unsigned short sun_hour,unsigned short sun_minute,unsigned short mon_hour,unsigned short mon_minute,unsigned short tue_hour,signed short tue_minute,signed short wed_hour,signed short wed_minute,unsigned short thu_hour,unsigned short thu_minute,unsigned short fri_hour,unsigned short fri_minute,unsigned short sat_hour,unsigned short sat_minute) {
        char data[] = {167, days,sun_hour,sun_minute,mon_hour,mon_minute,tue_hour,tue_minute,wed_hour,wed_minute,thu_hour,thu_minute,fri_hour,fri_minute,sat_hour,sat_minute};
        SerialWriteString(data);
    }

    void iRobot_SetClock(unsigned short day,unsigned short hour,unsigned short minute) {
        char data[] = {168, day, hour, minute};
        SerialWriteString(data);
    }

    void iRobot_Drive(unsigned short velocity_high,unsigned short velocity_low,unsigned short radius_high,unsigned short radius_low) {
        char data[] = {137, velocity_high, velocity_low, radius_high, radius_low};
        SerialWriteString(data);
    }

    void iRobot_DriveDirect(unsigned short right_velocity_high,unsigned short right_velocity_low,unsigned short left_velocity_high,unsigned short left_velocity_low) {
        char data[] = {145, right_velocity_high, right_velocity_low, left_velocity_high, left_velocity_low};
        SerialWriteString(data);
    }

    void iRobot_DriveRaw(unsigned short right_pwm_high,unsigned short right_pwm_low,unsigned short left_pwm_high,unsigned short left_pwm_low) {
        char data[] = {146, right_pwm_high, right_pwm_low, left_pwm_high, left_pwm_low};
        SerialWriteString(data);
    }

    void iRobot_Motors(unsigned short motors) {
        char data[] = {138, motors};
        SerialWriteString(data);
    }

    void iRobot_RawMotors(unsigned short main_brush_pwm, unsigned short side_brush_pwm, unsigned short vacuum_pwm) {
        char data[] = {144, main_brush_pwm, side_brush_pwm,vacuum_pwm};
        SerialWriteString(data);
    }

    void iRobot_LED(unsigned short led, unsigned short power_color, unsigned short power_intensity) {
        char data[] = {139, led, power_color, power_intensity};
        SerialWriteString(data);
    }

    void iRobot_SchedulingLEDs(unsigned short weekday_led, unsigned short scheduling_led) {
        char data[] = {162, weekday_led, scheduling_led};
        SerialWriteString(data);
    }

    void iRobot_RawDigitLED(unsigned short digit_three,unsigned short digit_two,unsigned short digit_one,unsigned short digit_zero) {
        char data[] = {163, digit_three, digit_two, digit_one, digit_zero};
        SerialWriteString(data);
    }

    void iRobot_PushButton(unsigned short button_bits) {
        char data[] = {165, button_bits};
        SerialWriteString(data);
    }

    void iRobot_ASCIIDigitLED(unsigned short digit_three,unsigned short digit_two,unsigned short digit_one,unsigned short digit_zero) {
        char data[] = {164, digit_three, digit_two, digit_one, digit_zero};
        SerialWriteString(data);
    }

    void iRobot_SetSong(char notes[]){
        SerialWriteString(notes);
    }

    void iRobot_PlaySong(unsigned short song_number) {
        char data[] = {141, song_number};
        SerialWriteString(data);
    }
        
    void IRobotStartCleaning() {
        iRobot_Start();
        iRobot_SafeMode();
        iRobot_DefaultClean();
        iRobot_Stop();
    }

    void IRobotStopCleaningAndDock() {
        iRobot_Start();
        iRobot_Dock();
        iRobot_Stop();
    }
    
#endif /* irobot_H */
