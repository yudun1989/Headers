//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRANSFERPRODBaseResp.h"

@class NSString;

@interface TRANSFERPRODQueryReceiverInfoResp : TRANSFERPRODBaseResp
{
    NSString *_userAccount;
    NSString *_userID;
    NSString *_userName;
    NSString *_userNicklName;
    NSString *_accountType;
    NSString *_headUrl;
    NSString *_limitAmount;
    NSString *_receiveFlag;
    NSString *_receiveMemo;
    NSString *_warningMessage;
    NSString *_userRealName;
    NSString *_source;
    NSString *_userRealNameForCollect;
}

@property(retain, nonatomic) NSString *userRealNameForCollect; // @synthesize userRealNameForCollect=_userRealNameForCollect;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *userRealName; // @synthesize userRealName=_userRealName;
@property(retain, nonatomic) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(retain, nonatomic) NSString *receiveMemo; // @synthesize receiveMemo=_receiveMemo;
@property(retain, nonatomic) NSString *receiveFlag; // @synthesize receiveFlag=_receiveFlag;
@property(retain, nonatomic) NSString *limitAmount; // @synthesize limitAmount=_limitAmount;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *userNicklName; // @synthesize userNicklName=_userNicklName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *userAccount; // @synthesize userAccount=_userAccount;
- (void).cxx_destruct;

@end

