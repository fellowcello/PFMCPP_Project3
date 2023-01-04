/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.





struct Dishwasher
{
    Dishwasher();
    std::string color { "green" };
    int numberOfRacks = 2;
    int numberOfSilverwareBaskets = 3;
    float startButtonWidth = 1.0f;
    float cycleDialDiameter = 3.0f;

    void sprayDishes(); 
    void spinNozzles(); 
    void heatDishes(int minutesToHeat); 
};

Dishwasher::Dishwasher()
{
    std::cout << "Dishwasher being constructed!" << std::endl;
}

void Dishwasher::sprayDishes()
{
    
}

void Dishwasher::spinNozzles()
{
        std::cout << "Dishwasher::spinNozzles() success!" << std::endl;
}

void Dishwasher::heatDishes(int minutesToHeat)
{
    ++minutesToHeat;
}

struct Desk
{
    Desk();
    float keyboardTrayWidth = 12.0f;
    float monitorRiserHeight = 5.0f;
    std::string color { "blue" };
    float workSurfaceWidth = 36.0f;
    int numberOfDrawers = 3;

    void storeThings(int numberOfThings); 
    void holdComputer(); 
    void extendKeyboardTray(); 
};

Desk::Desk()
{
    std::cout << "Desk being constructed!" << std::endl;
}

void Desk::storeThings(int numberOfThings)
{
    ++numberOfThings;
    std::cout << "Desk::storeThings()" << numberOfThings << std::endl;
}

void Desk::holdComputer()
{
    
}

void Desk::extendKeyboardTray()
{
    
}

struct Mp3Player
{
    Mp3Player();
    int numberOfButtons = 5;
    std::string onOffSwitchColor { "white" };
    float displayScreenWidth = 1.0f;
    float beltClipDepth = 1.0f;
    int numberOfCardSlots = 1;

    void loadFile(std::string filePath); 
    void playFile(); 
    void displayInfo(); 
};

Mp3Player::Mp3Player()
{
    std::cout << "Mp3Player being constructed!" << std::endl;
}

void Mp3Player::loadFile(std::string filePath)
{
    std::string newPath { "d:/" + filePath };
    std::cout << "Mp3Player::loadFile()" << newPath << std::endl;
}

void Mp3Player::playFile()
{
    
}

void Mp3Player::displayInfo()
{
    
}

struct Bicycle
{
    Bicycle();
    float chainLength = 1.0f;
    std::string seatColor { "green" };
    float handlebarsWidth = 24.0f;
    int numberOfWheels = 2;
    std::string pedalsMaterial { "steel" };

    void supportRider(); 
    void roll(); 
    void turnLeft(); 
};

Bicycle::Bicycle()
{
    std::cout << "Bicycle being constructed!" << std::endl;
}

void Bicycle::supportRider()
{
    
}

void Bicycle::roll()
{
    std::cout << "Bicycle::roll() success!" << std::endl;
}

void Bicycle::turnLeft()
{
    
}



struct CdDrive
{
    CdDrive();
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

CdDrive::CdDrive()
{
    std::cout << "CdDrive being constructed!" << std::endl;
}

void CdDrive::playCd()
{
    std::cout << "CdDrive::playCd() " << color << std::endl;
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
    Monitor();
    float width = 18.0f;
    int numberOfPixels = 1120;
    std::string color { "black" };
    int refreshRate = 60;
    float depth = 12.0f;

    void displayImage(); 
    void adjustBrightness(int brightness); 
    void turnOff(); 
};

Monitor::Monitor()
{
    std::cout << "Monitor being constructed!" << std::endl;
}

void Monitor::displayImage()
{
    
}

void Monitor::adjustBrightness(int brightness)
{
    ++brightness;
    std::cout << "Monitor::adjustBrightness() " << brightness << std::endl;
}

void Monitor::turnOff()
{
    
}


struct HardDrive
{
    HardDrive();
    int maxSpeed = 100;
    int numberOfPlatters = 1;
    int numberOfMagnets = 1;
    int memorySize = 120;
    int ageInYears = 2;

    void storeData(std::string filePath); 
    void retrieveData(std::string filePath); 
    void goIntoPowerSaveMode(); 
};

HardDrive::HardDrive()
{
    std::cout << "HardDrive being constructed!" << std::endl;
}

void HardDrive::storeData(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
}

void HardDrive::retrieveData(std::string filePath)
{
    std::string newPath { "c:/" + filePath };
    std::cout << "HardDrive::retrieveData() " << newPath << std::endl;
}

void HardDrive::goIntoPowerSaveMode()
{
    
}

struct Keyboard
{
    Keyboard();
    int numberOfKeys = 100;
    int numberOfFunctionKeys = 12;
    std::string caseColor { "black" };
    std::string buttonColor { "gray" };
    float width = 16.0f;

    void outputButtonPress(int buttonCode); 
    void displayNumLock(); 
    void displayCapsLock(); 
};

Keyboard::Keyboard()
{
    std::cout << "Keyboard being constructed!" << std::endl;
}

void Keyboard::outputButtonPress(int buttonCode)
{
    ++buttonCode;
    std::cout << "Keyboard::outputButtonPress() " << buttonCode << std::endl;
}

void Keyboard::displayNumLock()
{

}

void Keyboard::displayCapsLock()
{

}

struct Cpu
{
    Cpu();
    int speed = 1666;
    float width = 1.0f;
    float height = 1.0f;
    std::string chipsetName { "delta bridge" };
    int ageInYears = 3;

    void communicateWithMemory(HardDrive hardDrive); 
    void communicateWithVideoCard(Monitor monitor); 
    void communicateWithPeripheral(Keyboard keyboard); 
};

Cpu::Cpu()
{
    std::cout << "Cpu being constructed!" << std::endl;
}

void Cpu::communicateWithMemory(HardDrive hardDrive)
{
    ++hardDrive.ageInYears;
}

void Cpu::communicateWithVideoCard(Monitor monitor)
{
    ++monitor.numberOfPixels;
    std::cout << "Cpu::communicateWithVideoCard() " << monitor.numberOfPixels << std::endl;
}

void Cpu::communicateWithPeripheral(Keyboard keyboard)
{
    ++keyboard.numberOfKeys;
}

struct Computer
{
    Computer();
    CdDrive cdDrive;
    Monitor monitor;
    HardDrive hardDrive;
    Keyboard keyboard;
    Cpu cpu;

    void loadDocument(std::string filePath); 
    void saveDocument(std::string filePath); 
    void playVideo(std::string videoPath); 
};

Computer::Computer()
{
    std::cout << "Computer being constructed!" << std::endl;
}

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
    std::cout << "Computer::playVideo() " << newPath << std::endl;
}


int main()
{
    Example::main();

    Dishwasher dishWasher1;
    Dishwasher dishWasher2;
    Desk desk1;
    Mp3Player mp3Player1;
    Mp3Player mp3Player2;
    Bicycle bicycle1;
    CdDrive cdDrive1;
    CdDrive::CD darkSide;
    Monitor monitor1;
    Monitor monitor2;
    HardDrive hardDrive1;
    Keyboard keyboard1;
    Cpu cpu1;
    Cpu cpu2;
    Computer computer1;

    dishWasher1.sprayDishes();
    dishWasher1.spinNozzles();
    dishWasher2.heatDishes(10);
    
    desk1.storeThings(50);
    desk1.holdComputer();
    desk1.extendKeyboardTray();
    
    mp3Player1.loadFile("music/mysong.mp3");
    mp3Player2.playFile();
    mp3Player1.displayInfo();

    bicycle1.supportRider();
    bicycle1.roll();
    bicycle1.turnLeft();

    cdDrive1.playCd();
    cdDrive1.playDVD();
    cdDrive1.writeCdr();

    darkSide.getScratched();
    darkSide.storeData();
    darkSide.goObsolete();

    monitor1.displayImage();
    monitor1.adjustBrightness(85);
    monitor2.turnOff();

    hardDrive1.storeData("mydocuments/word.doc");
    hardDrive1.retrieveData("desktop/text.txt");
    hardDrive1.goIntoPowerSaveMode();

    keyboard1.outputButtonPress(23);
    keyboard1.displayNumLock();
    keyboard1.displayCapsLock();

    cpu1.communicateWithMemory(hardDrive1);
    cpu1.communicateWithVideoCard(monitor1);
    cpu1.communicateWithPeripheral(keyboard1);

    computer1.loadDocument("documents/mydocument.doc");
    computer1.saveDocument("documents/myotherdocument.doc");
    computer1.playVideo("videos/mycoolvideo.mpg");
    
    std::cout << "dishWasher1.startButtonWidth: " << dishWasher1.startButtonWidth << std::endl;
    std::cout << "desk1.numberOfDrawers: " << desk1.numberOfDrawers << std::endl;
    std::cout << "mp3Player1.onOffSwitchColor: " << mp3Player1.onOffSwitchColor << std::endl;
    std::cout << "bicycle1.numberOfWheels: " << bicycle1.numberOfWheels << std::endl;
    std::cout << "cdDrive1.maxSpeed: " << cdDrive1.maxSpeed << std::endl;
    std::cout << "monitor1.depth: " << monitor1.depth << std::endl;
    std::cout << "hardDrive1.ageInYears: " << hardDrive1.ageInYears << std::endl;
    std::cout << "keyboard1.buttonColor: " << keyboard1.buttonColor << std::endl;
    std::cout << "cpu1.speed: " << cpu1.speed << std::endl;

    std::cout << "good to go!" << std::endl;
}
