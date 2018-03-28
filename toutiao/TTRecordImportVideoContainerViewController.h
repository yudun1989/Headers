//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTClipVideoViewControllerDelegate-Protocol.h"
#import "TTImportVideoViewControllerDelegate-Protocol.h"
#import "TTRecordVideoChallengeRuleViewDelegate-Protocol.h"
#import "TTRecordVideoViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, SSThemedView, TTAlphaThemedButton, TTExportFullscreenLoadingView, TTImportVideoViewController, TTRecordVideoChallengeRuleView, TTRecordVideoViewController, UIView;

@interface TTRecordImportVideoContainerViewController : SSViewControllerBase <TTImportVideoViewControllerDelegate, TTRecordVideoViewControllerDelegate, TTClipVideoViewControllerDelegate, TTRecordVideoChallengeRuleViewDelegate>
{
    _Bool _hiddenAlbum;
    _Bool _tabbarHidden;
    _Bool _popToRoot;
    unsigned long long _recordViewStyle;
    unsigned long long _postUGCEnterFrom;
    unsigned long long _currentTab;
    NSString *_presetForumName;
    NSString *_presetForumSchema;
    NSString *_cid;
    long long _templateID;
    NSString *_themeID;
    long long _requestRedPacketType;
    CDUnknownBlockType _videoCompletionBlock;
    TTRecordVideoViewController *_recordVideoViewController;
    TTImportVideoViewController *_importVideoViewController;
    UIView *_tabButtonContainer;
    TTAlphaThemedButton *_importVideoButton;
    TTAlphaThemedButton *_recordVideoButton;
    SSThemedView *_indicatorView;
    TTExportFullscreenLoadingView *_loadingView;
    NSDictionary *_extraTrack;
    NSString *_challengeRule;
    NSString *_challengeGroupID;
    NSString *_challengeSchemaUrl;
    NSString *_musicID;
    TTRecordVideoChallengeRuleView *_challengeRuleView;
    UIView *_presentingVCView;
}

+ (id)categoryNameForTabName:(id)arg1;
+ (unsigned long long)recordViewStyleForStyle:(id)arg1;
+ (void)presentRecordImportVideoContainerWithStyle:(unsigned long long)arg1 postUGCEnterFrom:(unsigned long long)arg2 extraTrack:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)presentRecordImportVideoContainerWithStyle:(unsigned long long)arg1 presetForumName:(id)arg2 presetForumSchema:(id)arg3 concernID:(id)arg4 postUGCEnterFrom:(unsigned long long)arg5 extraTrack:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (void)load;
@property(retain, nonatomic) UIView *presentingVCView; // @synthesize presentingVCView=_presentingVCView;
@property(retain, nonatomic) TTRecordVideoChallengeRuleView *challengeRuleView; // @synthesize challengeRuleView=_challengeRuleView;
@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(copy, nonatomic) NSString *challengeSchemaUrl; // @synthesize challengeSchemaUrl=_challengeSchemaUrl;
@property(copy, nonatomic) NSString *challengeGroupID; // @synthesize challengeGroupID=_challengeGroupID;
@property(copy, nonatomic) NSString *challengeRule; // @synthesize challengeRule=_challengeRule;
@property(nonatomic) _Bool popToRoot; // @synthesize popToRoot=_popToRoot;
@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(nonatomic) _Bool tabbarHidden; // @synthesize tabbarHidden=_tabbarHidden;
@property(retain, nonatomic) TTExportFullscreenLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SSThemedView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) TTAlphaThemedButton *recordVideoButton; // @synthesize recordVideoButton=_recordVideoButton;
@property(retain, nonatomic) TTAlphaThemedButton *importVideoButton; // @synthesize importVideoButton=_importVideoButton;
@property(retain, nonatomic) UIView *tabButtonContainer; // @synthesize tabButtonContainer=_tabButtonContainer;
@property(retain, nonatomic) TTImportVideoViewController *importVideoViewController; // @synthesize importVideoViewController=_importVideoViewController;
@property(retain, nonatomic) TTRecordVideoViewController *recordVideoViewController; // @synthesize recordVideoViewController=_recordVideoViewController;
@property(copy, nonatomic) CDUnknownBlockType videoCompletionBlock; // @synthesize videoCompletionBlock=_videoCompletionBlock;
@property(nonatomic) long long requestRedPacketType; // @synthesize requestRedPacketType=_requestRedPacketType;
@property(copy, nonatomic) NSString *themeID; // @synthesize themeID=_themeID;
@property(nonatomic) long long templateID; // @synthesize templateID=_templateID;
@property(nonatomic) _Bool hiddenAlbum; // @synthesize hiddenAlbum=_hiddenAlbum;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *presetForumSchema; // @synthesize presetForumSchema=_presetForumSchema;
@property(copy, nonatomic) NSString *presetForumName; // @synthesize presetForumName=_presetForumName;
@property(nonatomic) unsigned long long currentTab; // @synthesize currentTab=_currentTab;
@property(nonatomic) unsigned long long postUGCEnterFrom; // @synthesize postUGCEnterFrom=_postUGCEnterFrom;
@property(nonatomic) unsigned long long recordViewStyle; // @synthesize recordViewStyle=_recordViewStyle;
- (void).cxx_destruct;
- (id)presetText;
- (void)trackWithV3Event:(id)arg1 extraDic:(id)arg2;
- (void)challengeRuleViewDidConfirm:(id)arg1;
- (void)challengeRuleViewDidCancel:(id)arg1;
- (void)dismissChallengeRuleView;
- (void)clipVideoViewController:(id)arg1 didFinishClipWithURL:(id)arg2 clipped:(_Bool)arg3 durationBeforeClip:(double)arg4;
- (void)recordVideoViewController:(id)arg1 didSelectThemeID:(id)arg2;
- (void)recordVideoViewController:(id)arg1 needHideTabbar:(_Bool)arg2;
- (void)recordVideoViewController:(id)arg1 didFinishRecordWithOutputURL:(id)arg2 musicID:(id)arg3;
- (void)importVideoViewController:(id)arg1 didSelectVideoWithCover:(id)arg2 sourceAsset:(id)arg3 selectPosition:(unsigned long long)arg4;
- (void)clipOrEditWithSelectPosition:(unsigned long long)arg1 URL:(id)arg2 videoLength:(double)arg3;
- (void)editWithURL:(id)arg1 style:(unsigned long long)arg2;
- (void)clipWithURL:(id)arg1 style:(unsigned long long)arg2;
- (id)rootPresentingViewController;
- (void)dismissSelfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSelfWhenPostVideo;
- (void)removeChildVC:(id)arg1;
- (void)addChildVC:(id)arg1;
- (void)selectTab:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)importTabButtonClicked:(id)arg1;
- (void)recordTabButtonClicked:(id)arg1;
- (void)initializeTab;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleChangeMainControllerNotififation:(id)arg1;
- (void)viewDidLoad;
- (_Bool)needInitializeImportVideoVC;
- (_Bool)needInitializeRecordVideoVC;
- (id)initWithRouteParamObj:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 postUGCEnterFrom:(unsigned long long)arg2 extraTrack:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithStyle:(unsigned long long)arg1 presetForumName:(id)arg2 presetForumSchema:(id)arg3 concernID:(id)arg4 postUGCEnterFrom:(unsigned long long)arg5 extraTrack:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithStyle:(unsigned long long)arg1 presetForumName:(id)arg2 presetForumSchema:(id)arg3 concernID:(id)arg4 postUGCEnterFrom:(unsigned long long)arg5 hiddenAlbum:(_Bool)arg6 templateID:(long long)arg7 requestRedPacketType:(long long)arg8 popToRoot:(_Bool)arg9 challengeRule:(id)arg10 challengeGroupID:(id)arg11 challengeSchemaUrl:(id)arg12 musicID:(id)arg13 presentingVCView:(id)arg14 extraTrack:(id)arg15 completionBlock:(CDUnknownBlockType)arg16;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

