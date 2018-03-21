//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQCellModelProtocol-Protocol.h"

@class NSDate, NSString;

@interface MQMessageDateCellModel : NSObject <MQCellModelProtocol>
{
    double _cellHeight;
    NSDate *_date;
    NSString *_dateString;
    double _cellWidth;
    struct CGRect _dateLabelFrame;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) struct CGRect dateLabelFrame; // @synthesize dateLabelFrame=_dateLabelFrame;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (id)getCellMessageId;
- (_Bool)isServiceRelatedCell;
- (id)getCellDate;
- (id)getCellWithReuseIdentifier:(id)arg1;
- (double)getCellHeight;
- (id)initCellModelWithDate:(id)arg1 cellWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
