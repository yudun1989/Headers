//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableSection.h"

@class MVActivityNoticeView, MVCinemaSectionHeaderFooterView, MVSegmentControl, NSArray, NSString;

@interface MVCinemaSection : MVTableSection
{
    NSString *_regionName;
    long long _type;
    NSString *_noticeText;
    NSArray *_dateSelectorArray;
    NSArray *_hasIconArray;
    MVActivityNoticeView *_activityNoticeView;
    MVSegmentControl *_dateSegmentControl;
    MVCinemaSectionHeaderFooterView *_headerFooterView;
    id _parentCaller;
}

@property(nonatomic) __weak id parentCaller; // @synthesize parentCaller=_parentCaller;
@property(retain, nonatomic) MVCinemaSectionHeaderFooterView *headerFooterView; // @synthesize headerFooterView=_headerFooterView;
@property(retain, nonatomic) MVSegmentControl *dateSegmentControl; // @synthesize dateSegmentControl=_dateSegmentControl;
@property(retain, nonatomic) MVActivityNoticeView *activityNoticeView; // @synthesize activityNoticeView=_activityNoticeView;
@property(retain, nonatomic) NSArray *hasIconArray; // @synthesize hasIconArray=_hasIconArray;
@property(retain, nonatomic) NSArray *dateSelectorArray; // @synthesize dateSelectorArray=_dateSelectorArray;
@property(retain, nonatomic) NSString *noticeText; // @synthesize noticeText=_noticeText;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
- (void).cxx_destruct;
- (double)heightForHeaderInTableView:(id)arg1 inSection:(long long)arg2;
- (id)viewForHeaderInTableView:(id)arg1 section:(long long)arg2;
- (id)initWithType:(long long)arg1;

@end

