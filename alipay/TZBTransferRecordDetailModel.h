//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YEBTransferRecordDetailModel.h"

@class NSString;

@interface TZBTransferRecordDetailModel : YEBTransferRecordDetailModel
{
    _Bool _needRequest;
    NSString *_uuid;
    NSString *_amoutString;
    NSString *_memoString;
    NSString *_dateString;
    NSString *_detailTitle;
    NSString *_orderNo;
}

+ (id)modelWithTransferListItem:(id)arg1;
@property(nonatomic) _Bool needRequest; // @synthesize needRequest=_needRequest;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSString *memoString; // @synthesize memoString=_memoString;
@property(retain, nonatomic) NSString *amoutString; // @synthesize amoutString=_amoutString;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

