#ifndef ACCESSCONTROLL_HH
#define ACCESSCONTROLL_HH

#include <mutex>

/*!
 * \file
 * \brief Zawiera definicję klasy AccessControl
 */


/*!
 * \brief Przechowuje informacje o zmianie
 *
 *  Przechowuje informacje o zmianie z zabezpieczeniem
 *  wielowątkowej modyfikacji.
 */
class AccessControl {
   /*!
    Zapewnia wyłączny dostęp do obiektu w trakcie modyfikacji.
    */
    std::mutex   _InternalGuard;
   /*!
  Przechowuje informacje o zmianie
    */ 
    bool         _Changed = false;
   //Wykorzystywany do blokowania całej sceny.
    
    std::mutex  _ExternalGuard;
 public:
  // Dostęp do informacji o zmianie.
  
   bool IsChanged() const { return _Changed; }
  //Zaznaczenie, że zmiana nastąpiła.
  
   void MarkChange() { _InternalGuard.lock();  _Changed = true;  _InternalGuard.unlock(); }
  //Skasowanie informacji, że zmiana nastąpiła.
  
   void CancelChange() { _InternalGuard.lock();  _Changed = false;  _InternalGuard.unlock(); }
  //Zamyka dostęp całej sceny.
   void LockAccess() { _ExternalGuard.lock(); }
  //brief Otwiera dostęp do całej sceny.
  
   void UnlockAccess() { _ExternalGuard.unlock(); } 
};




#endif 
