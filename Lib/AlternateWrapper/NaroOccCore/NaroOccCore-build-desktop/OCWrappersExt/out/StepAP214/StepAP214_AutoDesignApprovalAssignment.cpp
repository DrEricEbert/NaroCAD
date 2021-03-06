// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignApprovalAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfAutoDesignGeneralOrgItem.h"
#include "../StepBasic/StepBasic_Approval.h"
#include "StepAP214_AutoDesignGeneralOrgItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignApprovalAssignment::OCStepAP214_AutoDesignApprovalAssignment(Handle(StepAP214_AutoDesignApprovalAssignment)* nativeHandle) : OCStepBasic_ApprovalAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AutoDesignApprovalAssignment(*nativeHandle);
}

OCStepAP214_AutoDesignApprovalAssignment::OCStepAP214_AutoDesignApprovalAssignment() : OCStepBasic_ApprovalAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AutoDesignApprovalAssignment(new StepAP214_AutoDesignApprovalAssignment());
}

 void OCStepAP214_AutoDesignApprovalAssignment::Init(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval)
{
  (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle));
}

 void OCStepAP214_AutoDesignApprovalAssignment::Init(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval, OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle), *((Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem*)aItems->Handle));
}

 void OCStepAP214_AutoDesignApprovalAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem*)aItems->Handle));
}

OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ OCStepAP214_AutoDesignApprovalAssignment::Items()
{
  Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem) tmp = (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfAutoDesignGeneralOrgItem(&tmp);
}

OCStepAP214_AutoDesignGeneralOrgItem^ OCStepAP214_AutoDesignApprovalAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_AutoDesignGeneralOrgItem* tmp = new StepAP214_AutoDesignGeneralOrgItem();
  *tmp = (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_AutoDesignGeneralOrgItem(tmp);
}

 Standard_Integer OCStepAP214_AutoDesignApprovalAssignment::NbItems()
{
  return (*((Handle_StepAP214_AutoDesignApprovalAssignment*)nativeHandle))->NbItems();
}


