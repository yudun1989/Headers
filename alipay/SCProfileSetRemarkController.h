//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableViewBaseController.h"

#import "CTGrowingTextViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APContactInfo, APInputBox, CTGrowingTextView, NSArray, NSMutableArray, NSString, SPBorderContainer, SPRemarkSettingDataManager, SPSocialTagDisplayView, UIButton, UILabel, UIScrollView, UITextField, UIView;
@protocol SCProfileSetRemarkControllerDelegate;

@interface SCProfileSetRemarkController : SCTableViewBaseController <UITextFieldDelegate, CTGrowingTextViewDelegate>
{
    APInputBox *_inputBox;
    SPSocialTagDisplayView *_socialTagDisplayView;
    _Bool _isRPCReusltSuc;
    _Bool _hasUnfoldDel;
    _Bool _activeSave;
    NSString *_newName;
    NSString *_recommendName;
    UIView *_recommendView;
    NSArray *_recomandPhones;
    UIView *_recommandPhoneView;
    NSString *_defaultTextfieldText;
    UILabel *_indicatorLabel;
    NSMutableArray *_tels;
    SPBorderContainer *_memoContainer;
    APInputBox *_addTelInputBox;
    APInputBox *_animationInputBox;
    UITextField *_activeField;
    UIButton *_delBtn;
    _Bool _keyboardVisible;
    int _number;
    APContactInfo *_contactInfo;
    NSString *_nickNameInGroup;
    id <SCProfileSetRemarkControllerDelegate> _delegate;
    CDUnknownBlockType _resultCallback;
    CTGrowingTextView *_memoTextView;
    NSMutableArray *_dataSources;
    UIScrollView *_formView;
    double _originFormHeight;
    double _adjustOrigin;
    SPRemarkSettingDataManager *_remarkSetter;
    struct CGRect _keyboardRect;
    struct UIEdgeInsets _originInset;
}

@property(retain, nonatomic) SPRemarkSettingDataManager *remarkSetter; // @synthesize remarkSetter=_remarkSetter;
@property(nonatomic) double adjustOrigin; // @synthesize adjustOrigin=_adjustOrigin;
@property(nonatomic) struct UIEdgeInsets originInset; // @synthesize originInset=_originInset;
@property(nonatomic) int number; // @synthesize number=_number;
@property(nonatomic) double originFormHeight; // @synthesize originFormHeight=_originFormHeight;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(retain, nonatomic) UIScrollView *formView; // @synthesize formView=_formView;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) CTGrowingTextView *memoTextView; // @synthesize memoTextView=_memoTextView;
@property(retain, nonatomic) SPSocialTagDisplayView *socialTagDisplayView; // @synthesize socialTagDisplayView=_socialTagDisplayView;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) __weak id <SCProfileSetRemarkControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *nickNameInGroup; // @synthesize nickNameInGroup=_nickNameInGroup;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)firstResponsor;
- (id)KeyboardAvoidingFindFirstResponder:(id)arg1;
- (void)adjustMemoTextViewPosition;
- (void)adjustInputTextViewHeight;
- (int)findinsertPos;
- (void)assignFirstResponsor;
- (void)layoutOtherContents;
- (void)reloadForms;
- (void)makeOtherMemoContent:(double)arg1;
- (id)tels;
- (id)imageNamed:(id)arg1;
- (void)makeMemoView:(double)arg1 memo:(id)arg2;
- (void)tapDel:(id)arg1;
- (_Bool)validInput:(id)arg1;
- (void)autoHideContactMobileTip;
- (void)textInputChanged:(id)arg1;
- (id)makeDelTelView:(id)arg1;
- (void)delTel:(id)arg1;
- (id)delBtn;
- (void)startAddNew;
- (void)resignFirstResponsor;
- (id)makeAddTelView:(double)arg1;
- (void)requestSocialTagsForUser:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)activeSave;
- (void)setContactPhones;
- (void)onUseRecommendName:(id)arg1;
- (void)onRightBarBtnClick:(id)arg1;
- (void)doBack;
- (void)back;
- (void)handleSetRemarkSucWith:(id)arg1 remardInfo:(id)arg2 remarkPhones:(id)arg3;
- (void)setRemarkName:(id)arg1;
- (id)commitTel:(id)arg1;
- (id)memoPhones;
- (id)buildBubbleView:(id)arg1 setAction:(SEL)arg2 locY:(double)arg3;
- (void)createSubviews;
- (void)putDelBtnBelow;
- (_Bool)runDelAnimation;
- (void)addKeyboardNotification;
- (void)tapForm:(id)arg1;
- (void)commonInit;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)makeTitle;
- (void)setRightBtnTitle:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

