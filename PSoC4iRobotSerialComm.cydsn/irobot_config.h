#if !defined(irobot_config_H)
    #define irobot_config_H
    
    #include <project.h>
    #include <irobot.h>
    
    void IRobotInit()
    {
        IROBOT_Start();
    }

    unsigned long SerialReadChar()
    {
        return IROBOT_UartGetChar();
    }

    void SerialWriteChar(unsigned long ch)
    {
        IROBOT_UartPutChar(ch);
    }

    void SerialWriteString(const char str[])
    {
        IROBOT_UartPutString(str);
    }
    
#endif /* irobot_config_H */
