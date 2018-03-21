//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSURLHandler-Protocol.h"
#import "TAGContainerOpenerNotifier-Protocol.h"

@class NSString, NSTimer, TAGContainer, TAGManager;
@protocol OS_dispatch_queue;

@interface KSGTMService : NSObject <TAGContainerOpenerNotifier, KSURLHandler>
{
    _Bool _canPush;
    TAGContainer *_container;
    TAGManager *_tagManager;
    NSTimer *_refreshTimer;
    NSObject<OS_dispatch_queue> *_pushEventQueue;
}

+ (id)sharedKSGTMService;
@property _Bool canPush; // @synthesize canPush=_canPush;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pushEventQueue; // @synthesize pushEventQueue=_pushEventQueue;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
@property(retain, nonatomic) TAGContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)refreshContainer:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (void)containerAvailable:(id)arg1;
- (void)setupWithLaunchOptions:(id)arg1;
- (void)push:(id)arg1 event:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
