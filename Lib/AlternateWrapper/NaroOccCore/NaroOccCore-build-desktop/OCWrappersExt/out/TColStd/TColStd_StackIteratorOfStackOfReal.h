// File generated by CPPExt (MPV)
//
#ifndef _TColStd_StackIteratorOfStackOfReal_OCWrappers_HeaderFile
#define _TColStd_StackIteratorOfStackOfReal_OCWrappers_HeaderFile

// include native header
#include <TColStd_StackIteratorOfStackOfReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_StackOfReal;
ref class OCTColStd_StackNodeOfStackOfReal;



public ref class OCTColStd_StackIteratorOfStackOfReal  {

protected:
  TColStd_StackIteratorOfStackOfReal* nativeHandle;
  OCTColStd_StackIteratorOfStackOfReal(OCDummy^) {};

public:
  property TColStd_StackIteratorOfStackOfReal* Handle
  {
    TColStd_StackIteratorOfStackOfReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_StackIteratorOfStackOfReal(TColStd_StackIteratorOfStackOfReal* nativeHandle);

// Methods PUBLIC


OCTColStd_StackIteratorOfStackOfReal();


OCTColStd_StackIteratorOfStackOfReal(OCNaroWrappers::OCTColStd_StackOfReal^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_StackOfReal^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  Standard_Real Value() ;

~OCTColStd_StackIteratorOfStackOfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
