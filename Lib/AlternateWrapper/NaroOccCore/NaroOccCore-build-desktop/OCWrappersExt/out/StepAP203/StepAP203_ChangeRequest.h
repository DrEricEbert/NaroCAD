// File generated by CPPExt (Transient)
//
#ifndef _StepAP203_ChangeRequest_OCWrappers_HeaderFile
#define _StepAP203_ChangeRequest_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP203_ChangeRequest.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_ActionRequestAssignment.h"



namespace OCNaroWrappers
{

ref class OCStepAP203_HArray1OfChangeRequestItem;
ref class OCStepBasic_VersionedActionRequest;


//! Representation of STEP entity ChangeRequest <br>
public ref class OCStepAP203_ChangeRequest : OCStepBasic_ActionRequestAssignment {

protected:
  // dummy constructor;
  OCStepAP203_ChangeRequest(OCDummy^) : OCStepBasic_ActionRequestAssignment((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP203_ChangeRequest(Handle(StepAP203_ChangeRequest)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP203_ChangeRequest();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_VersionedActionRequest^ aActionRequestAssignment_AssignedActionRequest, OCNaroWrappers::OCStepAP203_HArray1OfChangeRequestItem^ aItems) ;

//! Returns field Items <br>
 /*instead*/  OCStepAP203_HArray1OfChangeRequestItem^ Items() ;

//! Set field Items <br>
 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP203_HArray1OfChangeRequestItem^ Items) ;

~OCStepAP203_ChangeRequest()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
