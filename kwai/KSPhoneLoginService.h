//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLoginService.h"

@class _KSOldPhoneLoginService;

@interface KSPhoneLoginService : KSLoginService
{
    _KSOldPhoneLoginService *_oldPhoneLoginService;
}

@property(retain, nonatomic) _KSOldPhoneLoginService *oldPhoneLoginService; // @synthesize oldPhoneLoginService=_oldPhoneLoginService;
- (void).cxx_destruct;
- (id)processLoginResponse:(id)arg1 context:(id)arg2;
- (Class)responseClass;
- (_Bool)needAppendTimestampSecret;
- (id)paramsFromContext:(id)arg1;
- (id)apiPath;
- (id)validateParams:(id)arg1;

@end

