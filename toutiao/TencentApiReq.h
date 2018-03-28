//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface TencentApiReq : NSObject <NSCoding>
{
    long long _nMessageType;
    long long _nPlatform;
    long long _nSdkVersion;
    long long _nSeq;
    NSArray *_arrMessage;
    NSString *_sAppID;
    NSString *_sDescription;
}

+ (id)reqFromSeq:(long long)arg1 type:(int)arg2;
@property(retain, nonatomic) NSString *sDescription; // @synthesize sDescription=_sDescription;
@property(retain, nonatomic) NSString *sAppID; // @synthesize sAppID=_sAppID;
@property(retain, nonatomic) NSArray *arrMessage; // @synthesize arrMessage=_arrMessage;
@property(readonly) long long nSeq; // @synthesize nSeq=_nSeq;
@property(readonly) long long nSdkVersion; // @synthesize nSdkVersion=_nSdkVersion;
@property(readonly) long long nPlatform; // @synthesize nPlatform=_nPlatform;
@property(readonly) long long nMessageType; // @synthesize nMessageType=_nMessageType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(long long)arg1 type:(int)arg2;

@end

