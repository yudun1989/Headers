//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSCocosLaunchProtocol-Protocol.h"

@class NSRegularExpression, NSString;

@interface TTLGiftConfig : NSObject <HTSCocosLaunchProtocol>
{
    _Bool _optimizeDefaultImage;
    NSRegularExpression *_rex;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NSRegularExpression *rex; // @synthesize rex=_rex;
@property(nonatomic) _Bool optimizeDefaultImage; // @synthesize optimizeDefaultImage=_optimizeDefaultImage;
- (void).cxx_destruct;
- (unsigned long long)getImageType:(id)arg1;
- (id)_configKey:(id)arg1 value:(id)arg2 toString:(id)arg3;
- (id)originalImageURL:(id)arg1;
- (id)configAvatarImageURL:(id)arg1;
- (id)configGiftImageURL:(id)arg1;
- (void)cocosDidFinishLaunching;
- (void)cocosWillLaunching;
- (void)setupCocosImageLoaderDependency;
- (void)setupCocosTrackerDependency;
- (void)setupCocosResourceDependency;
- (id)cocosImageCache;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

