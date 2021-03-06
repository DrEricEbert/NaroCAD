// File generated by CPPExt (MPV)
//
#ifndef _Transfer_TransferIterator_OCWrappers_HeaderFile
#define _Transfer_TransferIterator_OCWrappers_HeaderFile

// include native header
#include <Transfer_TransferIterator.hxx>
#include "../Converter.h"


#include "Transfer_StatusExec.h"


namespace OCNaroWrappers
{

ref class OCTransfer_HSequenceOfBinder;
ref class OCTColStd_HSequenceOfInteger;
ref class OCTransfer_Binder;
ref class OCStandard_Type;
ref class OCStandard_Transient;
ref class OCInterface_Check;


//! Defines an Iterator on the result of a Transfer <br>
//!           Available for Normal Results or not (Erroneous Transfer) <br>
//!           It gives several kinds of Informations, and allows to consider <br>
//!           various criteria (criteria are cumulative) <br>
public ref class OCTransfer_TransferIterator  {

protected:
  Transfer_TransferIterator* nativeHandle;
  OCTransfer_TransferIterator(OCDummy^) {};

public:
  property Transfer_TransferIterator* Handle
  {
    Transfer_TransferIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTransfer_TransferIterator(Transfer_TransferIterator* nativeHandle);

// Methods PUBLIC

//! Creates an empty Iterator <br>
OCTransfer_TransferIterator();

//! Adds a Binder to the iteration list (construction) <br>
 /*instead*/  void AddItem(OCNaroWrappers::OCTransfer_Binder^ atr) ;

//! Selects Items on the Type of Binder : keep only <br>
//!           Binders which are of a given Type (if keep is True) or <br>
//!           reject only them (if keep is False) <br>
 /*instead*/  void SelectBinder(OCNaroWrappers::OCStandard_Type^ atype, System::Boolean keep) ;

//! Selects Items on the Type of Result. Considers only Unique <br>
//!           Results. Considers Dynamic Type for Transient Result, <br>
//!           Static Type (the one given to define the Binder) else. <br>
//! <br>
//!           Results which are of a given Type (if keep is True) or reject <br>
//!           only them (if keep is False) <br>
 /*instead*/  void SelectResult(OCNaroWrappers::OCStandard_Type^ atype, System::Boolean keep) ;

//! Select Items according Unicity : keep only Unique Results (if <br>
//!           keep is True) or keep only Multiple Results (if keep is False) <br>
 /*instead*/  void SelectUnique(System::Boolean keep) ;

//! Selects/Unselect (according to <keep> an item designated by <br>
//!           its rank <num> in the list <br>
//!           Used by sub-classes which have specific criteria <br>
 /*instead*/  void SelectItem(Standard_Integer num, System::Boolean keep) ;

//! Returns count of Binders to be iterated <br>
 /*instead*/  Standard_Integer Number() ;

//! Clears Iteration in progress, to allow it to be restarted <br>
 /*instead*/  void Start() ;

//! Returns True if there are other Items to iterate <br>
 /*instead*/  System::Boolean More() ;

//! Sets Iteration to the next Item <br>
 /*instead*/  void Next() ;

//! Returns the current Binder <br>
 /*instead*/  OCTransfer_Binder^ Value() ;

//! Returns True if current Item brings a Result, Transient <br>
//!           (Handle) or not or Multiple. That is to say, if it corresponds <br>
//!           to a normally acheived Transfer, Transient Result is read by <br>
//!           specific TransientResult below. <br>
//!           Other kind of Result must be read specifically from its Binder <br>
 /*instead*/  System::Boolean HasResult() ;

//! Returns True if Current Item has a Unique Result <br>
 /*instead*/  System::Boolean HasUniqueResult() ;

//! Returns the Type of the Result of the current Item, if Unique. <br>
//!           If No Unique Result (Error Transfert or Multiple Result), <br>
//!           returns a Null Handle <br>
//!           The Type is : the Dynamic Type for a Transient Result, <br>
//!           the Type defined by the Binder Class else <br>
 /*instead*/  OCStandard_Type^ ResultType() ;

//! Returns True if the current Item has a Transient Unique <br>
//!           Result (if yes, use TransientResult to get it) <br>
 /*instead*/  System::Boolean HasTransientResult() ;

//! Returns the Transient Result of the current Item if there is <br>
//!           (else, returns a null Handle) <br>
//!           Supposes that Binding is done by a SimpleBinderOfTransient <br>
 /*instead*/  OCStandard_Transient^ TransientResult() ;

//! Returns Execution Status of current Binder <br>
//!           Normal transfer corresponds to StatusDone <br>
 /*instead*/  OCTransfer_StatusExec Status() ;

//! Returns True if Fail Messages are recorded with the current <br>
//!           Binder. They can then be read through Check (see below) <br>
 /*instead*/  System::Boolean HasFails() ;

//! Returns True if Warning Messages are recorded with the current <br>
//!           Binder. They can then be read through Check (see below) <br>
 /*instead*/  System::Boolean HasWarnings() ;

//! Returns Check associated to current Binder <br>
//!           (in case of error, it brings Fail messages) <br>
//!           (in case of warnings, it brings Warning messages) <br>
 /*instead*/  OCInterface_Check^ Check() ;

~OCTransfer_TransferIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
