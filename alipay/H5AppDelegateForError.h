//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString, UIViewController;

@interface H5AppDelegateForError : NSObject <DTMicroApplicationDelegate>
{
    _Bool _ignoreWaitRender;
    UIViewController *_rootController;
    NSString *_appId;
}

@property(nonatomic) _Bool ignoreWaitRender; // @synthesize ignoreWaitRender=_ignoreWaitRender;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

