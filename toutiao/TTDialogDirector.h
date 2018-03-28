//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, _TTDialogRequest_;

@interface TTDialogDirector : NSObject
{
    _Bool _queueEnabled;
    _TTDialogRequest_ *_presentingDialogRequest;
    NSMutableDictionary *_priorityDlgsDict;
    NSMutableDictionary *_locationDlgsDict;
    NSMutableDictionary *_keepAliveDlgsDict;
    NSCountedSet *_dlgRequestCountedSet;
}

+ (id)presentingDialog;
+ (_Bool)containsDialogClass:(Class)arg1;
+ (_Bool)containsDialog:(id)arg1;
+ (void)dequeueDialog:(id)arg1;
+ (void)showLocationDialogForKey:(id)arg1;
+ (void)enqueueDialog:(id)arg1 atLocation:(id)arg2 shouldShowMe:(CDUnknownBlockType)arg3 showMe:(CDUnknownBlockType)arg4 hideForcedlyMe:(CDUnknownBlockType)arg5;
+ (void)showInstantlyDialog:(id)arg1 shouldShowMe:(CDUnknownBlockType)arg2 showMe:(CDUnknownBlockType)arg3 hideForcedlyMe:(CDUnknownBlockType)arg4;
+ (void)enqueueShowDialog:(id)arg1 withPriority:(long long)arg2 shouldShowMe:(CDUnknownBlockType)arg3 showMe:(CDUnknownBlockType)arg4 hideForcedlyMe:(CDUnknownBlockType)arg5;
+ (void)enqueueShowDialog:(id)arg1 shouldShowMe:(CDUnknownBlockType)arg2 showMe:(CDUnknownBlockType)arg3 hideForcedlyMe:(CDUnknownBlockType)arg4;
+ (_Bool)isEmpty;
+ (_Bool)isDialogShowing;
+ (void)setQueueEnabled:(_Bool)arg1;
+ (id)sharedDirector;
+ (void)load;
+ (void)setIsAPPFirstInstallLaunch:(_Bool)arg1;
+ (_Bool)isAPPFirstInstallLaunch;
+ (void)setDlgMaxStayTime:(double)arg1;
+ (double)dlgMaxStayTime;
+ (void)setHookEnabled:(_Bool)arg1;
+ (_Bool)hookEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)enabled;
+ (void)loadABEnabldNSUserDefaultFirstly;
+ (void)enqueueShowDialog:(id)arg1 withPriority:(long long)arg2 shouldShowMe:(CDUnknownBlockType)arg3 showMe:(CDUnknownBlockType)arg4 hideForcedlyMe:(CDUnknownBlockType)arg5 fitToOldMutexBusiness:(CDUnknownBlockType)arg6;
+ (long long)systemPermOptimizationType;
+ (void)setSystemPermOptimizationType:(long long)arg1;
@property(retain, nonatomic) NSCountedSet *dlgRequestCountedSet; // @synthesize dlgRequestCountedSet=_dlgRequestCountedSet;
@property(retain, nonatomic) NSMutableDictionary *keepAliveDlgsDict; // @synthesize keepAliveDlgsDict=_keepAliveDlgsDict;
@property(retain, nonatomic) NSMutableDictionary *locationDlgsDict; // @synthesize locationDlgsDict=_locationDlgsDict;
@property(retain, nonatomic) NSMutableDictionary *priorityDlgsDict; // @synthesize priorityDlgsDict=_priorityDlgsDict;
@property(retain, nonatomic) _TTDialogRequest_ *presentingDialogRequest; // @synthesize presentingDialogRequest=_presentingDialogRequest;
@property(nonatomic) _Bool queueEnabled; // @synthesize queueEnabled=_queueEnabled;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)enqueueShowDialog:(id)arg1 withPriority:(long long)arg2 atLocation:(id)arg3 shouldShowMe:(CDUnknownBlockType)arg4 showMe:(CDUnknownBlockType)arg5 hideForcedlyMe:(CDUnknownBlockType)arg6;
- (void)showInstantlyDialog:(id)arg1 shouldShowMe:(CDUnknownBlockType)arg2 showMe:(CDUnknownBlockType)arg3 hideForcedlyMe:(CDUnknownBlockType)arg4;
- (_Bool)isEmpty;
- (_Bool)isDialogShowing;
- (void)appDidFinishLaunching:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)_containsDialog:(id)arg1 withPriority:(long long)arg2 location:(id)arg3 checkClass:(_Bool)arg4;
- (void)_dequeueDialog:(id)arg1;
- (_Bool)_actuallyDoShowDialogRequest:(id)arg1 keepAliveCallback:(CDUnknownBlockType)arg2;
- (_Bool)_tryShowDialogRequests:(id)arg1 updateDlgsBlock:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (void)_showLocationDialogForKey:(id)arg1;
- (void)_showPriorityDialog;
- (void)_showDialogRequest:(id)arg1;
- (void)_enqueueDialogRequest:(id)arg1;

@end

