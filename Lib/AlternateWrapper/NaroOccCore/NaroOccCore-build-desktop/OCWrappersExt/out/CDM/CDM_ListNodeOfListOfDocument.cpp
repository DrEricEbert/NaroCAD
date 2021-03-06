// File generated by CPPExt (CPP file)
//

#include "CDM_ListNodeOfListOfDocument.h"
#include "../Converter.h"
#include "CDM_Document.h"
#include "CDM_ListOfDocument.h"
#include "CDM_ListIteratorOfListOfDocument.h"


using namespace OCNaroWrappers;

OCCDM_ListNodeOfListOfDocument::OCCDM_ListNodeOfListOfDocument(Handle(CDM_ListNodeOfListOfDocument)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_ListNodeOfListOfDocument(*nativeHandle);
}

OCCDM_ListNodeOfListOfDocument::OCCDM_ListNodeOfListOfDocument(OCNaroWrappers::OCCDM_Document^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_CDM_ListNodeOfListOfDocument(new CDM_ListNodeOfListOfDocument(*((Handle_CDM_Document*)I->Handle), n));
}

OCCDM_Document^ OCCDM_ListNodeOfListOfDocument::Value()
{
  Handle(CDM_Document) tmp = (*((Handle_CDM_ListNodeOfListOfDocument*)nativeHandle))->Value();
  return gcnew OCCDM_Document(&tmp);
}


