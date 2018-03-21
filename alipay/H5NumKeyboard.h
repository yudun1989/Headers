//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, UIWebView;
@protocol H5NumKeyboardDelegate;

@interface H5NumKeyboard : NSObject <UITextFieldDelegate>
{
    NSNumber *_inputIndex;
    long long _textfieldNO;
    float _initPadding;
    id <H5NumKeyboardDelegate> _delegate;
    UIWebView *_curWebview;
    NSMutableArray *_inputParams;
}

@property(retain, nonatomic) NSMutableArray *inputParams; // @synthesize inputParams=_inputParams;
@property(nonatomic) __weak UIWebView *curWebview; // @synthesize curWebview=_curWebview;
@property(nonatomic) float initPadding; // @synthesize initPadding=_initPadding;
@property(nonatomic) __weak id <H5NumKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateValueByText:(id)arg1 withEventType:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textEditingDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldFocusAtIndex:(int)arg1;
- (void)blurNumberInput;
- (void)removeAllNumberField;
- (void)scrollDocumentBody;
- (void)keyboardShowNotification:(id)arg1 toobarHeight:(float)arg2;
- (void)resetLocationWithInputIndex:(long long)arg1;
- (void)inputBackFill:(id)arg1 withInputIndex:(long long)arg2;
- (void)addNumberField;
- (void)createInputWithParam:(id)arg1;
- (void)h5fontSizeChanged;
- (id)initWithWebview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

