//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface ALBBResponse : NSObject
{
    _Bool _success;
    _Bool _netError;
    NSError *_resultError;
    NSString *_actionType;
    NSString *_code;
    NSString *_codeGroup;
    NSString *_message;
    NSString *_msgCode;
    NSString *_msgInfo;
    NSDictionary *_returnValue;
    NSDictionary *_rpcResult;
    id _compatibleValue;
    NSArray *_cookieArray;
    NSString *_h5Url;
    NSString *_accountH5Code;
    NSString *_mobileLoginUrl;
    NSString *_passwordFindUrl;
    NSString *_secMobile;
    NSString *_findPwdMsg;
}

@property(nonatomic) _Bool netError; // @synthesize netError=_netError;
@property(retain, nonatomic) NSString *findPwdMsg; // @synthesize findPwdMsg=_findPwdMsg;
@property(retain, nonatomic) NSString *secMobile; // @synthesize secMobile=_secMobile;
@property(retain, nonatomic) NSString *passwordFindUrl; // @synthesize passwordFindUrl=_passwordFindUrl;
@property(retain, nonatomic) NSString *mobileLoginUrl; // @synthesize mobileLoginUrl=_mobileLoginUrl;
@property(retain, nonatomic) NSString *accountH5Code; // @synthesize accountH5Code=_accountH5Code;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSArray *cookieArray; // @synthesize cookieArray=_cookieArray;
@property(copy, nonatomic) id compatibleValue; // @synthesize compatibleValue=_compatibleValue;
@property(retain, nonatomic) NSDictionary *rpcResult; // @synthesize rpcResult=_rpcResult;
@property(retain, nonatomic) NSDictionary *returnValue; // @synthesize returnValue=_returnValue;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(copy, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *codeGroup; // @synthesize codeGroup=_codeGroup;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
- (void).cxx_destruct;
- (id)init:(id)arg1 error:(id)arg2 compatibleKey:(id)arg3 scence:(int)arg4;

@end
