//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQMsgReadedReportPBUnpack : NSObject
{
}

- (void)unPackMsgReadedReport:(CDStruct_7895f40e)arg1 task:(id)arg2;
- (void)_unPackMsgBindUinReadedReport:(struct PbBindUinMsgReadedConfirmResp *)arg1;
- (void)_unPackMsgDisReadedReport:(struct PbDiscussReadedReportResp *)arg1;
- (void)_unPackMsgGroupReadedReport:(struct PbGroupReadedReportResp *)arg1;
- (void)_unPackMsgC2CReadedReport:(struct PbC2CReadedReportResp *)arg1 uin:(id)arg2 task:(id)arg3;
- (void)_unPackMsgC2CBatchReadedReport:(struct PbC2CReadedReportResp *)arg1 task:(id)arg2;

@end

