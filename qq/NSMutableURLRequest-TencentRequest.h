//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (TencentRequest)
+ (void)utfAppendBody:(id)arg1 data:(id)arg2;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)generateOtherPostBody:(id)arg1;
+ (id)generatePostBody:(id)arg1 fileName:(id)arg2;
+ (id)tencentRequest:(id)arg1 httpMethod:(id)arg2 timeout:(double)arg3 params:(id)arg4 httpHeads:(id)arg5 cookie:(id)arg6 fileName:(id)arg7;
+ (id)tencentRequest:(id)arg1 httpMethod:(id)arg2 timeout:(double)arg3 params:(id)arg4 httpHeads:(id)arg5 cookie:(id)arg6;
@end

