//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWEVideoPlayNetworkManager : NSObject
{
}

+ (id)sharedInstance;
- (id)requestJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestJSONFromURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 model:(Class)arg5 callback:(CDUnknownBlockType)arg6;
- (id)requestJSONFromURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;

@end

