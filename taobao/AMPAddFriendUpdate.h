//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSString;

@interface AMPAddFriendUpdate : AMPDataUpdate
{
    NSString *_identity;
    NSString *_identityType;
    NSString *_remark;
    NSString *_contactName;
}

@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *identityType; // @synthesize identityType=_identityType;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (id)initWithIdentity:(id)arg1 type:(id)arg2 remark:(id)arg3 contactName:(id)arg4;

@end

