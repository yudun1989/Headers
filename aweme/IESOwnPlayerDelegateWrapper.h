//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoEngineDelegate-Protocol.h"

@class NSString;
@protocol IESOwnPlayerDelegateWrapperDelegate;

@interface IESOwnPlayerDelegateWrapper : NSObject <TTVideoEngineDelegate>
{
    _Bool _playWithURLs;
    id <IESOwnPlayerDelegateWrapperDelegate> _delegate;
    long long _currTryIndex;
}

+ (id)signatureForSelector:(SEL)arg1 inProtocol:(id)arg2;
+ (struct objc_method_description)descriptionForSelecctor:(SEL)arg1 inProtocol:(id)arg2;
+ (id)wrapperWithDelegate:(id)arg1 playWithURLs:(_Bool)arg2;
@property(nonatomic) long long currTryIndex; // @synthesize currTryIndex=_currTryIndex;
@property(nonatomic) _Bool playWithURLs; // @synthesize playWithURLs=_playWithURLs;
@property(nonatomic) __weak id <IESOwnPlayerDelegateWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoEngineDidFinish:(id)arg1 videoStatusException:(long long)arg2;
- (void)videoEngineDidFinish:(id)arg1 error:(id)arg2;
- (void)videoEngineUserStopped:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

