//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateBaseCell.h"

#import "TBRateImageUploadProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, TBRateEditRateInfoComponent, TBRateEditRateWarnTipView, TBRateImageUploadView, TBRateSelectRateView, UIImageView, UITextView, UIView;

@interface TBRateEditRateCell : TBRateBaseCell <UITextFieldDelegate, UITextViewDelegate, TBRateImageUploadProtocol>
{
    TBRateEditRateInfoComponent *_editRateInfoComponent;
    UIImageView *_itemPictureView;
    UITextView *_feedBackTextView;
    UIView *_splitLineView;
    TBRateImageUploadView *_picturesView;
    TBRateSelectRateView *_selectRateView;
    TBRateEditRateWarnTipView *_warnTipView;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) TBRateEditRateWarnTipView *warnTipView; // @synthesize warnTipView=_warnTipView;
@property(retain, nonatomic) TBRateSelectRateView *selectRateView; // @synthesize selectRateView=_selectRateView;
@property(retain, nonatomic) TBRateImageUploadView *picturesView; // @synthesize picturesView=_picturesView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UITextView *feedBackTextView; // @synthesize feedBackTextView=_feedBackTextView;
@property(retain, nonatomic) UIImageView *itemPictureView; // @synthesize itemPictureView=_itemPictureView;
@property(retain, nonatomic) TBRateEditRateInfoComponent *editRateInfoComponent; // @synthesize editRateInfoComponent=_editRateInfoComponent;
- (void).cxx_destruct;
- (void)removeAllSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)refreshPhotoArray:(id)arg1;
- (void)browsePics:(long long)arg1 tagIndex:(long long)arg2;
- (void)addPhoto:(long long)arg1;
- (void)setComponent:(id)arg1;
- (void)showEditGuidView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

