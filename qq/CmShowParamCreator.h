//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CmShowParamCreator : NSObject
{
}

+ (id)getActionAudioInfoWithData:(id)arg1;
+ (id)addActionRscToSprite:(id)arg1 actionModel:(id)arg2 dataModel:(id)arg3;
+ (id)getActionScriptParamWithInfo:(id)arg1 chatModel:(id)arg2;
+ (id)getActionArrayWithRspArray:(id)arg1;
+ (id)getActionArrayWithReqDic:(id)arg1;
+ (id)getSpriteArrayWithSpriteRspArray:(id)arg1 chatModel:(id)arg2;
+ (id)getSendSpriteMsgParamWith:(id)arg1 actionType:(int)arg2;
+ (id)getInitSpriteParamWithSpriteRspData:(id)arg1 chatModel:(id)arg2 petRspData:(id)arg3;
+ (id)getAioCommonParamWithInfo:(id)arg1;
+ (id)getTransitionActionRscPathWithActionID:(short)arg1;
+ (id)getBubbleRscPathWithModel:(id)arg1;
+ (id)getActionRscPathWithModel:(id)arg1 isSend:(_Bool)arg2;
+ (id)getClothesRscPath:(id)arg1;
+ (id)getRscPathWithModel:(id)arg1;
+ (id)nickForGroupMember:(id)arg1 chatModel:(id)arg2;
+ (id)filteredBubbleContent:(id)arg1;
+ (id)dicToJSON:(id)arg1;

@end

