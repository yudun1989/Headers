//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBReqGeneralListModel.h>

@class NSString;

@interface TBReqMsgTabNodeList : TBReqGeneralListModel
{
    NSString *_currentSeq;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *currentSeq; // @synthesize currentSeq=_currentSeq;
- (id)getRequestPBData;
- (void)dealloc;

@end

