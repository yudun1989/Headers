//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface EMJUserTrack : NSObject
{
    NSDictionary *_seedIdMaps;
    NSMutableDictionary *_userInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)trackEvent:(id)arg1;
- (id)init;
- (void)setUserInfoKey:(id)arg1 value:(id)arg2;

@end

