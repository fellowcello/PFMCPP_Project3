/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.

 5) Remember to use pre-increment/decrement in your loops. 
 You can learn why post-increment/decrement is not ideal here:
 https://en.cppreference.com/w/cpp/language/operator_incdec 
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            ++bar.num;                    //2a), 5)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()


struct Dishwasher
{
    Dishwasher();
    std::string color { "green" };
    int numberOfRacks;
    int numberOfSilverwareBaskets;
    float startButtonWidth = 1.0f;
    float cycleDialDiameter = 3.0f;

    void sprayDishes(); 
    void spinNozzles(); 
    void heatDishes(int minutesToHeat); 
    void countBaskets();
};

Dishwasher::Dishwasher() : 
numberOfRacks(2),
numberOfSilverwareBaskets(3)
{
    std::cout << "Dishwasher being constructed!" << std::endl;
}

void Dishwasher::sprayDishes()
{
    std::cout << "Dishwasher::sprayDishes() numberOfRacks:" << numberOfRacks << " numberOfSilverwareBaskets: " << numberOfSilverwareBaskets << std::endl;
}

void Dishwasher::spinNozzles()
{
    std::cout << "Dishwasher::spinNozzles() success!" << std::endl;
}

void Dishwasher::heatDishes(int minutesToHeat)
{
    ++minutesToHeat;
}

void Dishwasher::countBaskets()
{
    for(int i = 0; i < 9; ++i)
    {
        numberOfSilverwareBaskets = i;
        std::cout << "numberOfSilverwareBaskets: " << numberOfSilverwareBaskets << std::endl;
    }
}


struct Desk
{
    Desk();
    float keyboardTrayWidth = 12.0f;
    float monitorRiserHeight = 5.0f;
    std::string color { "blue" };
    float workSurfaceWidth;
    int numberOfDrawers;

    void storeThings(int numberOfThings); 
    void holdComputer(); 
    void extendKeyboardTray(); 
    void setColor();
};

Desk::Desk() :
workSurfaceWidth(36.0f),
numberOfDrawers(3)
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
    std::cout << "Desk::holdComputer() workSurfaceWidth:" << workSurfaceWidth << " numberOfDrawers: " << numberOfDrawers << std::endl;
}

void Desk::extendKeyboardTray()
{
    
}

void Desk::setColor()
{
    for(int i = 0; i < 1; ++i)
    {
        color = "white";
        std::cout << "desk color: " << color << std::endl;
    }
}


struct Mp3Player
{
    Mp3Player();
    int numberOfButtons;
    std::string onOffSwitchColor { "white" };
    float displayScreenWidth;
    float beltClipDepth;
    int numberOfCardSlots;

    void loadFile(std::string filePath); 
    void playFile(); 
    void displayInfo(); 
    int findFiles();
};

Mp3Player::Mp3Player() :
numberOfButtons(5),
displayScreenWidth(1.0f),
beltClipDepth(1.0f),
numberOfCardSlots(1)
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
    std::cout << "Mp3Player::playFile() numberOfButtons:" << numberOfButtons << " beltClipDepth: " << beltClipDepth << std::endl;
}

void Mp3Player::displayInfo()
{
    
}

int Mp3Player::findFiles()
{
    int count = 0;
    for(int i = 0; i < 5; ++i)
    {
        std::cout << "file count: " << i << std::endl;
        count = i;
    }
    return count;
}


struct Bicycle
{
    Bicycle();
    float chainLength = 1.0f;
    std::string seatColor { "green" };
    float handlebarsWidth = 24.0f;
    int numberOfWheels;
    std::string pedalsMaterial { "steel" };

    void supportRider(); 
    void roll(); 
    void turnLeft(); 
    void changePedalMaterial(std::string); 
};

Bicycle::Bicycle() :
numberOfWheels(2)
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
    std::cout << "Bicycle::turnLeft() numberOfWheels:" << numberOfWheels << std::endl;
}

void Bicycle::changePedalMaterial(std::string newMaterial)
{
    int i = 0;
    while(i < 1)
    {
        pedalsMaterial = newMaterial;
        std::cout << "pedalsMaterial: " << pedalsMaterial << std::endl;
        i += 1;
    }
}


struct CdDrive
{
    CdDrive();
    int maxSpeed;
    float discDiameter;
    int numberOfTrays;
    std::string color { "black" };
    int numberOfFormatsSupported = 3;

    void playCd(); 
    void playDVD(); 
    void writeCdr(); 
    int findSpeed();

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

CdDrive::CdDrive() :
maxSpeed(100),
discDiameter(5.0f),
numberOfTrays(1)
{
    std::cout << "CdDrive being constructed!" << std::endl;
}

void CdDrive::playCd()
{
    std::cout << "CdDrive::playCd() " << color << std::endl;
}

void CdDrive::playDVD()
{
    std::cout << "CdDrive::playDVD() maxSpeed:" << maxSpeed << " discDiameter: " << discDiameter << std::endl;
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

int CdDrive::findSpeed()
{
    int speed = 0;
    for(int i = 97; i < maxSpeed; ++i)
    {
        speed = i;
    }
    return speed;
}


struct Monitor
{
    Monitor();
    float width = 18.0f;
    int numberOfPixels;
    std::string color { "black" };
    int refreshRate = 60;
    float depth;

    void displayImage(); 
    void adjustBrightness(int brightness); 
    void turnOff(); 
    void refreshScreen();
};

Monitor::Monitor() :
numberOfPixels(1120),
depth(12.0f)
{
    std::cout << "Monitor being constructed!" << std::endl;
}

void Monitor::displayImage()
{
    std::cout << "Monitor::displayImage() numberOfPixels:" << numberOfPixels << " depth: " << depth << std::endl;
}

void Monitor::adjustBrightness(int brightness)
{
    ++brightness;
    std::cout << "Monitor::adjustBrightness() " << brightness << std::endl;
}

void Monitor::turnOff()
{
    
}

void Monitor::refreshScreen()
{
    for(int i = 0; i < 5; ++i)
    {
        refreshRate += i;
    }
    std::cout << "refreshRate: " << refreshRate << std::endl;
}


struct HardDrive
{
    HardDrive();
    int maxSpeed;
    int numberOfPlatters;
    int numberOfMagnets;
    int memorySize;
    int ageInYears;

    void storeData(std::string filePath); 
    void retrieveData(std::string filePath); 
    void goIntoPowerSaveMode(); 
    void findFreeMemory();
};

HardDrive::HardDrive() :
maxSpeed(100),
numberOfPlatters(1),
numberOfMagnets(1),
memorySize(120),
ageInYears(2)
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
    std::cout << "HardDrive::goIntoPowerSaveMode() maxSpeed:" << maxSpeed << " numberOfMagnets: " << numberOfMagnets << std::endl;  
}

void HardDrive::findFreeMemory()
{
    int freeMemory = memorySize;
    for(int i = 0; i < 10; ++i)
    {
        freeMemory -= i;
    }
    std::cout << "total memory: " << memorySize << " freeMemory: " << freeMemory << std::endl;
}


struct Keyboard
{
    Keyboard();
    int numberOfKeys;
    int numberOfFunctionKeys;
    std::string caseColor { "black" };
    std::string buttonColor { "gray" };
    float width = 16.0f;

    void outputButtonPress(int buttonCode); 
    void displayNumLock(); 
    void displayCapsLock(); 
    int buttonPressTime();
};

Keyboard::Keyboard() :
numberOfKeys(100),
numberOfFunctionKeys(12)
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
    std::cout << "Keyboard::displayNumLock() numberOfKeys:" << numberOfKeys << " numberOfFunctionKeys: " << numberOfFunctionKeys << std::endl;
}

void Keyboard::displayCapsLock()
{

}

int Keyboard::buttonPressTime()
{
    int time = 0;
    for(int i = 0;i < 100; ++i)
    {
        time = i;
    }
    return time;
}


struct Cpu
{
    Cpu();
    int speed = 1666;
    float width;
    float height;
    std::string chipsetName { "delta bridge" };
    int ageInYears = 3;

    void communicateWithMemory(HardDrive hardDrive); 
    void communicateWithVideoCard(Monitor monitor); 
    void communicateWithPeripheral(Keyboard keyboard); 
    float getArea();
};

Cpu::Cpu() :
width(1.0f),
height(1.0f)
{
    std::cout << "Cpu being constructed!" << std::endl;
}

void Cpu::communicateWithMemory(HardDrive hardDrive)
{
    ++hardDrive.ageInYears;
    std::cout << "Cpu::communicateWithMemory() ageInYears:" << ageInYears << std::endl;
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

float Cpu::getArea()
{
    for(float i = 0.0f;i < 4.0f; ++i)
    {
        width += i;
    }
    return width * height;
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

    Dishwasher dishwasher1;
    dishwasher1.sprayDishes();
    dishwasher1.spinNozzles();
    std::cout << "dishwasher1.startButtonWidth: " << dishwasher1.startButtonWidth << std::endl;
    
    Dishwasher dishwasher2;
    dishwasher2.heatDishes(10);
    dishwasher2.countBaskets();
    
    Desk desk1;
    desk1.storeThings(50);
    desk1.holdComputer();
    desk1.extendKeyboardTray();
    std::cout << "desk1.numberOfDrawers: " << desk1.numberOfDrawers << std::endl;
    desk1.setColor();
    
    Mp3Player mp3Player1;
    mp3Player1.loadFile("music/mysong.mp3");
    mp3Player1.displayInfo();
    std::cout << "mp3Player1.onOffSwitchColor: " << mp3Player1.onOffSwitchColor << std::endl;
    
    Mp3Player mp3Player2;
    mp3Player2.playFile();
    int mp3FileCount = mp3Player2.findFiles();
    std::cout << "mp3FileCount: " << mp3FileCount << std::endl;
    
    Bicycle bicycle1;
    bicycle1.supportRider();
    bicycle1.roll();
    bicycle1.turnLeft();
    std::cout << "bicycle1.numberOfWheels: " << bicycle1.numberOfWheels << std::endl;
    bicycle1.changePedalMaterial("aluminum"); 
    
    CdDrive cdDrive1;
    cdDrive1.playCd();
    cdDrive1.playDVD();
    cdDrive1.writeCdr();
    std::cout << "cdDrive1.maxSpeed: " << cdDrive1.maxSpeed << std::endl;
    int cdDriveSpeed = cdDrive1.findSpeed();
    std::cout << "cdDrive1 speed: " << cdDriveSpeed << std::endl;
    
    CdDrive::CD darkSide;
    darkSide.getScratched();
    darkSide.storeData();
    darkSide.goObsolete();
    
    Monitor monitor1;
    monitor1.displayImage();
    monitor1.adjustBrightness(85);
    std::cout << "monitor1.depth: " << monitor1.depth << std::endl;
    
    Monitor monitor2;
    monitor2.turnOff();
    monitor2.refreshScreen();
    
    HardDrive hardDrive1;
    hardDrive1.storeData("mydocuments/word.doc");
    hardDrive1.retrieveData("desktop/text.txt");
    hardDrive1.goIntoPowerSaveMode();
    std::cout << "hardDrive1.ageInYears: " << hardDrive1.ageInYears << std::endl;
    hardDrive1.findFreeMemory();
    
    Keyboard keyboard1;
    keyboard1.outputButtonPress(23);
    keyboard1.displayNumLock();
    keyboard1.displayCapsLock();
    std::cout << "keyboard1.buttonColor: " << keyboard1.buttonColor << std::endl;
    int buttonTime1 = keyboard1.buttonPressTime();
    std::cout << "buttonTime1: " << buttonTime1 << std::endl;
    
    Cpu cpu1;
    cpu1.communicateWithMemory(hardDrive1);
    cpu1.communicateWithVideoCard(monitor1);
    std::cout << "cpu1.speed: " << cpu1.speed << std::endl;
    
    Cpu cpu2;
    cpu2.communicateWithPeripheral(keyboard1);
    float cpuArea = cpu2.getArea();
    std::cout << "cpuArea: " << cpuArea << std::endl;
    
    Computer computer1;
    computer1.loadDocument("documents/mydocument.doc");
    computer1.saveDocument("documents/myotherdocument.doc");
    computer1.playVideo("videos/mycoolvideo.mpg");

    std::cout << "good to go!" << std::endl;
}
