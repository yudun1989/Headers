//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TLSceneAdLog;

@interface TLSceneAd : NSObject
{
    NSString *_adId;
    NSString *_adImageUri;
    NSString *_adScheme;
    TLSceneAdLog *_adLog;
}

+ (id)sceneAdWithBriefInfo:(id)arg1 withAdLog:(id)arg2;
@property(retain, nonatomic) TLSceneAdLog *adLog; // @synthesize adLog=_adLog;
@property(retain, nonatomic) NSString *adScheme; // @synthesize adScheme=_adScheme;
@property(retain, nonatomic) NSString *adImageUri; // @synthesize adImageUri=_adImageUri;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;

@end
