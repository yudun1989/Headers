//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AUDialogDelegate-Protocol.h"
#import "DTMicroApplicationDelegate-Protocol.h"

@class DTMicroApplication, NSString;

@interface APVolumeSettingAppAppDelegate : NSObject <AUDialogDelegate, DTMicroApplicationDelegate>
{
    DTMicroApplication *_application;
}

@property(retain, nonatomic) DTMicroApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

