//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol AlibcFCMtopProtocol;

@protocol AlibcFCMtopProtocol <NSObject>
+ (void)setEnvironment:(unsigned long long)arg1;
+ (id <AlibcFCMtopProtocol>)requestWithApiMethod:(NSString *)arg1 apiVersion:(NSString *)arg2 appkey:(NSString *)arg3;
- (void)cancelRequest;
- (void)addDataParam:(NSDictionary *)arg1;
- (void)addDataParam:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)removeParam:(NSString *)arg1;
- (void)setFailBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)setFinishBlock:(void (^)(NSDictionary *))arg1;
- (void)startAsynchronous;
@end

