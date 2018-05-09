// File generated by CPPExt (MPV)
//
#ifndef _V3d_ListOfTransient_OCWrappers_HeaderFile
#define _V3d_ListOfTransient_OCWrappers_HeaderFile

// include native header
#include <V3d_ListOfTransient.hxx>
#include "../Converter.h"

#include "../TColStd/TColStd_ListOfTransient.h"

#include "../TColStd/TColStd_ListOfTransient.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;



public ref class OCV3d_ListOfTransient  : public OCTColStd_ListOfTransient {

protected:
  // dummy constructor;
  OCV3d_ListOfTransient(OCDummy^) : OCTColStd_ListOfTransient((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_ListOfTransient(V3d_ListOfTransient* nativeHandle);

// Methods PUBLIC


OCV3d_ListOfTransient();


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCStandard_Transient^ aTransient) ;


 /*instead*/  void Remove(OCNaroWrappers::OCStandard_Transient^ aTransient) ;

~OCV3d_ListOfTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif