// File generated by CPPExt (CPP file)
//

#include "CDM_StackOfDocument.h"
#include "../Converter.h"
#include "CDM_StackIteratorOfStackOfDocument.h"
#include "CDM_Document.h"
#include "CDM_StackNodeOfStackOfDocument.h"


using namespace OCNaroWrappers;

OCCDM_StackOfDocument::OCCDM_StackOfDocument(CDM_StackOfDocument* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCCDM_StackOfDocument::OCCDM_StackOfDocument() 
{
  nativeHandle = new CDM_StackOfDocument();
}

OCCDM_StackOfDocument^ OCCDM_StackOfDocument::Assign(OCNaroWrappers::OCCDM_StackOfDocument^ Other)
{
  CDM_StackOfDocument* tmp = new CDM_StackOfDocument();
  *tmp = ((CDM_StackOfDocument*)nativeHandle)->Assign(*((CDM_StackOfDocument*)Other->Handle));
  return gcnew OCCDM_StackOfDocument(tmp);
}

 System::Boolean OCCDM_StackOfDocument::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((CDM_StackOfDocument*)nativeHandle)->IsEmpty());
}

 Standard_Integer OCCDM_StackOfDocument::Depth()
{
  return ((CDM_StackOfDocument*)nativeHandle)->Depth();
}

OCCDM_Document^ OCCDM_StackOfDocument::Top()
{
  Handle(CDM_Document) tmp = ((CDM_StackOfDocument*)nativeHandle)->Top();
  return gcnew OCCDM_Document(&tmp);
}

 void OCCDM_StackOfDocument::Push(OCNaroWrappers::OCCDM_Document^ I)
{
  ((CDM_StackOfDocument*)nativeHandle)->Push(*((Handle_CDM_Document*)I->Handle));
}

 void OCCDM_StackOfDocument::Pop()
{
  ((CDM_StackOfDocument*)nativeHandle)->Pop();
}

OCCDM_Document^ OCCDM_StackOfDocument::ChangeTop()
{
  Handle(CDM_Document) tmp = ((CDM_StackOfDocument*)nativeHandle)->ChangeTop();
  return gcnew OCCDM_Document(&tmp);
}


