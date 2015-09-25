#if !defined(irobot_H)
    #define irobot_H
        
    #include "irobot_options.h"
    
    unsigned long SerialReadChar();
    void SerialWriteChar(unsigned long ch);
    void SerialWriteString(const char str[]);

    void iRobot_Start();
    void iRobot_Reset();
    void iRobot_Stop();
    void iRobot_SetBaud(unsigned short code);
    void iRobot_SafeMode();
    void iRobot_FullMode();
    void iRobot_DefaultClean();
    void iRobot_MaxClean();
    void iRobot_SpotClean();
    void iRobot_Dock();
    void iRobot_PowerDown();
    void iRobot_SetSchedule(unsigned short days,unsigned short sun_hour,unsigned short sun_minute,unsigned short mon_hour,unsigned short mon_minute,unsigned short tue_hour,signed short tue_minute,signed short wed_hour,signed short wed_minute,unsigned short thu_hour,unsigned short thu_minute,unsigned short fri_hour,unsigned short fri_minute,unsigned short sat_hour,unsigned short sat_minute);
    void iRobot_SetClock(unsigned short day,unsigned short hour,unsigned short minute);
    void iRobot_Drive(unsigned short velocity_high,unsigned short velocity_low,unsigned short radius_high,unsigned short radius_low);
    void iRobot_DriveDirect(unsigned short right_velocity_high,unsigned short right_velocity_low,unsigned short left_velocity_high,unsigned short left_velocity_low);
    void iRobot_DriveRaw(unsigned short right_pwm_high,unsigned short right_pwm_low,unsigned short left_pwm_high,unsigned short left_pwm_low);
    void iRobot_Motors(unsigned short motors);
    void iRobot_RawMotors(unsigned short main_brush_pwm, unsigned short side_brush_pwm, unsigned short vacuum_pwm);
    void iRobot_LED(unsigned short led, unsigned short power_color, unsigned short power_intensity);
    void iRobot_SchedulingLEDs(unsigned short weekday_led, unsigned short scheduling_led);
    void iRobot_RawDigitLED(unsigned short digit_three,unsigned short digit_two,unsigned short digit_one,unsigned short digit_zero);
    void iRobot_PushButton(unsigned short button_bits);
    void iRobot_ASCIIDigitLED(unsigned short digit_three,unsigned short digit_two,unsigned short digit_one,unsigned short digit_zero);
    void iRobot_SetSong(char notes[]);
    void iRobot_PlaySong(unsigned short song_number);

    void IRobotStartCleaning();
    void IRobotStopCleaningAndDock();

    
#endif /* irobot_H */
