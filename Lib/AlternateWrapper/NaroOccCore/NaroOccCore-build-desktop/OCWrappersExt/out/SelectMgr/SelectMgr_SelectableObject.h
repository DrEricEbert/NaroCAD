// File generated by CPPExt (Transient)
//
#ifndef _SelectMgr_SelectableObject_OCWrappers_HeaderFile
#define _SelectMgr_SelectableObject_OCWrappers_HeaderFile

// include the wrapped class
#include <SelectMgr_SelectableObject.hxx>
#include "../Converter.h"

#include "../PrsMgr/PrsMgr_PresentableObject.h"

#include "SelectMgr_SequenceOfSelection.h"
#include "../PrsMgr/PrsMgr_TypeOfPresentation3d.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCPrs3d_Presentation;
ref class OCSelectMgr_SelectionManager;
ref class OCSelectMgr_Selection;
ref class OCPrsMgr_PresentationManager3d;
ref class OCSelectMgr_SequenceOfOwner;
ref class OCSelectMgr_EntityOwner;
ref class OCPrsMgr_PresentationManager;


//! A framework to supply the structure of the object to be <br>
//! selected. At the first pick, this structure is created by <br>
//! calling the appropriate algorithm and retaining this <br>
//! framework for further picking. <br>
//! This abstract framework is inherited in Application <br>
//! Interactive Services (AIS), notably in AIS_InteractiveObject. <br>
//! Consequently, 3D selection should be handled by the <br>
//! relevant daughter classes and their member functions <br>
//! in AIS. This is particularly true in the creation of new interactive objects. <br>
public ref class OCSelectMgr_SelectableObject : OCPrsMgr_PresentableObject {

protected:
  // dummy constructor;
  OCSelectMgr_SelectableObject(OCDummy^) : OCPrsMgr_PresentableObject((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_SelectableObject(Handle(SelectMgr_SelectableObject)* nativeHandle);

// Methods PUBLIC


OCSelectMgr_SelectableObject(OCPrsMgr_TypeOfPresentation3d aTypeOfPresentation3d);

//! defines the number of different modes of selection <br>
//!          (or decomposition) for an Object. <br>
virtual /*instead*/  Standard_Integer NbPossibleSelection() ;

//! re-computes the sensitive primitives for all modes <br>
 /*instead*/  void UpdateSelection() ;

//! re-computes the sensitive primitives which correspond to <br>
//!          the <amode>th selection mode. <br>
 /*instead*/  void UpdateSelection(Standard_Integer aMode) ;

//! Adds the selection aSelection with the selection mode <br>
//! index aMode to this framework. <br>
 /*instead*/  void AddSelection(OCNaroWrappers::OCSelectMgr_Selection^ aSelection, Standard_Integer aMode) ;

//! Empties all the selections in the SelectableObject <br>
//!          <update> parameter defines whether all object's <br>
//! selections should be flagged for further update or not. <br>
//! This improved method can be used to recompute an <br>
//! object's selection (without redisplaying the object <br>
//! completely) when some selection mode is activated not for the first time. <br>
 /*instead*/  void ClearSelections(System::Boolean update) ;

//! Returns the selection Selection having the selection mode aMode. <br>
 /*instead*/  OCSelectMgr_Selection^ Selection(Standard_Integer aMode) ;

//! Returns true if a selection corresponding to the <br>
//! selection mode aMode is present in this framework. <br>
 /*instead*/  System::Boolean HasSelection(Standard_Integer aMode) ;

//! Begins the iteration scanning for sensitive primitives. <br>
 /*instead*/  void Init() ;

//! Continues the iteration scanning for sensitive primitives. <br>
 /*instead*/  System::Boolean More() ;

//! Continues the iteration scanning for sensitive primitives. <br>
 /*instead*/  void Next() ;

//! Returns the current selection in this framework. <br>
 /*instead*/  OCSelectMgr_Selection^ CurrentSelection() ;


virtual /*instead*/  void ResetLocation() override;

//! Recomputes the location of the selection aSelection. <br>
virtual /*instead*/  void UpdateLocation() override;

//! Method which draws selected owners ( for fast presentation draw ) <br>
virtual /*instead*/  void HilightSelected(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCNaroWrappers::OCSelectMgr_SequenceOfOwner^ Seq) ;

//! Method which clear all selected owners belonging <br>
//! to this selectable object ( for fast presentation draw ) <br>
virtual /*instead*/  void ClearSelected() ;

//! Method which hilight an owner belonging to <br>
//! this selectable object  ( for fast presentation draw ) <br>
virtual /*instead*/  void HilightOwnerWithColor(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ thePM, OCQuantity_NameOfColor theColor, OCNaroWrappers::OCSelectMgr_EntityOwner^ theOwner) ;

//! If returns True, the old mechanism for highlighting <br>
//! selected objects is used (HilightSelected Method may be empty). <br>
//! If returns False, the HilightSelected method will be <br>
//! fully responsible for highlighting selected entity <br>
//! owners belonging to this selectable object. <br>
virtual /*instead*/  System::Boolean IsAutoHilight() ;

//! Set AutoHilight property to true or false <br>//!  Sets  up  Transform  Persistence Mode  for  this  object <br>
virtual /*instead*/  void SetAutoHilight(System::Boolean newAutoHilight) ;


 /*instead*/  OCPrs3d_Presentation^ GetHilightPresentation(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ TheMgr) ;


 /*instead*/  OCPrs3d_Presentation^ GetSelectPresentation(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ TheMgr) ;

//! Set Z layer ID and update all presentations of <br>
//! the selectable object. The layer can be set only for displayed object. <br>
//! If all object presentations are removed, the layer ID will be set to <br>
//! default value when computing presentation. The layers mechanism allows <br>
//! drawing objects in higher layers in overlay of objects in lower layers. <br>
virtual /*instead*/  void SetZLayer(OCNaroWrappers::OCPrsMgr_PresentationManager^ thePrsMgr, Standard_Integer theLayerId) override;

~OCSelectMgr_SelectableObject()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif