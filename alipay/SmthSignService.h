//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SmthSignService : NSObject
{
}

+ (id)sharedInstance;
- (id)smth_p_dic2String:(id)arg1;
- (id)smth_p_signWithContent:(id)arg1 appKey:(id)arg2 fromAlipay:(_Bool)arg3;
- (id)smth_p_appSignWithSsoVersion:(id)arg1 targetUrl:(id)arg2 t:(id)arg3 encrptedUuid:(id)arg4 appKey:(id)arg5 fromAlipay:(_Bool)arg6;
- (id)taobaoSignWithSsoVersion:(id)arg1 ssoToken:(id)arg2 userId:(id)arg3 t:(id)arg4 appKey:(id)arg5;
- (id)alipaySignWithSsoVersion:(id)arg1 targetUrl:(id)arg2 t:(id)arg3 encrptedUuid:(id)arg4 appKey:(id)arg5;
- (id)appSignWithSsoVersion:(id)arg1 targetUrl:(id)arg2 t:(id)arg3 encrptedUuid:(id)arg4 appKey:(id)arg5;

@end

