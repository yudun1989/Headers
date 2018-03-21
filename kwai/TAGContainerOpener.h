//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TAGContainer, TAGManager;
@protocol TAGContainerOpenerNotifier;

@interface TAGContainerOpener : NSObject
{
    _Bool _haveNotified;
    TAGManager *_tagManager;
    NSString *_containerId;
    double _timeout;
    id <TAGContainerOpenerNotifier> _notifier;
    TAGContainer *_container;
}

+ (void)openContainerWithId:(id)arg1 tagManager:(id)arg2 openType:(int)arg3 timeout:(double *)arg4 notifier:(id)arg5;
+ (id)openContainerWithId:(id)arg1 tagManager:(id)arg2 openType:(int)arg3 timeout:(double *)arg4;
+ (double)defaultTimeout;
+ (void)initialize;
@property(retain) TAGContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id <TAGContainerOpenerNotifier> notifier; // @synthesize notifier=_notifier;
@property _Bool haveNotified; // @synthesize haveNotified=_haveNotified;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
- (void).cxx_destruct;
- (void)handleTimer:(id)arg1;
- (void)callNotifiers:(id)arg1;
- (void)openWithRefreshType:(int)arg1;
- (id)initWithContainerId:(id)arg1 tagManager:(id)arg2 timeout:(double *)arg3 notifier:(id)arg4;

@end

