//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTABaseReqModel.h"

@class NSString;

@interface TTAValidateSMSCodeReqModel : TTABaseReqModel
{
    NSString *_SMSCodeString;
    NSString *_captchaString;
    long long _SMSCodeType;
}

@property(nonatomic) long long SMSCodeType; // @synthesize SMSCodeType=_SMSCodeType;
@property(copy, nonatomic) NSString *captchaString; // @synthesize captchaString=_captchaString;
@property(copy, nonatomic) NSString *SMSCodeString; // @synthesize SMSCodeString=_SMSCodeString;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

