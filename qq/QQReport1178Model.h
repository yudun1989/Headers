//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSArray, NSString;

@interface QQReport1178Model : QQReportBaseModel <QQReportProtocol>
{
    int dwop_cnt;
    int camera;
    int rotation;
    int screen_display;
    int filter_duration;
    int doodle_duration;
    NSString *dwfuin;
    NSString *dwtuin;
    NSString *location_lbs;
    NSString *roomid;
    NSString *beautification;
    NSString *beautification_level;
    NSString *function;
    NSString *sub_function;
    NSString *object_id;
    NSString *object_duration;
    NSString *filter_id;
    NSString *doodle_id;
    NSArray *ReserveFieldArray;
    NSString *dwflag1;
    NSString *dwflag2;
    NSString *dwflag3;
    NSString *dwflag4;
    NSString *sflag5;
    NSString *sflag6;
    NSString *sflag7;
}

+ (id)keyList;
@property(copy, nonatomic) NSString *sflag7; // @synthesize sflag7;
@property(copy, nonatomic) NSString *sflag6; // @synthesize sflag6;
@property(copy, nonatomic) NSString *sflag5; // @synthesize sflag5;
@property(copy, nonatomic) NSString *dwflag4; // @synthesize dwflag4;
@property(copy, nonatomic) NSString *dwflag3; // @synthesize dwflag3;
@property(copy, nonatomic) NSString *dwflag2; // @synthesize dwflag2;
@property(copy, nonatomic) NSString *dwflag1; // @synthesize dwflag1;
@property(retain, nonatomic) NSArray *ReserveFieldArray; // @synthesize ReserveFieldArray;
@property(nonatomic) int doodle_duration; // @synthesize doodle_duration;
@property(copy, nonatomic) NSString *doodle_id; // @synthesize doodle_id;
@property(nonatomic) int filter_duration; // @synthesize filter_duration;
@property(copy, nonatomic) NSString *filter_id; // @synthesize filter_id;
@property(copy, nonatomic) NSString *object_duration; // @synthesize object_duration;
@property(copy, nonatomic) NSString *object_id; // @synthesize object_id;
@property(copy, nonatomic) NSString *sub_function; // @synthesize sub_function;
@property(copy, nonatomic) NSString *function; // @synthesize function;
@property(nonatomic) int screen_display; // @synthesize screen_display;
@property(copy, nonatomic) NSString *beautification_level; // @synthesize beautification_level;
@property(copy, nonatomic) NSString *beautification; // @synthesize beautification;
@property(nonatomic) int rotation; // @synthesize rotation;
@property(nonatomic) int camera; // @synthesize camera;
@property(copy, nonatomic) NSString *roomid; // @synthesize roomid;
@property(copy, nonatomic) NSString *location_lbs; // @synthesize location_lbs;
@property(nonatomic) int dwop_cnt; // @synthesize dwop_cnt;
@property(copy, nonatomic) NSString *dwtuin; // @synthesize dwtuin;
@property(copy, nonatomic) NSString *dwfuin; // @synthesize dwfuin;
- (void)dealloc;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

