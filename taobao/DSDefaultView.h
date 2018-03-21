//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSViewGroup.h"

@class DSButton, DSEditBox, DSLabel, NSString, UIButton, UIView;

@interface DSDefaultView : DSViewGroup
{
    DSLabel *_goldLabel;
    DSLabel *_defaultLabel;
    UIView *_contentView;
    DSLabel *_otherLabel;
    DSLabel *_errorLabel;
    DSButton *_defaultButton;
    DSLabel *_tipsLabel;
    UIButton *_delBt;
    NSString *_tempEditText;
    DSEditBox *_defaultEditBox;
}

@property(retain, nonatomic) DSEditBox *defaultEditBox; // @synthesize defaultEditBox=_defaultEditBox;
@property(retain, nonatomic) NSString *tempEditText; // @synthesize tempEditText=_tempEditText;
@property(retain, nonatomic) UIButton *delBt; // @synthesize delBt=_delBt;
@property(retain, nonatomic) DSLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) DSButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(retain, nonatomic) DSLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) DSLabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DSLabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) DSLabel *goldLabel; // @synthesize goldLabel=_goldLabel;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)doDSPay;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)isPureFloat:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)labelTouchUpInside:(id)arg1;
- (void)initData;
- (_Bool)canBecomeFirstResponder;
- (void)initDefaultView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

