//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBTextViewDelegate-Protocol.h"

@class MMCoreEngine, NSString, SNHTTPRequestOperationWrapper, UIImageView, UILabel, UIView, WBALAssetPickerContextManager, WBCustomSwitchControl, WBDirectionalGroup, WBDirectionalGroupAffiliatedInfo, WBLabel, WBProgressHUD, WBSpot, WBSpotEngine, WBTextView;

@interface WBGroupCreateNewViewController : WBViewController <WBTextViewDelegate, WBALAssetPickerContextManagerDelegate>
{
    _Bool _isCoverSetting;
    _Bool _public;
    int _actionType;
    WBDirectionalGroupAffiliatedInfo *_affiliatedInfo;
    UIView *_containerView;
    UIImageView *_avatarImageView;
    WBTextView *_nameTextView;
    UILabel *_nameLengthLabel;
    UIView *_separateLine1;
    WBTextView *_introTextView;
    UILabel *_introLengthLabel;
    UIView *_separateLine2;
    WBLabel *_openLabel;
    WBLabel *_detailLabel;
    WBCustomSwitchControl *_openSwitch;
    WBALAssetPickerContextManager *_pickerManager;
    SNHTTPRequestOperationWrapper *_fetchRequestOperationWrapper;
    WBProgressHUD *_progressHUD;
    MMCoreEngine *_coreEngine;
    NSString *_avatarPid;
    WBDirectionalGroup *_group;
    NSString *_imgLocalUrl;
    WBSpotEngine *_spotEngine;
    WBSpot *_currentSpot;
}

@property(retain, nonatomic) WBSpot *currentSpot; // @synthesize currentSpot=_currentSpot;
@property(retain, nonatomic) WBSpotEngine *spotEngine; // @synthesize spotEngine=_spotEngine;
@property(copy, nonatomic) NSString *imgLocalUrl; // @synthesize imgLocalUrl=_imgLocalUrl;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
@property(nonatomic, getter=isPublic) _Bool public; // @synthesize public=_public;
@property(copy, nonatomic) NSString *avatarPid; // @synthesize avatarPid=_avatarPid;
@property(retain, nonatomic) MMCoreEngine *coreEngine; // @synthesize coreEngine=_coreEngine;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper; // @synthesize fetchRequestOperationWrapper=_fetchRequestOperationWrapper;
@property(nonatomic) _Bool isCoverSetting; // @synthesize isCoverSetting=_isCoverSetting;
@property(retain, nonatomic) WBALAssetPickerContextManager *pickerManager; // @synthesize pickerManager=_pickerManager;
@property(retain, nonatomic) WBCustomSwitchControl *openSwitch; // @synthesize openSwitch=_openSwitch;
@property(retain, nonatomic) WBLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) WBLabel *openLabel; // @synthesize openLabel=_openLabel;
@property(retain, nonatomic) UIView *separateLine2; // @synthesize separateLine2=_separateLine2;
@property(retain, nonatomic) UILabel *introLengthLabel; // @synthesize introLengthLabel=_introLengthLabel;
@property(retain, nonatomic) WBTextView *introTextView; // @synthesize introTextView=_introTextView;
@property(retain, nonatomic) UIView *separateLine1; // @synthesize separateLine1=_separateLine1;
@property(retain, nonatomic) UILabel *nameLengthLabel; // @synthesize nameLengthLabel=_nameLengthLabel;
@property(retain, nonatomic) WBTextView *nameTextView; // @synthesize nameTextView=_nameTextView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WBDirectionalGroupAffiliatedInfo *affiliatedInfo; // @synthesize affiliatedInfo=_affiliatedInfo;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)uploadLocalImage:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImage:(id)arg2;
- (void)handleSwitchChanged:(id)arg1;
- (void)startImagePickerWithIsCamera:(_Bool)arg1;
- (void)avatarClicked:(id)arg1;
- (void)createNewGroup;
- (void)submitButtonPressed:(id)arg1;
- (void)presentedVCBackButtonClicked;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textView:(id)arg1 willChangeHeight:(long long)arg2;
- (void)textViewHeightChanged:(id)arg1;
- (void)requestComplete:(id)arg1 error:(id)arg2;
- (void)requestCurrentSpot:(id)arg1;
- (void)locationManagerDidFailToLocateNotification:(id)arg1;
- (void)locationManagerDidFinishLocatingNotification:(id)arg1;
- (void)stopUpdateLocation;
- (void)startUpdateLocation;
- (void)fingerTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configSubviewsFrame;
- (void)stepOpenLabel;
- (void)stepIntroTextField;
- (void)stepNameTextField;
- (void)stepImageView;
- (void)stepContainerView;
- (void)loadView;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

