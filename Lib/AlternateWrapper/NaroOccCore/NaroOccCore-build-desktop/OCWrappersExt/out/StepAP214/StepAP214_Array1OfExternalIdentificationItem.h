// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_Array1OfExternalIdentificationItem_OCWrappers_HeaderFile
#define _StepAP214_Array1OfExternalIdentificationItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_Array1OfExternalIdentificationItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepAP214_ExternalIdentificationItem;



public ref class OCStepAP214_Array1OfExternalIdentificationItem  {

protected:
  StepAP214_Array1OfExternalIdentificationItem* nativeHandle;
  OCStepAP214_Array1OfExternalIdentificationItem(OCDummy^) {};

public:
  property StepAP214_Array1OfExternalIdentificationItem* Handle
  {
    StepAP214_Array1OfExternalIdentificationItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepAP214_Array1OfExternalIdentificationItem(StepAP214_Array1OfExternalIdentificationItem* nativeHandle);

// Methods PUBLIC


OCStepAP214_Array1OfExternalIdentificationItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_Array1OfExternalIdentificationItem(OCNaroWrappers::OCStepAP214_ExternalIdentificationItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_ExternalIdentificationItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepAP214_Array1OfExternalIdentificationItem^ Assign(OCNaroWrappers::OCStepAP214_Array1OfExternalIdentificationItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_ExternalIdentificationItem^ Value) ;


 /*instead*/  OCStepAP214_ExternalIdentificationItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_ExternalIdentificationItem^ ChangeValue(Standard_Integer Index) ;

~OCStepAP214_Array1OfExternalIdentificationItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
