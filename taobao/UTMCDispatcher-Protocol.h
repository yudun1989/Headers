//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UTMCLogObject;

@protocol UTMCDispatcher <NSObject>
- (void)dispatchLog:(UTMCLogObject *)arg1;

@optional
- (void)setUploadInterval:(long long)arg1;
- (void)synchronize;
- (void)setUploadURL:(NSString *)arg1;
@end

