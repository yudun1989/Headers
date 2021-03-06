//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedTextField, TTCertificationEditModel;

@interface TTCertificationEditItemView : SSThemedView <UITextFieldDelegate>
{
    TTCertificationEditModel *_editModel;
    SSThemedLabel *_titleLabel;
    SSThemedTextField *_textField;
    SSThemedImageView *_arrowView;
    SSThemedButton *_errorTipView;
    CDUnknownBlockType _updateHeightBlock;
    CDUnknownBlockType _textChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType textChangeBlock; // @synthesize textChangeBlock=_textChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType updateHeightBlock; // @synthesize updateHeightBlock=_updateHeightBlock;
@property(retain, nonatomic) SSThemedButton *errorTipView; // @synthesize errorTipView=_errorTipView;
@property(retain, nonatomic) SSThemedImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) SSThemedTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTCertificationEditModel *editModel; // @synthesize editModel=_editModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)tapClick;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

