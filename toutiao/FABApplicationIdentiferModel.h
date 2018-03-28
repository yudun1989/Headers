//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FABIcon, NSDictionary, NSString;

@interface FABApplicationIdentiferModel : NSObject
{
    NSDictionary *_architectureUUIDMap;
    NSString *_installID;
    FABIcon *_icon;
    NSString *_bundleIdentifier;
    NSString *_instanceIdentifier;
    CDStruct_e24ffa00 _builtSDK;
    CDStruct_e24ffa00 _minimumSDK;
}

@property(readonly, nonatomic) CDStruct_e24ffa00 minimumSDK; // @synthesize minimumSDK=_minimumSDK;
@property(readonly, nonatomic) CDStruct_e24ffa00 builtSDK; // @synthesize builtSDK=_builtSDK;
@property(copy, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) FABIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSDictionary *architectureUUIDMap; // @synthesize architectureUUIDMap=_architectureUUIDMap;
- (void).cxx_destruct;
- (_Bool)computeInstanceIdentifier;
- (_Bool)computeExecutableInfo;
@property(readonly, nonatomic) NSString *minimumSDKString;
@property(readonly, nonatomic) NSString *builtSDKString;
- (id)initWithInstallID:(id)arg1;

@end

