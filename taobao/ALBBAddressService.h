//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALBBAddressService : NSObject
{
}

+ (void)requestSignUserRelationStationWithParam:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestGetUserRelationStationWithParam:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestStreetWithParam:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestAreaWithParam:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestAddAddressWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestEditAddressWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestDeleteAddressWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestSetAddressAsDefaultWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)requestAddressListWithParam:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)startRequestWithApiName:(id)arg1 version:(id)arg2 param:(id)arg3 SuccessBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 needLogin:(_Bool)arg6;

@end

