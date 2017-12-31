/*
 
This file is part of Shocktroop.

Shocktroop is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Shocktroop is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Shocktroop.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <node.h>
#include <iostream>
using namespace std;

namespace Shocktroop {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;
using v8::Number;

void main(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  cout << "Hello world!" << endl;
  Local<Number> returnValue = Number::New(isolate,0);
  args.GetReturnValue().Set(returnValue);
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "run", main);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init)

}
