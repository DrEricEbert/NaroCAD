// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Directory_OCWrappers_HeaderFile
#define _TDataStd_Directory_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Directory.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCStandard_GUID;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;
ref class OCTDF_DataSet;


//! Associates a directory in the data framework with <br>
//! a TDataStd_TagSource attribute. <br>
//! You can create a new directory label and add <br>
//! sub-directory or object labels to it, <br>
public ref class OCTDataStd_Directory : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Directory(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Directory(Handle(TDataStd_Directory)* nativeHandle);

// Methods PUBLIC

//! class methods <br>
//!          ============= <br>//! Searches for a directory attribute on the label <br>
//! current, or on one of the father labels of current. <br>
//! If a directory attribute is found, true is returned, <br>
//! and the attribute found is set as D. <br>
static /*instead*/  System::Boolean Find(OCNaroWrappers::OCTDF_Label^ current, OCNaroWrappers::OCTDataStd_Directory^ D) ;

//!  Creates  an  enpty   Directory attribute,  located  at <br>
//!          <label>. Raises if <label> has attribute <br>
static /*instead*/  OCTDataStd_Directory^ New(OCNaroWrappers::OCTDF_Label^ label) ;

//!  Creates a new sub-label and sets the <br>
//! sub-directory dir on that label. <br>
static /*instead*/  OCTDataStd_Directory^ AddDirectory(OCNaroWrappers::OCTDataStd_Directory^ dir) ;

//!  Makes new label and returns it to insert <br>
//!           other object attributes (sketch,part...etc...) <br>
static /*instead*/  OCTDF_Label^ MakeObjectLabel(OCNaroWrappers::OCTDataStd_Directory^ dir) ;

//! Directory methods <br>
//!          =============== <br>
static /*instead*/  OCStandard_GUID^ GetID() ;


OCTDataStd_Directory();


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ with) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  void References(OCNaroWrappers::OCTDF_DataSet^ DS) override;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDataStd_Directory()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
