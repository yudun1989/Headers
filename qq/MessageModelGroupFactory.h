//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MessageModelBaseFactory.h>

@class NSMutableArray;

@interface MessageModelGroupFactory : MessageModelBaseFactory
{
    NSMutableArray *atGroupMemArr;
    NSMutableArray *atGroupMemDataArr;
}

- (void)QQSetWORD:(char *)arg1 from:(unsigned short)arg2;
- (void)QQSetDWORD:(char *)arg1 from:(unsigned int)arg2;
- (void)fillAtGroupData:(id)arg1 memUin:(unsigned int)arg2;
- (void)addQuoteMsAtInfo:(id)arg1;
- (id)getAbstractQuoteModel:(id)arg1 replyInfo:(id)arg2;
- (id)createTextMsg:(id)arg1 toUin:(id)arg2 Info:(id)arg3;

@end

