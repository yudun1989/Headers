//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class DSEditBoxTextFieldDelegate;

@interface DSEditBox : UITextField
{
    DSEditBoxTextFieldDelegate *_editBoxTextFieldDelegate;
}

+ (id)EditBoxWithCGPoint:(struct CGPoint)arg1 width:(double)arg2;
+ (id)EditBoxWithCGPoint:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)initVariables;
- (id)initWithFrame:(struct CGRect)arg1;

@end

