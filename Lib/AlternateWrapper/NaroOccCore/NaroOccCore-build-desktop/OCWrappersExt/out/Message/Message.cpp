// File generated by CPPExt (CPP file)
//

#include "Message.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCMessage_Messenger^ OCMessage::DefaultMessenger()
{
  Handle(Message_Messenger) tmp = Message::DefaultMessenger();
  return gcnew OCMessage_Messenger(&tmp);
}

OCTCollection_AsciiString^ OCMessage::FillTime(Standard_Integer Hour, Standard_Integer Minute, Standard_Real Second)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = Message::FillTime(Hour, Minute, Second);
  return gcnew OCTCollection_AsciiString(tmp);
}

