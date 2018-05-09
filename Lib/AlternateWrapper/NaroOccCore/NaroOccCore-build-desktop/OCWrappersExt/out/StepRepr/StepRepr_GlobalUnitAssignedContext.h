// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_GlobalUnitAssignedContext_OCWrappers_HeaderFile
#define _StepRepr_GlobalUnitAssignedContext_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include "../Converter.h"

#include "StepRepr_RepresentationContext.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_HArray1OfNamedUnit;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_NamedUnit;



public ref class OCStepRepr_GlobalUnitAssignedContext : OCStepRepr_RepresentationContext {

protected:
  // dummy constructor;
  OCStepRepr_GlobalUnitAssignedContext(OCDummy^) : OCStepRepr_RepresentationContext((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_GlobalUnitAssignedContext(Handle(StepRepr_GlobalUnitAssignedContext)* nativeHandle);

// Methods PUBLIC

//! Returns a GlobalUnitAssignedContext <br>
OCStepRepr_GlobalUnitAssignedContext();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType, OCNaroWrappers::OCStepBasic_HArray1OfNamedUnit^ aUnits) ;


 /*instead*/  void SetUnits(OCNaroWrappers::OCStepBasic_HArray1OfNamedUnit^ aUnits) ;


 /*instead*/  OCStepBasic_HArray1OfNamedUnit^ Units() ;


 /*instead*/  OCStepBasic_NamedUnit^ UnitsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbUnits() ;

~OCStepRepr_GlobalUnitAssignedContext()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif