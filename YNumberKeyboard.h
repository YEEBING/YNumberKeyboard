//
//  YNumberKeyboard.h
//  Created by Y on 2016/9/26.
//  Copyright © 2016年 Eden. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YNumberKeyboardDelegate <NSObject>

- (void) numberKeyboardInput:(NSInteger) number textField:(UITextField *)textField;
- (void) numberKeyboardBackspaceWithTextField:(UITextField *)textField;
- (void) doneKeyboardType;
@end

@interface YNumberKeyboard : UIView
@property(nonatomic,strong) UITextField * textField;
@property(nonatomic,strong)UIView *viewHeader;
@property(nonatomic,assign)int startY;
@property(nonatomic,assign) int isMultiple;


- (id)initWithDelegate:(id)delegate;
- (id)initWithDelegate:(id)delegate andTextfield:(UITextField *)textField;
- (id)initWithDelegate:(id)delegate withAddHeight:(int)addHeight;

@end
