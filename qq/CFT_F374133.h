//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <QQMainProject/TenpayNumKeyboardDelegate-Protocol.h>
#import <QQMainProject/TenpayPassWordKeyboardDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class CFT_F357991, CFT_F364673, NSString;
@protocol TenpaySecureCtrlDelegate;

@interface CFT_F374133 : UITextField <TenpayPassWordKeyboardDelegate, TenpayNumKeyboardDelegate, UITextFieldDelegate>
{
    _Bool _is6Psw;
    unsigned long long _6PswMaxInputLen;
    CFT_F364673 *_6pswView;
    CFT_F357991 *_tpKeyboard;
    _Bool _showSecureTip;
    int _indexRsaKey;
    id <TenpaySecureCtrlDelegate> ctrlDelegate;
    id _exTarget;
    SEL _exSel;
}

@property(nonatomic) int indexRsaKey; // @synthesize indexRsaKey=_indexRsaKey;
@property(nonatomic) SEL exSel; // @synthesize exSel=_exSel;
@property(nonatomic) id exTarget; // @synthesize exTarget=_exTarget;
@property(nonatomic) _Bool showSecureTip; // @synthesize showSecureTip=_showSecureTip;
@property(nonatomic) id <TenpaySecureCtrlDelegate> ctrlDelegate; // @synthesize ctrlDelegate;
- (id)CFT_F460930:(_Bool)arg1 andFill:(_Bool)arg2;
- (id)GetRsaEncodeWithText:(id)arg1;
- (id)CFT_F559559;
- (id)CFT_F456523:(_Bool)arg1;
- (_Bool)compareWithOtherSecCtrl:(id)arg1;
- (int)GetInputLen;
- (void)ClearInput;
- (void)SelectRsaKey:(int)arg1;
- (void)SetScene:(id)arg1;
- (void)SetSalt:(id)arg1;
- (long long)GetInputInfo;
- (id)GetVersion;
- (void)SetEncryptSrcText:(id)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (void)SetInputText:(id)arg1;
- (struct CFT_F385222 *)getSafeKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textChanged:(int)arg1;
- (void)viewtoucheEnd:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)onChange;
- (void)onReturn;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setKeyboardPressedBackgroundColors:(id)arg1;
- (void)setKeyboardPressedTextColors:(id)arg1;
- (void)hiddenInputStyle;
- (void)setShowDot;
- (void)setNoBorder:(_Bool)arg1;
- (void)clickActionBtn;
- (void)setActionBtnText:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setSecureTipsView:(id)arg1;
- (void)setKeyboardBgImage:(id)arg1 delImage:(id)arg2;
- (id)customOverlayContainer;
- (id)getKeybordView;
- (id)initWithFrame:(struct CGRect)arg1 is6Psw:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

