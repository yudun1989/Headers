//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSNSUnifiedPlayerInterfaceDelegate-Protocol.h"

@class NSString, TBSNSUnifiedPlayerModel, UIView;
@protocol TBSNSUnifiedPlayerInterfaceDelegate;

@interface TBSNSUnifiedPlayerInterface : NSObject <TBSNSUnifiedPlayerInterfaceDelegate>
{
    id <TBSNSUnifiedPlayerInterfaceDelegate> _delegate;
    TBSNSUnifiedPlayerModel *_model;
    long long _state;
    UIView *_parentView;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) TBSNSUnifiedPlayerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <TBSNSUnifiedPlayerInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPlayerComplete;
- (void)onPlayerStop;
- (void)onPlayerPause;
- (void)onPlayerStart;
- (void)onClick;
- (void)dealloc;
- (id)getView;
- (_Bool)isFullScreen;
- (void)destroyPlayer;
- (double)getCurrentTime;
- (void)resume;
- (void)pause;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)play;
- (void)showStaticView;
- (id)initWithModel:(id)arg1 parentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

