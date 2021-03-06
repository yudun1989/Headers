//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBStoryPlayRedPackageStoreDelegate-Protocol.h"
#import "WBStoryRedPackageViewDelegate-Protocol.h"

@class NSString, WBStoryPlayRedPackageActionCreator, WBStoryPlayRedPackageStore, WBStoryPlayRedPackageView, WBStoryRedPackageView;
@protocol WBStoryRedPackageVCDelegate;

@interface WBStoryRedPackageVC : WBViewController <UIViewControllerTransitioningDelegate, WBStoryPlayRedPackageStoreDelegate, WBStoryRedPackageViewDelegate>
{
    _Bool _presented;
    id <WBStoryRedPackageVCDelegate> _delegate;
    WBStoryPlayRedPackageStore *_store;
    WBStoryPlayRedPackageView *_playRedPackageView;
    WBStoryPlayRedPackageActionCreator *_actionCreator;
    WBStoryRedPackageView *_redPackageView;
}

@property(retain, nonatomic) WBStoryRedPackageView *redPackageView; // @synthesize redPackageView=_redPackageView;
@property(retain, nonatomic) WBStoryPlayRedPackageActionCreator *actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) WBStoryPlayRedPackageView *playRedPackageView; // @synthesize playRedPackageView=_playRedPackageView;
@property(retain, nonatomic) WBStoryPlayRedPackageStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <WBStoryRedPackageVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissSelfWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storyRedPackageDetailBtnPressed:(id)arg1;
- (void)storyRedPackageDidClose:(id)arg1;
- (void)storyHandleRedPackageBtnPressed:(id)arg1;
- (void)fullScreenStore:(id)arg1 didUnpack:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 segment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

