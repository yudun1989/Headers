//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RpcBaseModel.h"

@class NSString;

@interface APIndustryBaseResponse : RpcBaseModel
{
    _Bool _success;
    NSString *_av;
    NSString *_ct;
    NSString *_errorCode;
    NSString *_errorMessage;
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *ct; // @synthesize ct=_ct;
@property(retain, nonatomic) NSString *av; // @synthesize av=_av;
- (void).cxx_destruct;

@end

