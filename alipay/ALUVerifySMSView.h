//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class ALURegisterTextFeild, NSString, UITextField;
@protocol verifySMSViewDelegate;

@interface ALUVerifySMSView : UIView <UITextFieldDelegate>
{
    ALURegisterTextFeild *_textField;
    NSString *_smsCode;
    UITextField *_smsCodeTextField;
    id <verifySMSViewDelegate> _delegate;
}

@property(nonatomic) __weak id <verifySMSViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *smsCodeTextField; // @synthesize smsCodeTextField=_smsCodeTextField;
@property(retain, nonatomic) NSString *smsCode; // @synthesize smsCode=_smsCode;
@property(retain, nonatomic) ALURegisterTextFeild *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setUpTextFeild;
- (void)cleanCode;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)enableAllTextField;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

