// File generated by CPPExt (Transient)
//
#ifndef _Dico_DictionaryOfTransient_OCWrappers_HeaderFile
#define _Dico_DictionaryOfTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <Dico_DictionaryOfTransient.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCDico_IteratorOfDictionaryOfTransient;
ref class OCDico_StackItemOfDictionaryOfTransient;
ref class OCTCollection_AsciiString;



public ref class OCDico_DictionaryOfTransient : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCDico_DictionaryOfTransient(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCDico_DictionaryOfTransient(Handle(Dico_DictionaryOfTransient)* nativeHandle);

// Methods PUBLIC


OCDico_DictionaryOfTransient();


 /*instead*/  System::Boolean HasItem(System::String^ name, System::Boolean exact) ;


 /*instead*/  System::Boolean HasItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean exact) ;


 /*instead*/  OCStandard_Transient^ Item(System::String^ name, System::Boolean exact) ;


 /*instead*/  OCStandard_Transient^ Item(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean exact) ;


 /*instead*/  System::Boolean GetItem(System::String^ name, OCNaroWrappers::OCStandard_Transient^ anitem, System::Boolean exact) ;


 /*instead*/  System::Boolean GetItem(OCNaroWrappers::OCTCollection_AsciiString^ name, OCNaroWrappers::OCStandard_Transient^ anitem, System::Boolean exact) ;


 /*instead*/  void SetItem(System::String^ name, OCNaroWrappers::OCStandard_Transient^ anitem, System::Boolean exact) ;


 /*instead*/  void SetItem(OCNaroWrappers::OCTCollection_AsciiString^ name, OCNaroWrappers::OCStandard_Transient^ anitem, System::Boolean exact) ;


 /*instead*/  OCStandard_Transient^ NewItem(System::String^ name, System::Boolean& isvalued, System::Boolean exact) ;


 /*instead*/  OCStandard_Transient^ NewItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean& isvalued, System::Boolean exact) ;


 /*instead*/  System::Boolean RemoveItem(System::String^ name, System::Boolean cln, System::Boolean exact) ;


 /*instead*/  System::Boolean RemoveItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean cln, System::Boolean exact) ;


 /*instead*/  void Clean() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Clear() ;


 /*instead*/  OCDico_DictionaryOfTransient^ Copy() ;


 /*instead*/  System::Boolean Complete(OCNaroWrappers::OCDico_DictionaryOfTransient^ acell) ;

~OCDico_DictionaryOfTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
