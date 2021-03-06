// File generated by CPPExt (Transient)
//
#ifndef _STEPControl_Controller_OCWrappers_HeaderFile
#define _STEPControl_Controller_OCWrappers_HeaderFile

// include the wrapped class
#include <STEPControl_Controller.hxx>
#include "../Converter.h"

#include "../XSControl/XSControl_Controller.h"

#include "../IFSelect/IFSelect_ReturnStatus.h"


namespace OCNaroWrappers
{

ref class OCInterface_InterfaceModel;
ref class OCTransfer_ActorOfTransientProcess;
ref class OCXSControl_WorkSession;
ref class OCTopoDS_Shape;
ref class OCTransfer_FinderProcess;


//! defines basic controller for STEP processor <br>
public ref class OCSTEPControl_Controller : OCXSControl_Controller {

protected:
  // dummy constructor;
  OCSTEPControl_Controller(OCDummy^) : OCXSControl_Controller((OCDummy^)nullptr) {};

public:

// constructor from native
OCSTEPControl_Controller(Handle(STEPControl_Controller)* nativeHandle);

// Methods PUBLIC

//! Initializes the use of STEP Norm (the first time) and <br>
//!           returns a Controller <br>
OCSTEPControl_Controller();

//! Creates a new empty Model ready to receive data of the Norm. <br>
//!           It is taken from STEP Template Model <br>
 /*instead*/  OCInterface_InterfaceModel^ NewModel() ;

//! Returns a new Actor for Read attached to the pair (norm,appli) <br>
//!           It is a PmsToTopoDSAct_Actor <br>
 /*instead*/  OCTransfer_ActorOfTransientProcess^ ActorRead(OCNaroWrappers::OCInterface_InterfaceModel^ model) ;


virtual /*instead*/  void Customise(OCNaroWrappers::OCXSControl_WorkSession^ WS) override;

//! Takes one Shape and transfers it to the InterfaceModel <br>
//!           (already created by NewModel for instance) <br>
//!           <modeshape> is to be interpreted by each kind of XstepAdaptor <br>
//!           Returns a status : 0 OK  1 No result  2 Fail  -1 bad modeshape <br>
//!               -2 bad model (requires a StepModel) <br>
//!           modeshape : 1 Facetted BRep, 2 Shell, 3 Manifold Solid <br>
virtual /*instead*/  OCIFSelect_ReturnStatus TransferWriteShape(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCInterface_InterfaceModel^ model, Standard_Integer modetrans) override;

//! Standard Initialisation. It creates a Controller for STEP <br>
//!           and records it to various names, available to select it later <br>
//!           Returns True when done, False if could not be done <br>
static /*instead*/  System::Boolean Init() ;

~OCSTEPControl_Controller()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
