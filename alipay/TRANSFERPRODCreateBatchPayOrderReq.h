//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TRANSFERPRODCreateBatchPayOrderReq : NSObject
{
    _Bool _toFriends;
    NSString *_payeeName;
    NSString *_payAmount;
    NSString *_batchNo;
    NSString *_shareObjId;
    NSString *_shareObjType;
    NSString *_token;
    NSString *_friendSource;
}

@property(retain, nonatomic) NSString *friendSource; // @synthesize friendSource=_friendSource;
@property(nonatomic) _Bool toFriends; // @synthesize toFriends=_toFriends;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *shareObjType; // @synthesize shareObjType=_shareObjType;
@property(retain, nonatomic) NSString *shareObjId; // @synthesize shareObjId=_shareObjId;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *payeeName; // @synthesize payeeName=_payeeName;
- (void).cxx_destruct;

@end

