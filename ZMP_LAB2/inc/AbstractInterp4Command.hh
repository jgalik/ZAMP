#ifndef ABSTRACTINTERP4COMMAND_HH
#define ABSTRACTINTERP4COMMAND_HH


 
// Zawiera definicję klasy abstrakcyjnej AbstractInterp4Command.
// Wyznacza ona niezbędny interfejs klas pochodnych.
 

// Liczba kroków animacji
#define N 300 

#include "Scene.hh"
#include <unistd.h>


 // Definiuje interfejs interpretera polecenia.
 
 
  class AbstractInterp4Command {
   public:

    virtual ~AbstractInterp4Command() {}
    
    // Wyświetla postać bieżącego polecenia (nazwę oraz wartości parametrów)
   
     virtual void PrintCmd() const = 0;
    // Wyświetla składnię polecenia
     
     virtual void PrintSyntax() const = 0;
     /*!
      Wyświetla wartości wczytanych parametrów
      */
     virtual void PrintParams() const = 0;

     /*!
     Udostępnia nazwę polecenia
      */
     virtual const char* GetCmdName() const = 0;
     /*!
     Wykonuje polecenie oraz wizualizuje jego realizację
      */
     virtual bool ExecCmd(Scene *scene) const = 0;
     /*! Czyta wartości parametrów danego polecenia.
     
      */
     virtual bool ReadParams(std::istream &rStrm_CmdsList) = 0;
  };


#endif
