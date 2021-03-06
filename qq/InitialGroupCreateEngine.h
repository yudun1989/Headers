//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQLockDictionary;

@interface InitialGroupCreateEngine : NSObject
{
    QQLockDictionary *_createInviteMemDic;
    QQLockDictionary *_faceTofaceCreateGrpDic;
}

+ (id)titleInfoForGroup:(id)arg1;
+ (id)getNickFromGroupOrDiscuss:(id)arg1 Uin:(id)arg2 Type:(int)arg3;
+ (id)getSelfOrFriRealNickName:(id)arg1;
+ (id)createInitialGroupNameByMemNicks:(id)arg1;
+ (id)getUinWithMemberInfo:(id)arg1;
+ (id)getNickWithMemberInfo:(id)arg1;
+ (id)getInitialGroupNameWithInviteMemArray:(id)arg1;
+ (unsigned long long)lengthInBytesForString:(id)arg1;
+ (id)checkString:(id)arg1 ToLength:(unsigned long long)arg2;
+ (id)createGroupExtraInfoWithGrpCode:(unsigned long long)arg1 enterNum:(id)arg2;
+ (id)createGroupExtraInfoWithInviteMemInfos:(id)arg1 GrpCode:(unsigned long long)arg2 GrpUin:(unsigned long long)arg3 GrpName:(id)arg4;
+ (void)createCreateInitialGroupMsgWithGrpInfo:(id)arg1 fromEntry:(unsigned long long)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) QQLockDictionary *faceTofaceCreateGrpDic; // @synthesize faceTofaceCreateGrpDic=_faceTofaceCreateGrpDic;
@property(retain, nonatomic) QQLockDictionary *createInviteMemDic; // @synthesize createInviteMemDic=_createInviteMemDic;
- (void).cxx_destruct;
- (void)clearFaceToFaceGroup:(id)arg1;
- (id)inputNumForFaceToFaceGrp:(id)arg1;
- (void)udpateInputNum:(id)arg1 ForFaceTofaceGrp:(id)arg2;
- (_Bool)isMem:(unsigned long long)arg1 inCreateInviteMemListForGrp:(unsigned long long)arg2;
- (void)clearInviteMemUinsForGroup:(id)arg1;
- (void)updateCreateInviteMemUins:(id)arg1 ForGroup:(unsigned long long)arg2;
- (id)init;

@end

