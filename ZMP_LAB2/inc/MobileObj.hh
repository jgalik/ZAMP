#ifndef MOBILEOBJ_HH
#define MOBILEOBJ_HH

#include <string>
#include "Vector3D.hh"
#include "AbstractMobileObj.hh"

/*!
  Zawiera definicję klasy MobileObj

 */
class MobileObj: public AbstractMobileObj
{
        /*!
         * Kąt \e yaw reprezentuje rotację zgodnie z ruchem wskazówek zegara
         *        wokół osi \e OZ.
         
  
         */
        double _Ang_Yaw_deg = 0;

        /*!
         Kąt \e pitch reprezentuje rotację zgodnie z ruchem wskazówek zegara
         *        wokół osi \e OY.
     
         */
        double _Ang_Pitch_deg = 0;

        /*!
        Kąt \e roll reprezentuje rotację zgodnie z ruchem wskazówek zegara
                wokół osi \e OX.
      
         */
        double _Ang_Roll_deg = 0;

        /*!
         Współrzędne aktualnej pozycji obiektu.
       
         */
        Vector3D _Position_m; // shift?

        /*!
          Nazwa obiektu, która go indentyfikuje, musi być unikalna
         *
     
         */
        std::string _Name;
        Vector3D scale;
        Vector3D translation;
        Vector3D rgb;

public:
      
        //Udostępia wartość kąta \e roll.
      
        double GetAng_Roll_deg() const override {return _Ang_Roll_deg; }
        /*!
       Udostępia wartość kąta \e pitch.

         */
        double GetAng_Pitch_deg() const override { return _Ang_Pitch_deg; }
        /*!
         Udostępia wartość kąta \e yaw.
      
         */
        double GetAng_Yaw_deg() const override { return _Ang_Yaw_deg; }

        /*!
        Zmienia wartość kąta \e roll.
     
         */
        void SetAng_Roll_deg(double Ang_Roll_deg) override { _Ang_Roll_deg = Ang_Roll_deg; }
        /*!
        Zmienia wartość kąta \e pitch.
      
         */
        void SetAng_Pitch_deg(double Ang_Pitch_deg) override { _Ang_Pitch_deg = Ang_Pitch_deg; }
        /*!
        Zmienia wartość kąta \e yaw.
       
         */
        void SetAng_Yaw_deg(double Ang_Yaw_deg) override { _Ang_Yaw_deg = Ang_Yaw_deg; }

        /*!
        Udostępnia współrzędne położenia obiektu w trybie tylko do odczytu.
     
         */
        const Vector3D &GetPosition_m() const override { return _Position_m; }
        /*!
       Zmienia współrzędne położenia obiektu.
        
         */
        void SetPosition_m(const Vector3D &rPos_m) override { _Position_m = rPos_m; }

        /*!
         Zmienia nazwę obiektu.
      
         */
        void SetName(const char *sName) override { _Name = sName; }
        /*!
        Udostępnia nazwę obiektu.
        
         */
        const std::string &GetName() const override { return _Name; }

        void setScale(Vector3D new_scale) { scale = new_scale; }
        void setRgb(Vector3D new_rgb) { rgb = new_rgb; }
        void setTranslation(Vector3D new_trans) { translation = new_trans; }
        std::string getUpdateInstruction() const;
        std::string getAddInstruction() const;
        Vector3D getScale() { return scale; }
        Vector3D getRgb() { return rgb; }
        Vector3D getTranslation() { return translation; }
};

#endif
