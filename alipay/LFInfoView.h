//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LFCoverViewDelegate-Protocol.h"

@class LFCoverView, LFExtendView, LFGridView, LFMenuView, LFMsgRemindView, LifeHomeResult, NSString;
@protocol LFInfoViewDelegate;

@interface LFInfoView : UIView <LFCoverViewDelegate>
{
    LFCoverView *_coverView;
    LFMenuView *_menuView;
    LFGridView *_gridView;
    LFMsgRemindView *_remindView;
    LFExtendView *_extendView;
    double _menuViewOriginY;
    id <LFInfoViewDelegate> _delegate;
    id _controller;
    NSString *_sourceId;
    NSString *_extArgs;
    LifeHomeResult *_homeInfo;
}

@property(retain, nonatomic) LifeHomeResult *homeInfo; // @synthesize homeInfo=_homeInfo;
@property(retain, nonatomic) NSString *extArgs; // @synthesize extArgs=_extArgs;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) __weak id controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <LFInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double menuViewOriginY; // @synthesize menuViewOriginY=_menuViewOriginY;
@property(retain, nonatomic) LFExtendView *extendView; // @synthesize extendView=_extendView;
@property(retain, nonatomic) LFMsgRemindView *remindView; // @synthesize remindView=_remindView;
@property(retain, nonatomic) LFGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) LFMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) LFCoverView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)handleCCMessageNotify:(id)arg1;
- (void)onRemoveFollow:(id)arg1;
- (void)headClicked;
- (void)startLoading;
- (void)followStatusChanged:(_Bool)arg1 isFollowed:(_Bool)arg2 coverView:(id)arg3;
- (void)changeFollowed:(_Bool)arg1;
- (void)changeLiked:(_Bool)arg1;
- (id)menuViewToHandleWithInfoViewContentOffsetY:(double)arg1;
- (void)resetExtendView:(id)arg1;
- (void)resetInfoViewOriginY;
- (void)refreshInfoView:(id)arg1;
- (double)getHeight:(double)arg1;
- (void)addTopView:(struct CGPoint)arg1;
- (id)initWithInfo:(id)arg1 origin:(struct CGPoint)arg2 controller:(id)arg3;
- (void)dealloc;
- (id)addMsgRemindView:(id)arg1 originY:(double)arg2;
- (id)addGridView:(id)arg1 originY:(double)arg2;
- (id)addExtendAreaView:(id)arg1 originY:(double)arg2;
- (id)addMenuView:(id)arg1 originY:(double)arg2;
- (id)addCoverView:(id)arg1 originY:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

