//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FTSBaseIndexSearchFilter.h>

@interface FTSDiscussMsgIndexSearchFilter : FTSBaseIndexSearchFilter
{
}

+ (_Bool)UpdateMsgToIndexTable:(id)arg1 conversationUin:(id)arg2 messageID:(long long)arg3 inDB:(id)arg4;
+ (id)convertSqlResultToQQMessageMogel:(id)arg1 uin:(id)arg2;
- (id)getMsg:(id)arg1 conversationUin:(id)arg2 inDb:(id)arg3;
- (long long)MySessionType;
- (long long)MyFilterType;
- (id)getExtSearchResultList:(id)arg1 inDB:(id)arg2;
- (id)init;

@end

