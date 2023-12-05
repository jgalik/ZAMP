#ifndef ABSGTRACTMOBILEOBJ_HH
#define ABSGTRACTMOBILEOBJ_HH




#include "Vector3D.hh"

    class AbstractMobileObj {
     public:

       virtual ~AbstractMobileObj() {}
      
     
       virtual double GetAng_Roll_deg() const = 0;
       // Udostępnia wartość kąta \e yaw.
      
       virtual double GetAng_Pitch_deg() const = 0;
       // Udostępnia wartość kąta \e yaw.
      
       virtual double GetAng_Yaw_deg() const = 0;

       // Zmienia wartość kąta \e roll.
        
       virtual void SetAng_Roll_deg(double Ang_Roll_deg) = 0;
       // Zmienia wartość kąta \e pitch.
        
       
       virtual void SetAng_Pitch_deg(double Ang_Pitch_deg) = 0;
       //Zmienia wartość kąta \e yaw.
        
       virtual void SetAng_Yaw_deg(double Ang_Yaw_deg) = 0;

       //Udostępnia współrzędne aktualnej pozycji obiektu.
        
       virtual const Vector3D & GetPosition_m() const = 0;
       // Zmienia współrzędne aktualnej pozycji obiektu.
        
        
       virtual void SetPosition_m(const Vector3D &rPos) = 0;

       // Zmienia nazwę obiektu.
        
        virtual void SetName(const char* sName) = 0;
       // Udostępnia nazwę obiektu.
        
        virtual const std::string & GetName() const = 0;
    };



#endif
