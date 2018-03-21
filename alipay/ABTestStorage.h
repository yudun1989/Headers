//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ABTestStorage : NSObject
{
    _Bool _isSfcPosHit;
    _Bool _isSfcTestOpen;
    _Bool _isScsPosHit;
    _Bool _isScsTestOpen;
    _Bool _isStcPosHit;
    _Bool _isStcTestOpen;
    _Bool _isZstdTestOpen;
    _Bool _isZstdPosHit;
    _Bool _isTagHit;
    NSDictionary *_abTestDict;
    NSString *_tag;
    NSString *_upTag;
}

+ (id)shareInstance;
@property _Bool isTagHit; // @synthesize isTagHit=_isTagHit;
@property(retain) NSString *upTag; // @synthesize upTag=_upTag;
@property(retain) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDictionary *abTestDict; // @synthesize abTestDict=_abTestDict;
@property _Bool isZstdPosHit; // @synthesize isZstdPosHit=_isZstdPosHit;
@property _Bool isZstdTestOpen; // @synthesize isZstdTestOpen=_isZstdTestOpen;
@property _Bool isStcTestOpen; // @synthesize isStcTestOpen=_isStcTestOpen;
@property _Bool isStcPosHit; // @synthesize isStcPosHit=_isStcPosHit;
@property _Bool isScsTestOpen; // @synthesize isScsTestOpen=_isScsTestOpen;
@property _Bool isScsPosHit; // @synthesize isScsPosHit=_isScsPosHit;
@property _Bool isSfcTestOpen; // @synthesize isSfcTestOpen=_isSfcTestOpen;
@property _Bool isSfcPosHit; // @synthesize isSfcPosHit=_isSfcPosHit;
- (void).cxx_destruct;
- (void)createMTag;
- (void)setABTestMap:(id)arg1 hit:(_Bool)arg2;
- (id)init;

@end

