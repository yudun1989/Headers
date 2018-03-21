//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, SPGroupPayeeShareViewModel, SPSubmitButton, SPTextView, UIImageView, UILabel;

@interface SPGroupPayeeShareView : UIView <UITextViewDelegate>
{
    _Bool _isTop;
    SPGroupPayeeShareViewModel *_viewModel;
    UIView *_shareContentView;
    UILabel *_titleLabel;
    UIImageView *_bizImgView;
    UILabel *_contentLabel;
    UILabel *_contentTitleLabel;
    SPTextView *_msgTextView;
    UIView *_sepratorLine;
    UIView *_vSepratorLine;
    SPSubmitButton *_cancelBtn;
    SPSubmitButton *_submitBtn;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _submitBlock;
    double _keyboardHeight;
}

+ (id)showInViewController:(id)arg1 viewModel:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 submitBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) SPSubmitButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) SPSubmitButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *vSepratorLine; // @synthesize vSepratorLine=_vSepratorLine;
@property(retain, nonatomic) UIView *sepratorLine; // @synthesize sepratorLine=_sepratorLine;
@property(retain, nonatomic) SPTextView *msgTextView; // @synthesize msgTextView=_msgTextView;
@property(retain, nonatomic) UILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *bizImgView; // @synthesize bizImgView=_bizImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *shareContentView; // @synthesize shareContentView=_shareContentView;
@property(retain, nonatomic) SPGroupPayeeShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)checkRealTextLength;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)submitShare;
- (void)cancelShare;
- (void)hide;
- (id)buildLabel:(id)arg1 font:(id)arg2;
- (double)buildSubmit;
- (double)buildMemoTextView;
- (double)buildViewContent;
- (double)buildViewTitle;
- (void)buildShareView;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

