//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTAccountNetworkManager : NSObject
{
}

+ (id)uploadWithURL:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(id *)arg4 needcommonParams:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)requestModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)getRequestForJSONWithURL:(id)arg1 params:(id)arg2 extraGetParams:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)getRequestForJSONWithURL:(id)arg1 params:(id)arg2 needCommonParams:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)postRequestForJSONWithURL:(id)arg1 params:(id)arg2 extraGetParams:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)postRequestForJSONWithURL:(id)arg1 params:(id)arg2 needCommonParams:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)requestNoDispatchForJSONWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 extraGetParams:(id)arg4 needCommonParams:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)requestForJSONWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 extraGetParams:(id)arg4 needCommonParams:(_Bool)arg5 follow302Redirect:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 extraGetParams:(id)arg3 method:(id)arg4 needCommonParams:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)requestForJSONWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 extraGetParams:(id)arg4 needCommonParams:(_Bool)arg5 follow302Redirect:(_Bool)arg6 needDispatch:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;

@end

