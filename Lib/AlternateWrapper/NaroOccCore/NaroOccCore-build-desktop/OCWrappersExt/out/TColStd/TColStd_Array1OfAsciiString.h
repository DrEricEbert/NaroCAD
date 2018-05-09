// File generated by CPPExt (MPV)
//
#ifndef _TColStd_Array1OfAsciiString_OCWrappers_HeaderFile
#define _TColStd_Array1OfAsciiString_OCWrappers_HeaderFile

// include native header
#include <TColStd_Array1OfAsciiString.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;



public ref class OCTColStd_Array1OfAsciiString  {

protected:
  TColStd_Array1OfAsciiString* nativeHandle;
  OCTColStd_Array1OfAsciiString(OCDummy^) {};

public:
  property TColStd_Array1OfAsciiString* Handle
  {
    TColStd_Array1OfAsciiString* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_Array1OfAsciiString(TColStd_Array1OfAsciiString* nativeHandle);

// Methods PUBLIC


OCTColStd_Array1OfAsciiString(Standard_Integer Low, Standard_Integer Up);


OCTColStd_Array1OfAsciiString(OCNaroWrappers::OCTCollection_AsciiString^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_AsciiString^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTColStd_Array1OfAsciiString^ Assign(OCNaroWrappers::OCTColStd_Array1OfAsciiString^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_AsciiString^ Value) ;


 /*instead*/  OCTCollection_AsciiString^ Value(Standard_Integer Index) ;


 /*instead*/  OCTCollection_AsciiString^ ChangeValue(Standard_Integer Index) ;

~OCTColStd_Array1OfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif