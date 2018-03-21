//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliPayAuth;

@interface SmthAlipayService : NSObject
{
    AliPayAuth *_aliPayAuth;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AliPayAuth *aliPayAuth; // @synthesize aliPayAuth=_aliPayAuth;
- (void).cxx_destruct;
- (_Bool)canHandleAlipayCallbackUrl:(id)arg1;
- (void)openAliPayAuth:(id)arg1 uuid:(id)arg2 callback:(id)arg3;
- (_Bool)canOpenAlipay;
- (_Bool)canSupportAliPayAuth;
- (_Bool)canSupportGo2ALipayAuth;
- (void)initAliPayAuthWithDelegate:(id)arg1;

@end

