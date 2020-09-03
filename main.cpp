#include <nan.h>
    NAN_METHOD(IsPrime) {
        if (!info[0]->IsNumber()) {
            Nan::ThrowTypeError("argument must be a number!");
            return;
        }
    
    int number = (int) info[0]->NumberValue();
    if (number < 2) {
        info.GetReturnValue().Set(Nan::False());
        return;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            info.GetReturnValue().Set(Nan::False());
            return;
        }
    }
    info.GetReturnValue().Set(Nan::True());
}

NAN_MODULE_INIT(Initialize) {
    NAN_EXPORT(target, IsPrime);
}

NODE_MODULE(addon, Initialize);
