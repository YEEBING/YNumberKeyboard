
设置UITextField的inputView为自己的键盘 并设置代理 通过代理回调填充或操作其他
YNumberKeyboard *keyboard = [[YNumberKeyboard alloc] initWithDelegate:self andTextfield:textField];
textField.inputView = keyboard;



代理看自己需要用不用
@protocol YNumberKeyboardDelegate <NSObject>

- (void) numberKeyboardInput:(NSInteger) number textField:(UITextField *)textField;
- (void) numberKeyboardBackspaceWithTextField:(UITextField *)textField;
- (void) doneKeyboardType;
@end

