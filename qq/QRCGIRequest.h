//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QRCGIRequest : NSObject
{
    NSString *_baseURL;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dicitonaryToQueryString:(id)arg1;
- (id)dicitonaryToJSONString:(id)arg1;
- (void)requestWithMoudle:(id)arg1 method:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (id)init;

@end

