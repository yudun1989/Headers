//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol ALIJPayProtocol <NSObject>
- (void)payPasswrdValidateSignStr:(NSString *)arg1 simpleCallBack:(void (^)(_Bool, NSError *, NSString *))arg2;
- (void)payWithSimplePay:(_Bool)arg1 signStr:(NSString *)arg2 alipayUrl:(NSString *)arg3 backUrl:(NSString *)arg4 unSuccessUrl:(NSString *)arg5 needPop:(_Bool)arg6 extraParams:(NSDictionary *)arg7 simpleCallBack:(void (^)(_Bool, NSError *))arg8 wapCallBack:(void (^)(NSString *))arg9;
@end

