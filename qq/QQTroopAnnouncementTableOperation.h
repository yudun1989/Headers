//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface QQTroopAnnouncementTableOperation : NSObject <IQQDBOperationBase>
{
}

- (_Bool)delAllGrayTipsMsg:(id)arg1;
- (id)getGrayTipsToGroupDBInDb:(id)arg1;
- (id)GenerateMsgModel:(id)arg1;
- (_Bool)ClearAllOverdueGrayTipsMsg:(id)arg1;
- (_Bool)deleteAllTroopAnnouncementMsg:(id)arg1;
- (void)deleteTroopAnouncementMsgArr:(id)arg1 inDb:(id)arg2;
- (_Bool)deleteTroopAnnounceMsgBySeq:(long long)arg1 inDb:(id)arg2;
- (_Bool)deleteTroopAnouncementMsg:(long long)arg1 inDb:(id)arg2;
- (_Bool)deleteTroopAnouncementMsgOfReadState:(_Bool)arg1 GroupCode:(long long)arg2 inDb:(id)arg3;
- (_Bool)updateTroopAnouncementMsgArray:(id)arg1 inDb:(id)arg2;
- (_Bool)insertTroopAnouncementMsgArray:(id)arg1 inDb:(id)arg2;
- (id)GetAnouncementMsgWithSvrMsgId:(long long)arg1 inDb:(id)arg2;
- (id)GetAnouncementMsgWithMsgId:(long long)arg1 inDb:(id)arg2;
- (id)GetGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 Seq:(int)arg3 inDb:(id)arg4;
- (id)GetAnnouncementMsgWithSeq:(long long)arg1 groupCode:(long long)arg2 msgTime:(long long)arg3 inDb:(id)arg4;
- (id)GetAnouncementMsgOfReadState:(_Bool)arg1 inDb:(id)arg2;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 HadReaded:(_Bool)arg3 inDb:(id)arg4;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 HadReaded:(_Bool)arg4 inDb:(id)arg5;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 StartTime:(long long)arg3 EndTime:(long long)arg4 inDb:(id)arg5;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 TypeArray:(id)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5 inDb:(id)arg6;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 Type:(int)arg3 Type:(int)arg4 AscOrder:(_Bool)arg5 StartTime:(long long)arg6 EndTime:(long long)arg7 inDb:(id)arg8;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5 inDb:(id)arg6;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 limit:(int)arg3 inDb:(id)arg4;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 inDb:(id)arg3;
- (void)UpdateTroopAnnouncementTable:(id)arg1;
- (void)CreateTroopAnnouncementTable:(id)arg1;
- (unsigned long long)getTableSign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

