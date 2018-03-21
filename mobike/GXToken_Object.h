//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GXDatagram.h"

@class NSString;

@interface GXToken_Object : GXDatagram
{
    unsigned long long tokenId_;
    NSString *tokenIdRepr_;
    NSString *registerId_;
    NSString *cid_;
}

+ (id)serializeRequestToCommandId:(char *)arg1 andIMEI:(id)arg2 andIMSI:(id)arg3 andRegisterId:(id)arg4 andAppId:(id)arg5;
+ (id)tokenInUserDefaultsWithKey:(id)arg1;
@property(readonly, nonatomic) NSString *cid; // @synthesize cid=cid_;
@property(readonly, nonatomic) NSString *registerId; // @synthesize registerId=registerId_;
@property(readonly, nonatomic) NSString *tokenIdRepr; // @synthesize tokenIdRepr=tokenIdRepr_;
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=tokenId_;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithToken:(unsigned long long)arg1 clientId:(id)arg2;
- (id)initWithToken:(unsigned long long)arg1;
- (void)initTokenObjectInfo:(id)arg1;
- (void)setCidOfOldVerServer:(id)arg1;
- (id)initWithBytes:(id)arg1;

@end

