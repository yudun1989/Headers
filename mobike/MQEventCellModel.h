//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQCellModelProtocol-Protocol.h"

@class NSDate, NSString;

@interface MQEventCellModel : NSObject <MQCellModelProtocol>
{
    NSString *_messageId;
    double _cellHeight;
    NSString *_eventContent;
    NSDate *_date;
    double _cellWidth;
    struct CGRect _eventLabelFrame;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) struct CGRect eventLabelFrame; // @synthesize eventLabelFrame=_eventLabelFrame;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *eventContent; // @synthesize eventContent=_eventContent;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (_Bool)isServiceRelatedCell;
- (id)getCellWithReuseIdentifier:(id)arg1;
- (void)updateCellMessageDate:(id)arg1;
- (void)updateCellMessageId:(id)arg1;
- (id)getCellMessageId;
- (id)getCellDate;
- (double)getCellHeight;
- (id)initCellModelWithMessage:(id)arg1 cellWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

