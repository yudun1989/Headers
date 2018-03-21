//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTGrowingTextViewDelegate-Protocol.h"

@class APCheckBox, APShareServiceCard, APShareServiceInputField, APShareServiceTopView, CTGrowingTextView, NSString, UIButton, UIImage, UILabel;
@protocol APShareServiceCardCustomViewDelegate;

@interface APShareServiceCardView : UIView <CTGrowingTextViewDelegate>
{
    UIView<APShareServiceCardCustomViewDelegate> *_customView;
    APShareServiceCard *_card;
    APShareServiceInputField *_inputField;
    UILabel *_from;
    UIButton *_cancelBtn;
    UIButton *_sendBtn;
    UIView *_btnXLine;
    UIView *_btnYLine;
    APCheckBox *_checkBox;
    UIImage *_defaultImage;
    APShareServiceTopView *_sendToView;
    UIView *_splitLineView;
}

+ (double)cardViewMinHeight;
+ (double)cardOriginX;
+ (double)cardViewWidth;
+ (double)cardBtnHeight;
+ (double)cardFromHeight;
+ (double)cardCheckBoxHeight;
+ (double)cardInputHeight;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) APShareServiceTopView *sendToView; // @synthesize sendToView=_sendToView;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) APCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UIView *btnYLine; // @synthesize btnYLine=_btnYLine;
@property(retain, nonatomic) UIView *btnXLine; // @synthesize btnXLine=_btnXLine;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *from; // @synthesize from=_from;
@property(retain, nonatomic) APShareServiceInputField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) APShareServiceCard *card; // @synthesize card=_card;
@property(retain, nonatomic) UIView<APShareServiceCardCustomViewDelegate> *customView; // @synthesize customView=_customView;
- (void).cxx_destruct;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (double)cardCommonTopHeight;
- (double)cardCommonBottomHeight;
- (double)refreshCard:(id)arg1;
- (void)layoutSubviews;
- (void)reloadImageView;
- (void)addCancelTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addSendTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@property(readonly, nonatomic) CTGrowingTextView *textField;
- (_Bool)isChecked;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

