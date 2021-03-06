class Serial
{
    public:

        enum MessageType {
            ScanBetweenSample = 0xFF,
            Idle = 0xFE,
            StationarySample = 0xFD,
            Calibration = 0xFC
        };

        static int CalculateSampleAverage(int &sampleTotal, int &numSamples);
        static void SendTime(float Time);
        static void WriteChar(unsigned int value);
        static void WriteChar(unsigned int value, char type, bool sendCrc);
        static void WriteCrc(unsigned char * value, int length);
        static unsigned int ReadChar();
        static void WriteString(const char* string);
        static void WriteBytes(unsigned char * bytes, int length);
        static unsigned char * SendShort(int input);
        static unsigned char * SendFloat(float input);
        static void WriteFlag(int flag);
    
        static unsigned char * floatToBytes(unsigned char bytes[4], float input);
        static unsigned char * shortToBytes(unsigned char bytes[2], short input);
};