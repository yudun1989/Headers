//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OffLinePictureLogic : NSObject
{
    long long _totalLen;
    long long _bodyLen;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
- (id)ParseGroupPicMsg:(const char *)arg1 dataLen:(int)arg2 Gid:(id)arg3 Time:(int)arg4 peerUin:(long long)arg5 SeqId:(int)arg6 groupPicInfo:(id)arg7 appShareID:(unsigned int)arg8 ignoredSelfRich:(int)arg9 marketFaceInfo:(id)arg10;
- (id)paraseOfflinePictureMassage:(const char *)arg1 len:(int)arg2 FromUin:(id)arg3 appShareID:(unsigned int)arg4 nickName:(id)arg5;
- (_Bool)checkIsOfflinePicture:(const char *)arg1;
- (int)decodeOfflinePicture:(const char *)arg1 offlinePicInfo:(id *)arg2;
- (id)getPictureRealInfo:(const char *)arg1;
- (id)convertMixMessageToNSSTring:(const char *)arg1 length:(int)arg2;

@end

