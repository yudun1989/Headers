//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PackJumpInfo : NSObject
{
    unsigned long long _jumpType;
    NSString *_wording;
    NSString *_jumpUrl;
}

+ (id)jumpInfoFromDecoder:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (id)description;

@end

