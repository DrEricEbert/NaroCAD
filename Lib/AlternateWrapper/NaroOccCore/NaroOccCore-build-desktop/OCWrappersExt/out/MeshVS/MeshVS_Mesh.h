// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_Mesh_OCWrappers_HeaderFile
#define _MeshVS_Mesh_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_Mesh.hxx>
#include "../Converter.h"

#include "../AIS/AIS_InteractiveObject.h"

#include "MeshVS_SequenceOfPrsBuilder.h"
#include "MeshVS_DataMapOfIntegerOwner.h"
#include "MeshVS_MeshSelectionMethod.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_PrsBuilder;
ref class OCTColStd_HPackedMapOfInteger;
ref class OCMeshVS_DataSource;
ref class OCMeshVS_Drawer;
ref class OCSelectMgr_EntityOwner;
ref class OCPrsMgr_PresentationManager3d;
ref class OCPrs3d_Presentation;
ref class OCSelectMgr_Selection;
ref class OCSelectMgr_SequenceOfOwner;
ref class OCMeshVS_DataMapOfIntegerOwner;


//! the main class provides interface to create mesh presentation as a whole <br>
public ref class OCMeshVS_Mesh : OCAIS_InteractiveObject {

protected:
  // dummy constructor;
  OCMeshVS_Mesh(OCDummy^) : OCAIS_InteractiveObject((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_Mesh(Handle(MeshVS_Mesh)* nativeHandle);

// Methods PUBLIC

//! Constructor. <br>
//! theIsAllowOverlapped is Standard_True, if it is allowed to draw edges overlapped with beams <br>
//!   Its value is stored in drawer <br>
OCMeshVS_Mesh(System::Boolean theIsAllowOverlapped);

//! Computes presentation using builders added to sequence. Each builder computes <br>
//! own part of mesh presentation according to its type. <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCNaroWrappers::OCPrs3d_Presentation^ Prs, Standard_Integer DisplayMode) override;

//! Computes selection according to SelectMode <br>
virtual /*instead*/  void ComputeSelection(OCNaroWrappers::OCSelectMgr_Selection^ Sel, Standard_Integer SelectMode) ;

//! Draw selected owners presentation <br>
virtual /*instead*/  void HilightSelected(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCNaroWrappers::OCSelectMgr_SequenceOfOwner^ Owners) override;

//! Draw hilighted owner presentation <br>
virtual /*instead*/  void HilightOwnerWithColor(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCQuantity_NameOfColor Color, OCNaroWrappers::OCSelectMgr_EntityOwner^ Owner) override;

//! Clears internal selection presentation <br>
virtual /*instead*/  void ClearSelected() override;

//! How many builders there are in sequence <br>
 /*instead*/  Standard_Integer GetBuildersCount() ;

//! Returns builder by its index in sequence <br>
 /*instead*/  OCMeshVS_PrsBuilder^ GetBuilder(Standard_Integer Index) ;

//! Returns builder by its ID <br>
 /*instead*/  OCMeshVS_PrsBuilder^ GetBuilderById(Standard_Integer Id) ;

//! Returns the smallest positive ID, not occupied by any builder. <br>
//! This method using when builder is created with ID = -1 <br>
 /*instead*/  Standard_Integer GetFreeId() ;

//! Adds builder to tale of sequence. <br>
//! PrsBuilder is builder to be added <br>
//! If TreatAsHilighter is true, MeshVS_Mesh will use this builder to create <br>
//! presentation of hilighted and selected owners. <br>
//!   Only one builder can be hilighter, so that if you call this method with <br>
//!   TreatAsHilighter = Standard_True some times, only last builder will be hilighter <br>
//!   WARNING: As minimum one builder must be added as hilighter, otherwise selection cannot be computed <br>
 /*instead*/  void AddBuilder(OCNaroWrappers::OCMeshVS_PrsBuilder^ Builder, System::Boolean TreatAsHilighter) ;

//! Changes hilighter ( see above ) <br>
 /*instead*/  void SetHilighter(OCNaroWrappers::OCMeshVS_PrsBuilder^ Builder) ;

//! Sets builder with sequence index "Index" as hilighter <br>
 /*instead*/  System::Boolean SetHilighter(Standard_Integer Index) ;

//! Sets builder with identificator "Id" as hilighter <br>
 /*instead*/  System::Boolean SetHilighterById(Standard_Integer Id) ;

//! Returns hilighter <br>
 /*instead*/  OCMeshVS_PrsBuilder^ GetHilighter() ;

//! Removes builder from sequence. If it is hilighter, hilighter will be NULL <br>
//! ( Don't remember to set it to other after!!! ) <br>
 /*instead*/  void RemoveBuilder(Standard_Integer Index) ;

//! Removes builder with identificator Id <br>
 /*instead*/  void RemoveBuilderById(Standard_Integer Id) ;

//! Finds builder by its type the string represents <br>
 /*instead*/  OCMeshVS_PrsBuilder^ FindBuilder(System::String^ TypeString) ;

//! Returns map of owners. <br>
 /*instead*/  OCMeshVS_DataMapOfIntegerOwner^ GetOwnerMaps(System::Boolean IsElement) ;

//! Returns default builders' data source <br>
 /*instead*/  OCMeshVS_DataSource^ GetDataSource() ;

//! Sets default builders' data source <br>
 /*instead*/  void SetDataSource(OCNaroWrappers::OCMeshVS_DataSource^ aDataSource) ;

//! Returns default builders' drawer <br>
 /*instead*/  OCMeshVS_Drawer^ GetDrawer() ;

//! Sets default builders' drawer <br>
 /*instead*/  void SetDrawer(OCNaroWrappers::OCMeshVS_Drawer^ aDrawer) ;

//! Returns True if specified element is hidden <br>
//!          By default no elements are hidden <br>
 /*instead*/  System::Boolean IsHiddenElem(Standard_Integer ID) ;

//! Returns True if specified node is hidden. <br>
//!          By default all nodes are hidden <br>
 /*instead*/  System::Boolean IsHiddenNode(Standard_Integer ID) ;

//! Returns True if specified element is not hidden <br>
 /*instead*/  System::Boolean IsSelectableElem(Standard_Integer ID) ;

//! Returns True if specified node is specified as selectable. <br>
 /*instead*/  System::Boolean IsSelectableNode(Standard_Integer ID) ;

//! Returns map of hidden nodes (may be null handle) <br>
 /*instead*/  OCTColStd_HPackedMapOfInteger^ GetHiddenNodes() ;

//! Sets map of hidden nodes, which shall not be displayed individually. <br>
//!          If nodes shared by some elements shall not be drawn, <br>
//!          they should be included into that map <br>
 /*instead*/  void SetHiddenNodes(OCNaroWrappers::OCTColStd_HPackedMapOfInteger^ Ids) ;

//! Returns map of hidden elements (may be null handle) <br>
 /*instead*/  OCTColStd_HPackedMapOfInteger^ GetHiddenElems() ;

//! Sets map of hidden elements <br>
 /*instead*/  void SetHiddenElems(OCNaroWrappers::OCTColStd_HPackedMapOfInteger^ Ids) ;

//! Returns map of selectable elements (may be null handle) <br>
 /*instead*/  OCTColStd_HPackedMapOfInteger^ GetSelectableNodes() ;

//! Sets map of selectable nodes. <br>
 /*instead*/  void SetSelectableNodes(OCNaroWrappers::OCTColStd_HPackedMapOfInteger^ Ids) ;

//! Automatically computes selectable nodes; the node is considered <br>
//!          as being selectable if it is either not hidden, or is hidden <br>
//!          but referred by at least one non-hidden element. <br>
//!          Thus all nodes that are visible (either individually, or as ends or <br>
//!          corners of elements) are selectable by default. <br>
 /*instead*/  void UpdateSelectableNodes() ;

//! Returns set mesh selection method (see MeshVS.cdl) <br>
 /*instead*/  OCMeshVS_MeshSelectionMethod GetMeshSelMethod() ;

//! Sets mesh selection method (see MeshVS.cdl) <br>
 /*instead*/  void SetMeshSelMethod(OCMeshVS_MeshSelectionMethod M) ;

//! Returns True if the given owner represents a whole mesh. <br>
virtual /*instead*/  System::Boolean IsWholeMeshOwner(OCNaroWrappers::OCSelectMgr_EntityOwner^ theOwner) ;

~OCMeshVS_Mesh()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
