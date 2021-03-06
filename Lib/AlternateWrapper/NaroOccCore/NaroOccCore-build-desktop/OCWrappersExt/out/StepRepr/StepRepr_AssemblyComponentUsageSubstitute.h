// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_AssemblyComponentUsageSubstitute_OCWrappers_HeaderFile
#define _StepRepr_AssemblyComponentUsageSubstitute_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepRepr_AssemblyComponentUsage;



public ref class OCStepRepr_AssemblyComponentUsageSubstitute : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_AssemblyComponentUsageSubstitute(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_AssemblyComponentUsageSubstitute(Handle(StepRepr_AssemblyComponentUsageSubstitute)* nativeHandle);

// Methods PUBLIC


OCStepRepr_AssemblyComponentUsageSubstitute();


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aDef, OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ aBase, OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ aSubs) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Definition() ;


 /*instead*/  void SetDefinition(OCNaroWrappers::OCTCollection_HAsciiString^ aDef) ;


 /*instead*/  OCStepRepr_AssemblyComponentUsage^ Base() ;


 /*instead*/  void SetBase(OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ aBase) ;


 /*instead*/  OCStepRepr_AssemblyComponentUsage^ Substitute() ;


 /*instead*/  void SetSubstitute(OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ aSubstitute) ;

~OCStepRepr_AssemblyComponentUsageSubstitute()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
