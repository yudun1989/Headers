//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XRainbowOption : NSObject
{
    NSString *_orangeName;
    NSString *_appVersion;
    NSString *_utdid;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *orangeName; // @synthesize orangeName=_orangeName;
- (void).cxx_destruct;
- (_Bool)isBeta;
- (id)init;

@end
