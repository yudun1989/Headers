//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WXHCManager : NSObject
{
    NSMutableDictionary *_mhcDict;
    NSArray *_domain;
}

+ (void)setup;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSMutableDictionary *mhcDict; // @synthesize mhcDict=_mhcDict;
- (void).cxx_destruct;
- (id)handler;
- (void)setUpNaviItem:(id)arg1;
- (void)releaseAllObjectForWeexMHC;
- (void)releaseObjectForWeexMHC:(id)arg1;
- (id)objectForWeexMHC:(id)arg1;
- (_Bool)isValidWeexMHC:(id)arg1;
- (id)init;

@end

