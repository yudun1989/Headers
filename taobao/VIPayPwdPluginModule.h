//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ImmPayPwd, VIPasswdModule, VIPasswdVerifyService;

@interface VIPayPwdPluginModule : NSObject
{
    ImmPayPwd *_pwdInputView;
    VIPasswdVerifyService *_verifyService;
    VIPasswdModule *_module;
}

@property(nonatomic) __weak VIPasswdModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)handleOnResponse:(id)arg1 status:(unsigned long long)arg2 verifyStatus:(unsigned long long)arg3 userAction:(unsigned long long)arg4;
- (id)pwdType;
- (void)reset;
- (void)resetWithoutClear;
- (void)verifyWithPwdInputView:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

