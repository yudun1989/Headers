//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface GMSx_GIPPseudonymousIDStore : NSObject
{
    NSUserDefaults *_sharedStorage;
    NSString *_applicationGroupName;
}

+ (id)sharedInstance;
+ (void)enable;
@property(retain, nonatomic) NSString *applicationGroupName; // @synthesize applicationGroupName=_applicationGroupName;
- (void).cxx_destruct;
- (id)setPseudonymousIDFromResponse:(id)arg1;
- (void)updateRequestWithPseudonymousID:(id)arg1;
@property(retain, nonatomic) NSString *pseudonymousID;
- (id)init;

@end

