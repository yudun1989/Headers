//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ARUPRequestFactory : NSObject
{
}

+ (id)getURLByAPIName:(id)arg1 useIP:(_Bool)arg2;
+ (id)getSignByURL:(id)arg1 appkey:(id)arg2 deviceID:(id)arg3 timeStamp:(id)arg4;
+ (id)getQuery:(id)arg1;
+ (id)getAPIProtocolHeadersWithURL:(id)arg1;
+ (id)getRequestForGetUploadInfoWithUseIP:(_Bool)arg1 error:(id *)arg2;

@end

