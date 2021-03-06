//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBFeedSeqInfoModel : QQModel
{
    _Bool _isFakeInfo;
    unsigned int _seq;
    unsigned int _date;
    NSString *_feedID;
    NSString *_unionID;
}

+ (id)createFeedSeqInfo:(id)arg1;
+ (id)createFeedSeqInfo:(id)arg1 withUnionID:(id)arg2;
+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
+ (id)createWithFeedSeqInfo:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) _Bool isFakeInfo; // @synthesize isFakeInfo=_isFakeInfo;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (id)description;
- (void)dealloc;

@end

