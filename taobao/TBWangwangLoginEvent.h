//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, YWIMCore;
@protocol TBWangwangLoginEventDelegate;

@interface TBWangwangLoginEvent : NSObject
{
    _Bool _hasFinishGetHavanaToken;
    unsigned long long _loginType;
    NSTimer *_havanaTokenTimeOutTimer;
    unsigned long long _loginStatus;
    id <TBWangwangLoginEventDelegate> _delegate;
    CDUnknownBlockType _loginCompletionBlock;
    YWIMCore *_imCore;
}

@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
@property(copy, nonatomic) CDUnknownBlockType loginCompletionBlock; // @synthesize loginCompletionBlock=_loginCompletionBlock;
@property(nonatomic) __weak id <TBWangwangLoginEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property(retain, nonatomic) NSTimer *havanaTokenTimeOutTimer; // @synthesize havanaTokenTimeOutTimer=_havanaTokenTimeOutTimer;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
- (void).cxx_destruct;
- (void)loginLog:(id)arg1;
- (void)didLoginTimeout;
- (void)didLoginFailedWithErrorMsg:(id)arg1 errCode:(long long)arg2;
- (void)didLoginSuccess;
- (void)stopHavanaTokenTimeoutTimer;
- (void)startHavanaTokenTimeoutTimer;
- (void)generateHavanaTokenTimeout:(id)arg1;
- (void)loginWtihHavanaToken:(id)arg1;
- (void)manualLogin;
- (void)autoLogin;
- (id)init;

@end

