//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RCTBundleURLProvider : NSObject
{
}

+ (id)sharedSettings;
+ (id)resourceURLForResourcePath:(id)arg1 packagerHost:(id)arg2 query:(id)arg3;
+ (id)jsBundleURLForBundleRoot:(id)arg1 packagerHost:(id)arg2 enableDev:(_Bool)arg3 enableMinification:(_Bool)arg4;
@property(nonatomic) _Bool enableMinification;
@property(copy, nonatomic) NSString *jsLocation;
@property(nonatomic) _Bool enableLiveReload;
@property(nonatomic) _Bool enableDev;
- (void)updateValue:(id)arg1 forKey:(id)arg2;
- (id)resourceURLForResourceRoot:(id)arg1 resourceName:(id)arg2 resourceExtension:(id)arg3 offlineBundle:(id)arg4;
- (id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2;
- (id)packagerServerURL;
- (id)packagerServerHost;
- (void)resetToDefaults;
- (void)setDefaults;
- (void)settingsUpdated;
- (id)defaults;
- (id)init;

@end

