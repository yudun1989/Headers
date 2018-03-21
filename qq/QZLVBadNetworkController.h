//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZLVBadNetworkStrategyDelegate-Protocol.h>

@class NSString, QZLVBadNetworkStrategy;
@protocol QZLVBadNetworkControllerDelegate;

@interface QZLVBadNetworkController : NSObject <QZLVBadNetworkStrategyDelegate>
{
    QZLVBadNetworkStrategy *_currentStrategy;
    long long _strategyStep;
    _Bool _stop;
    id <QZLVBadNetworkControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <QZLVBadNetworkControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)strategy:(id)arg1 fullfillLive:(_Bool)arg2;
- (void)stop;
- (void)start;
- (void)nextStrategy;
- (void)udtLossRate:(double)arg1 netDelay:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

