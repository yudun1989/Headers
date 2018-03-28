//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface TTFMessageInputView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _endEditing;
    UITextField *_textField;
    UIButton *_sendButton;
    UIButton *_touchControl;
}

@property(retain, nonatomic) UIButton *touchControl; // @synthesize touchControl=_touchControl;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType endEditing; // @synthesize endEditing=_endEditing;
- (void).cxx_destruct;
- (void)textDidChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)sendMessageButtonTouched:(_Bool)arg1;
- (void)didClickButton:(id)arg1;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

