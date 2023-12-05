#ifndef SCENE_HH
#define SCENE_HH

#include <map>
#include <string>
#include "AccessControl.hh"
#include "Configuration.hh"
#include "MobileObj.hh"

/*!
Zawiera definicję klasy Scene

 */
class Scene : public AccessControl
{
private:
    /*!
   Prosta kolekcja obiektów sceny
     */
    std::map<std::string, MobileObj> _Container4Objects; //mapa obiektów na scenie

public:
    Scene(Configuration &config);
    /*!
    Wyszukuje obiekt o podanej pełnej kwalifikowanej nazwie.
  
     */
    MobileObj *FindMobileObj(const char *sName) //znajdowanie obiektów na scenie
    {
        MobileObj *pointer_to_object = NULL;
        std::map<std::string, MobileObj>::iterator iterator = _Container4Objects.find(sName);
        if (iterator == _Container4Objects.end())
        {
            std::cout << "FindMobileObj: Nie znaleziono wtyczki dla polecenia: " << sName << std::endl;
        }
        pointer_to_object = &(iterator->second);
        return pointer_to_object;
    }
    /*!
     *  Dodaje do sceny nowy obiekt.
      
     */
    void AddMobileObj(MobileObj *pMobObj);
    std::map<std::string, MobileObj> getMobileObjects() { return _Container4Objects; }
};

#endif
