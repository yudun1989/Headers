//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface O2OPageMenuItem : NSObject <NSCopying>
{
    _Bool _isNativeImage;
    _Bool _showRed;
    unsigned long long _index;
    NSString *_tid;
    NSString *_title;
    NSString *_selectedTitle;
    NSString *_normalImageUrl;
    NSString *_selectedImageUrl;
    NSString *_spm;
    double _delayRemoveRedTime;
}

@property(nonatomic) double delayRemoveRedTime; // @synthesize delayRemoveRedTime=_delayRemoveRedTime;
@property(nonatomic) _Bool showRed; // @synthesize showRed=_showRed;
@property(nonatomic) _Bool isNativeImage; // @synthesize isNativeImage=_isNativeImage;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *selectedImageUrl; // @synthesize selectedImageUrl=_selectedImageUrl;
@property(retain, nonatomic) NSString *normalImageUrl; // @synthesize normalImageUrl=_normalImageUrl;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

