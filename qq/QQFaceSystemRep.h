//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQFaceSystemRep : NSObject
{
    long long _tabID;
    long long _faceID;
    NSString *_faceText;
    struct _NSRange _range;
    _Bool _isSmallFace;
    int _xo;
}

+ (id)parseText:(id)arg1;
+ (void)initialize;
- (id)converToHistoryInfo;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTabID:(long long)arg1 withFaceText:(id)arg2;

// Remaining properties
@property(nonatomic) long long faceID; // @dynamic faceID;
@property(readonly, nonatomic) NSString *faceText; // @dynamic faceText;
@property(nonatomic) _Bool isSmallFace; // @dynamic isSmallFace;
@property(nonatomic) struct _NSRange range; // @dynamic range;
@property(readonly, nonatomic) long long tabID; // @dynamic tabID;

@end

