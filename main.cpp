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

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);

    struct Foot
    {
        void stepForward();
        int stepSize();
    };

    Foot leftFoot;
    Foot rightFoot;
};



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
    std::string color { "green" };
    int numberOfRacks = 2;
    int numberOfSilverwareBaskets = 3;
    float startButtonWidth = 1.0f;
    float cycleDialDiameter = 3.0f;

    void sprayDishes(); 
    void spinNozzles(); 
    void heatDishes(int minutesToHeat); 
};

void Dishwasher::sprayDishes()
{
    
}

void Dishwasher::spinNozzles()
{
    
}

void Dishwasher::heatDishes(int minutesToHeat)
{
    ++minutesToHeat;
}

struct Desk
{
    float keyboardTrayWidth = 12.0f;
    float monitorRiserHeight = 5.0f;
    std::string color { "blue" };
    float workSurfaceWidth = 36.0f;
    int numberOfDrawers = 3;

    void storeThings(int numberOfThings); 
    void holdComputer(); 
    void extendKeyboardTray(); 
};

void Desk::storeThings(int numberOfThings)
{
    ++numberOfThings;
}

void Desk::holdComputer()
{
    
}

void Desk::extendKeyboardTray()
{
    
}

struct Mp3Player
{
    int numberOfButtons = 5;
    std::string onOffSwitchColor { "white" };
    float displayScreenWidth = 1.0f;
    float beltClipDepth = 1.0f;
    int numberOfCardSlots = 1;

    void loadFile(std::string filePath); 
    void playFile(); 
    void displayInfo(); 
};

void Mp3Player::loadFile(std::string filePath)
{
    std::string newPath { "d:/" + filePath };
}

void Mp3Player::playFile()
{
    
}

void Mp3Player::displayInfo()
{
    
}

struct Bicycle
{
    float chainLength = 1.0f;
    std::string seatColor { "green" };
    float handlebarsWidth = 24.0f;
    int numberOfWheels = 2;
    std::string pedalsMaterial { "steel" };

    void supportRider(); 
    void roll(); 
    void turnLeft(); 
};

void Bicycle::supportRider()
{
    
}

void Bicycle::roll()
{
    
}

void Bicycle::turnLeft()
{
    
}



struct CdDrive
{
    int maxSpeed = 100;
    float discDiameter = 5.0f;
    int numberOfTrays = 1;
    std::string color { "black" };
    int numberOfFormatsSupported = 3;

    void playCd(); 
    void playDVD(); 
    void writeCdr(); 

    struct CD
    {
        int maxSpeed = 100;
        float outerDiameter = 5.0f;
        float innerDiameter = 0.5f;
        std::string color { "black" };
        std::string title { "Dark Side Of The Moon" };

        void getScratched(); 
        void storeData(); 
        void goObsolete(); 
    };
};

void CdDrive::playCd()
{
    
}

void CdDrive::playDVD()
{
    
}

void CdDrive::writeCdr()
{
    
}

void CdDrive::CD::getScratched()
{
    
}

void CdDrive::CD::storeData()
{
    
}

void CdDrive::CD::goObsolete()
{
    
}

struct Monitor
{
    float width = 18.0f;
    int numberOfPixels = 1120;
    std::string color { "black" };
    int refreshRate = 60;
    float depth = 12.0f;

    void displayImage(); 
    void adjustBrightness(int brightness); 
    void turnOff(); 
};

void Monitor::displayImage()
{
    
}

void Monitor::adjustBrightness(int brightness)
{
    ++brightness;
}

void Monitor::turnOff()
{
    
}


struct HardDrive
{
    int maxSpeed = 100;
    int numberOfPlatters = 1;
    int numberOfMagnets = 1;
    int memorySize = 120;
    int ageInYears = 2;

    void storeData(std::string filePath); 
    void retrieveData(std::string filePath); 
    void goIntoPowerSaveMode(); 
};

void HardDrive::storeData(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
}

void HardDrive::retrieveData(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
}

void HardDrive::goIntoPowerSaveMode()
{
    
}

struct Keyboard
{
    int numberOfKeys = 100;
    int numberOfFunctionKeys = 12;
    std::string caseColor { "black" };
    std::string buttonColor { "gray" };
    float width = 16.0f;

    void outputButtonPress(int buttonCode); 
    void displayNumLock(); 
    void displayCapsLock(); 
};

void Keyboard::outputButtonPress(int buttonCode)
{
    ++buttonCode;
}

void Keyboard::displayNumLock()
{

}

void Keyboard::displayCapsLock()
{

}

struct Cpu
{
    int speed = 1666;
    float width = 1.0f;
    float height = 1.0f;
    std::string chipsetName { "delta bridge" };
    int ageInYears = 3;

    void communicateWithMemory(HardDrive hardDrive); 
    void communicateWithVideoCard(Monitor monitor); 
    void communicateWithPeripheral(Keyboard keyboard); 
};

void Cpu::communicateWithMemory(HardDrive hardDrive)
{
    ++hardDrive.ageInYears;
}

void Cpu::communicateWithVideoCard(Monitor monitor)
{
    ++monitor.numberOfPixels;
}

void Cpu::communicateWithPeripheral(Keyboard keyboard)
{
    ++keyboard.numberOfKeys;
}

struct Computer
{
    CdDrive cdDrive;
    Monitor monitor;
    HardDrive hardDrive;
    Keyboard keyboard;
    Cpu cpu;

    void loadDocument(std::string filePath); 
    void saveDocument(std::string filePath); 
    void playVideo(std::string videoPath); 
};

void Computer::loadDocument(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
}

void Computer::saveDocument(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
}

void Computer::playVideo(std::string videoPath)
{
    std::string newPath { "c:/" + videoPath };
}


int main()
{
    std::cout << "good to go!" << std::endl;
}
