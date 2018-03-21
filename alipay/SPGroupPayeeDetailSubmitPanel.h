//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class APButton, APCheckBox, APInputBox, NSString, SPFundChannelManager, SPGTSubmitButton, SPGroupPayeeDetailViewModel, UIButton, UILabel;
@protocol SPGroupPayeeDetailSubmitPanelDelegate;

@interface SPGroupPayeeDetailSubmitPanel : UIView <UITextFieldDelegate>
{
    _Bool _isTop;
    APCheckBox *_addFriendcheckBox;
    APButton *_submitBtn;
    SPGTSubmitButton *_payButton;
    APInputBox *_payAmountBox;
    UIButton *_fundChannelbtn;
    UIButton *_transferChannelBtn;
    long long _panelType;
    SPGroupPayeeDetailViewModel *_detailVM;
    SPFundChannelManager *_fundChannelManager;
    id <SPGroupPayeeDetailSubmitPanelDelegate> _delegate;
    APButton *_scanShareBtn;
    UILabel *_indicatorLabel;
    UIButton *_fundChannelBtn;
    UIButton *_changeFundChannelBtn;
    UIView *_btmLine;
    UIView *_topLine;
    double _keyboardHeight;
    UILabel *_warningTipLabel;
}

+ (double)panelHeightWithScan;
+ (double)panelHeight;
+ (id)submitAndSharePanelWithLocY:(double)arg1 detailVm:(id)arg2 fundChannelManager:(id)arg3;
+ (double)panelHeightPlusTip;
+ (id)submitPanelWithLocY:(double)arg1 detailVm:(id)arg2 fundChannelManager:(id)arg3;
@property(retain, nonatomic) UILabel *warningTipLabel; // @synthesize warningTipLabel=_warningTipLabel;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *btmLine; // @synthesize btmLine=_btmLine;
@property(retain, nonatomic) UIButton *changeFundChannelBtn; // @synthesize changeFundChannelBtn=_changeFundChannelBtn;
@property(retain, nonatomic) UIButton *fundChannelBtn; // @synthesize fundChannelBtn=_fundChannelBtn;
@property(retain, nonatomic) UILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(retain, nonatomic) APButton *scanShareBtn; // @synthesize scanShareBtn=_scanShareBtn;
@property(nonatomic) __weak id <SPGroupPayeeDetailSubmitPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SPFundChannelManager *fundChannelManager; // @synthesize fundChannelManager=_fundChannelManager;
@property(retain, nonatomic) SPGroupPayeeDetailViewModel *detailVM; // @synthesize detailVM=_detailVM;
@property(nonatomic) long long panelType; // @synthesize panelType=_panelType;
@property(readonly, nonatomic) UIButton *transferChannelBtn; // @synthesize transferChannelBtn=_transferChannelBtn;
@property(readonly, nonatomic) UIButton *fundChannelbtn; // @synthesize fundChannelbtn=_fundChannelbtn;
@property(retain, nonatomic) APInputBox *payAmountBox; // @synthesize payAmountBox=_payAmountBox;
@property(retain, nonatomic) SPGTSubmitButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) APButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) APCheckBox *addFriendcheckBox; // @synthesize addFriendcheckBox=_addFriendcheckBox;
- (void).cxx_destruct;
- (void)updateSubmitState;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldInputChanged:(id)arg1;
- (void)enablePaySubmit:(_Bool)arg1;
- (void)resignResponsor;
- (void)changeFundChannel;
- (void)scanShare;
- (void)doSubmit;
- (struct CGSize)fundActionTitleSize:(id)arg1;
- (void)fundChannelWithActionTitle:(id)arg1;
- (void)showTopLine;
- (void)showBtmLine;
- (_Bool)getAddFriendCheckBoxSelectedState;
- (void)updateAddFriendCheckBoxShowOrHideWithDefaultState:(_Bool)arg1;
- (void)updateFundChannel;
- (void)reloadFundManager:(id)arg1;
- (id)getChangeFundChannelBtn;
- (id)getFundChannelBtn;
- (void)buildGeneralPayerPanel;
- (void)buildPayInputPanel;
- (void)buildScanShareBtn;
- (void)buildFindPayerPanel;
- (void)relayout;
- (void)buildSubmitPanel;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

