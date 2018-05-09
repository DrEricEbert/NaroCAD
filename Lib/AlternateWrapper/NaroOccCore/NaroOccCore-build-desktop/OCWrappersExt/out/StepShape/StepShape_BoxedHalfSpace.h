// File generated by CPPExt (MPV)
//
#ifndef _StepShape_BoxedHalfSpace_OCWrappers_HeaderFile
#define _StepShape_BoxedHalfSpace_OCWrappers_HeaderFile

// include native header
#include <StepShape_BoxedHalfSpace.hxx>
#include "../Converter.h"

#include "StepShape_HalfSpaceSolid.h"

#include "StepShape_HalfSpaceSolid.h"


namespace OCNaroWrappers
{

ref class OCStepShape_BoxDomain;
ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Surface;



public ref class OCStepShape_BoxedHalfSpace  : public OCStepShape_HalfSpaceSolid {

protected:
  // dummy constructor;
  OCStepShape_BoxedHalfSpace(OCDummy^) : OCStepShape_HalfSpaceSolid((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_BoxedHalfSpace(StepShape_BoxedHalfSpace* nativeHandle);

// Methods PUBLIC

//! Returns a BoxedHalfSpace <br>
OCStepShape_BoxedHalfSpace();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBaseSurface, System::Boolean aAgreementFlag) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBaseSurface, System::Boolean aAgreementFlag, OCNaroWrappers::OCStepShape_BoxDomain^ aEnclosure) ;


 /*instead*/  void SetEnclosure(OCNaroWrappers::OCStepShape_BoxDomain^ aEnclosure) ;


 /*instead*/  OCStepShape_BoxDomain^ Enclosure() ;

~OCStepShape_BoxedHalfSpace()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif