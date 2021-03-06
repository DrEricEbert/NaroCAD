// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_HDataMapOfStringHArray1OfReal_OCWrappers_HeaderFile
#define _TDataStd_HDataMapOfStringHArray1OfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TDataStd_DataMapOfStringHArray1OfReal.h"


namespace OCNaroWrappers
{

ref class OCTDataStd_DataMapOfStringHArray1OfReal;


//! Extension of TDataStd_DataMapOfStringHArray1OfReal class <br>
//!          to be manipulated by handle. <br>
public ref class OCTDataStd_HDataMapOfStringHArray1OfReal : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTDataStd_HDataMapOfStringHArray1OfReal(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_HDataMapOfStringHArray1OfReal(Handle(TDataStd_HDataMapOfStringHArray1OfReal)* nativeHandle);

// Methods PUBLIC


OCTDataStd_HDataMapOfStringHArray1OfReal(Standard_Integer NbBuckets);


OCTDataStd_HDataMapOfStringHArray1OfReal(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfReal^ theOther);


 /*instead*/  OCTDataStd_DataMapOfStringHArray1OfReal^ Map() ;


 /*instead*/  OCTDataStd_DataMapOfStringHArray1OfReal^ ChangeMap() ;

~OCTDataStd_HDataMapOfStringHArray1OfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
