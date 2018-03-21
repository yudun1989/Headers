//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZGroupAlbumUploadPermissionManager : NSObject
{
    NSMutableDictionary *_callbacks;
}

+ (void)reportPermissionDenied;
+ (id)errorString;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)onFetchGroupInfo:(id)arg1;
- (void)fetchtGroupInfo:(unsigned long long)arg1;
- (void)onNotifyFetchUploadPermission:(id)arg1;
- (void)fetchUploadPermissionWithGroupCode:(long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)unregisterCallbackWithGroupCode:(long long)arg1;
- (id)init;

@end

