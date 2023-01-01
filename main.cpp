 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */


struct Dishwasher
{
    //5 properties:
    //    - color (sdt::string)
    std::string color { "green" };
    //    - number of racks (int)
    int numberOfRacks = 2;
    //    - number of silverware baskets (int)
    int numberOfSilverwareBaskets = 3;
    //    - start button width (float)
    float startButtonWidth = 1.0f;
    //    - cycle option dial diameter (float)
    float cycleDialDiameter = 3.0f;
    //3 things it can do:
    //    - spray dishes with water
    void sprayDishes(); 
    //    - spin the spray nozzles
    void spinNozzles(); 
    //    - heat the dishes to dry them
    void heatDishes(int minutesToHeat); 
};

struct Desk
{
    //5 properties:
    //    - keyboard tray width (float)
    float keyboardTrayWidth = 12.0f;
    //    - monitor riser height (float)
    float monitorRiserHeight = 5.0f;
    //    - mouse pad color (sdt::string)
    std::string color { "blue" };
    //    - work surface width (float)
    float workSurfaceWidth = 36.0f;
    //    - number of drawers (int)
    int numberOfDrawers = 3;
    //3 things it can do:
    //    - store things
    void storeThings(int numberOfThings); 
    //    - hold a computer
    void holdComputer(); 
    //    - extend and retract the keyboard tray
    void extendKeyboardTray(); 
};

struct Mp3Player
{
    //5 properties:
    //    - number of buttons (int)
    int numberOfButtons = 5;
    //    - on/off switch color (sdt::string)
    std::string onOffSwitchColor { "white" };
    //    - display screen width (float)
    float displayScreenWidth = 1.0f;
    //    - belt clip depth (float)
    float beltClipDepth = 1.0f;
    //    - number of memory card slots (int)
    int numberOfCardSlots = 1;
    //3 things it can do:
    //    - load files from memory card
    void loadFile(std::string filePath); 
    //    - play a music file
    void playFile(); 
    //    - display information about files
    void displayInfo(); 
};

struct Bicycle
{
    //5 properties:
    //    - chain length (float)
    float chainLength = 1.0f;
    //    - seat color (sdt::string)
    std::string seatColor { "green" };
    //    - handlebars width (float)
    float handlebarsWidth = 24.0f;
    //    - number of wheels (int)
    int numberOfWheels = 2;
    //    - pedals material (sdt::string)
    std::string pedalsMaterial { "steel" };
    //3 things it can do:
    //    - support the rider
    void supportRider(); 
    //    - roll
    void roll(); 
    //    - turn left
    void turnLeft(); 
};

struct CdDrive
{
    //5 properties:
    //    - max speed (int)
    int maxSpeed = 100;
    //    - disc diameter (float)
    float discDiameter = 5.0f;
    //    - number of trays (int)
    int numberOfTrays = 1;
    //    - color (std::string)
    std::string color { "black" };
    //    - number of formats supported (int)
    int numberOfFormatsSupported = 3;
    //3 things it can do:
    //    - play cds
    void playCd(); 
    //    - play dvds
    void playDVD(); 
    //    - write cd-rs
    void writeCdr(); 

    struct CD
    {
        //5 properties:
        int maxSpeed = 100;
        float outerDiameter = 5.0f;
        float innerDiameter = 0.5f;
        std::string color { "black" };
        std::string title { "Dark Side Of The Moon" };
        //3 things it can do:
        void getScratched(); 
        void storeData(); 
        void goObsolete(); 
    };
};

struct Monitor
{
    //5 properties:
    //    - width (float)
    float width = 18.0f;
    //    - number of pixels (int)
    int numberOfPixels = 1120;
    //    - color (std::string)
    std::string color { "black" };
    //    - refresh rate (int)
    int refreshRate = 60;
    //    - depth (float)
    float depth = 12.0f;
    //3 things it can do:
    //    - dislay images
    void displayImage(); 
    //    - adjust brightness
    void adjustBrightness(int brightness); 
    //    - turn off
    void turnOff(); 
};

struct HardDrive
{
    //5 properties:
    //    - max speed (int)
    int maxSpeed = 100;
    //    - number of platters (int)
    int numberOfPlatters = 1;
    //    - number of magnets (int)
    int numberOfMagnets = 1;
    //    - memory size (int)
    int memorySize = 120;
    //    - age in years (int)
    int ageInYears = 2;
    //3 things it can do:
    //    - store data
    void storeData(std::string filePath); 
    //    - retrieve data
    void retrieveData(std::string filePath); 
    //    - go into power-save mode
    void goIntoPowerSaveMode(); 
};

struct Keyboard
{
    //5 properties:
    //    - number of keys (int)
    int numberOfKeys = 100;
    //    - number of function keys (int)
    int numberOfFunctionKeys = 12;
    //    - case color (std::string)
    std::string caseColor { "black" };
    //    - button color (std::string)
    std::string buttonColor { "gray" };
    //    - width (float)
    float width = 16.0f;
    //3 things it can do:
    //    - output button presses
    void outputButtonPress(int buttonCode); 
    //    - display num lock
    void displayNumLock(); 
    //    - display caps lock
    void displayCapsLock(); 
};

struct Cpu
{
    //5 properties:
    //    - speed (int)
    int speed = 1666;
    //    - width (float)
    float width = 1.0f;
    //    - height (float)
    float height = 1.0f;
    //    - chipset name (std::string)
    std::string chipsetName { "delta bridge" };
    //    - age in years (int)
    int ageInYears = 3;
    //3 things it can do:
    //    - communicate with memory
    void communicateWithMemory(HardDrive hardDrive); 
    //    - communicate with video card
    void communicateWithVideoCard(Monitor monitor); 
    //    - communicate with peripherals  
    void communicateWithPeripheral(Keyboard keyboard); 
};

struct Computer
{
    //5 properties:
    //    - cd drive
    CdDrive cdDrive;
    //    - monitor
    Monitor monitor;
    //    - hard drive
    HardDrive hardDrive;
    //    - keyboard
    Keyboard keyboard;
    //    - cpu
    Cpu cpu;
    //3 things it can do:
    //    - load documents
    void loadDocument(std::string filePath); 
    //    - save documents
    void saveDocument(std::string filePath); 
    //    - play videos  
    void playVideo(std::string videoPath); 
};


int main()
{
    std::cout << "good to go!" << std::endl;
}
